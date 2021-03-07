#define buzzer 12  //Pin 12
void setup() 
{                
    pinMode(buzzer, OUTPUT); // Defining buzzer pin as OUTPUT Pin.   
}
void loop() {
  digitalWrite(buzzer, HIGH); // buzzer gets turned ON (1/HIGH/+5V/D12)
  delay(200);             // Waiting for 200 milli second. 
  digitalWrite(buzzer, LOW);  // buzzer gets OFF (0/LOW/0V/GND)
  delay(3000);        // here and above Delay is in milli second (3000 = 3 second)
}
