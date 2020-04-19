// Grove - LedButton connect to D3
// Grove - LED connect to D2

const int Button = 4;                   // pin of button define here
const int led2 = 2;                     // pin of led define here
const int led3 = 3;                     // pin of ledbutton define here

void setup()
{
    pinMode(Button, INPUT);                // set button INPUT
    pinMode(led2, OUTPUT);                 // set led OUTPUT
    pinMode(led3, OUTPUT);                 // set ledbutton OUTPUT
}

void loop()
{
    if(digitalRead(Button))    // when button is pressed
    {
        digitalWrite(led2, LOW);  //led is off
        digitalWrite(led3, HIGH); // ledbutton is on
    }
    else
    {
        digitalWrite(led2, HIGH); //led is on
        digitalWrite(led3, LOW);  // ledbutton is off
    }
    
}
