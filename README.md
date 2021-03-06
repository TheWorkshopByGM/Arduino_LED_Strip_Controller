# Arduino_LED_Strip_Controller
In this project we will see how to build an Arduino Led Strip Controller!

To better understand how to control a LED using an Arduino watch the Youtube Tutorial here: https://www.youtube.com/watch?v=pQlGFEgBSDU&ab_channel=TheWorkshop

First you will need to assemble the following circuit: 
<img width="1286" alt="Circuit Sketch" src="https://user-images.githubusercontent.com/80882855/114159598-a0c8ed80-992e-11eb-81b4-140a30ec75ee.png">

You can first test controlling a single LED on a breadboard using this circuit:
<img width="1368" alt="Nano Single" src="https://user-images.githubusercontent.com/80882855/114161105-5c3e5180-9930-11eb-86fc-0b16cb46034c.png">

or test controlling an RGB LED on a breadboard using this circuit:
<img width="1361" alt="Nano RGB" src="https://user-images.githubusercontent.com/80882855/114161058-4a5cae80-9930-11eb-9798-8cf84e2f010f.png">

Then you need to upload the Arduino sketch to the Arduino nano.
The "RGB_LED_Strip_Controller_Test.ino" is used to make sure the circuit is working correctly, and will only flash the RGB colors sequentially.
The "RGB_LED_Strip_Controller_PWM.ino" is a library which includes different animations for yout RGB led strip.
