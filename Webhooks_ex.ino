//  Webhook firmware:

//  LED pin:
int led = D7;

void setup() 
{
    //  Set direction on pin:
    pinMode(led, OUTPUT);
}

void loop() 
{
    //  Turn on the LED:
    digitalWrite(led, HIGH);
    
    //  Generate random number between 60 and 80 degrees and publish it to the cloud with event temp:
    String temp = String(random(60, 80));
    Particle.publish("temp", temp, PRIVATE);
    delay(30000);
    
    //  Turn off led:
    digitalWrite(led, LOW);
    delay(30000);
}