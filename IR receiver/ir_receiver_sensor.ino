#include<IRremote.h>
const int ProxSensor=2;
int inputVal = 0;
IRrecv irrecv(ProxSensor);
decode_results results;


void setup() 
{                
  pinMode(13, OUTPUT);          // Pin 13 has an LED connected on most Arduino boards:  
  pinMode(ProxSensor,INPUT);    //Pin 2 is connected to the output of proximity sensor
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() 
{
  if (irrecv.decode(&results)) {
    irrecv.resume(); // Receive the next value
    
    if(results.value==0xFD08F7)      //Check the sensor output
    {
      digitalWrite(13, HIGH);   // set the LED on
    }
    else if(results.value==0xFD30CF)
    {
      digitalWrite(13, LOW);    // set the LED off
    }
inputVal = digitalRead(ProxSensor);

delay(100);              // wait for a second
}
}
