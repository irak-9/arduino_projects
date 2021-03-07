#define buzzer 12  // from the circuit we can see that we have connected LED on Pin 13


void setup() 
{                
    pinMode(buzzer, OUTPUT); // Defining LED pin as OUTPUT Pin.   
}

// Below mentioned code runs for ever(infinite loop)
void loop() {
  digitalWrite(buzzer, HIGH); // LED gets turned ON (1/HIGH/+5V)
  delay(200);             // Waiting for one second. 
  digitalWrite(buzzer, LOW);  // LED gets OFF (0/LOW/0V/GND)
  delay(3000);        // here and above Delay is in mili second (1000 = 1 second)
}
