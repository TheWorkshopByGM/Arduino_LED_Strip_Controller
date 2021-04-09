//The Workshop - LED Strip Controller Test V0.1
//Use this code to test your RGB LED strip controller

//Match every color with its corresponsing pin 
//PS: Make sure the pins can handle PWM!
int Red=3;
int Green=5;
int Blue=6;

void setup() {
  // put your setup code here, to run once:
  analogWrite(Red,0);     //Turn OFF the RED Light
  analogWrite(Green,0);   //Turn OFF the GREEN Light
  analogWrite(Blue,0);    //Turn OFF the BLUE Light
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(Red,255);   //Turn ON the RED Light
  analogWrite(Green,0);   //Turn OFF the GREEN Light
  analogWrite(Blue,0);    //Turn OFF the BLUE Light
  delay(1000);            // WAIT for 1000ms (1s)
  analogWrite(Red,0);     //Turn OFF the RED Light
  analogWrite(Green,255); //Turn ON the GREEN Light
  analogWrite(Blue,0);    //Turn OFF the BLUE Light
  delay(1000);            // WAIT for 1000ms (1s)
  analogWrite(Red,0);     //Turn OFF the RED Light
  analogWrite(Green,0);   //Turn OFF the GREEN Light
  analogWrite(Blue,255);  //Turn ON the BLUE Light
  delay(1000);            // WAIT for 1000ms (1s)
}
