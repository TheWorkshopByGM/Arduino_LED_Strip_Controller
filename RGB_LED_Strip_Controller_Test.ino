//The Workshop - LED Strip Controller Test V0.1
//
//Use this code to test your RGB LED strip controller

//Match every color with its corresponsing pin and make sure the pins can handle PWM!
int Red=3;
int Green=5;
int Blue=6;

void setup() {
  // put your setup code here, to run once:
  digitalWrite(Red,LOW);    //Turn OFF the RED Light
  digitalWrite(Green,LOW);  //Turn OFF the GREEN Light
  digitalWrite(Blue,LOW);   //Turn OFF the BLUE Light
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Red,HIGH);   //Turn ON the RED Light
  digitalWrite(Green,LOW);  //Turn OFF the GREEN Light
  digitalWrite(Blue,LOW);   //Turn OFF the BLUE Light
  delay(1000);              // WAIT for 1000ms (1s)
  digitalWrite(Red,LOW);    //Turn OFF the RED Light
  digitalWrite(Green,HIGH); //Turn ON the GREEN Light
  digitalWrite(Blue,LOW);   //Turn OFF the BLUE Light
  delay(1000);              // WAIT for 1000ms (1s)
  digitalWrite(Red,LOW);    //Turn OFF the RED Light
  digitalWrite(Green,LOW);  //Turn OFF the GREEN Light
  digitalWrite(Blue,HIGH);  //Turn ON the BLUE Light
  delay(1000);              // WAIT for 1000ms (1s)
}
