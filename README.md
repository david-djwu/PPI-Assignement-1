# PPI-Assignement-1

This repository is used to guide students on how they can use the Grove LED Button and LED Socket and use the button to trigger the led whilst also lighting up.

This gives the effect of them alternating when lighting up.

## Introduction

This tutorial implements an Arduino Uno, a Grove Base Shield, a Grove LED Button and a Grove LED Socket.
This is aimed at students with little to no experience with an Arduino or electronics but want to quickly learn the basic functions used  for arduino microcontrollers and their modules.
The final product is a board which is able to alternate states between two lights being on or off with the Grove LED Button being the switch for both. This was achieved using tutorials and the Arduino IDE and Grove Wikis.

## Context

These components and this setup was selected as it is relevant to my groups project in creating a memory game which lights up a certain sequence on a board and users will need to press the corresponding buttons after a time delay. LED Buttons are commonly found today in remotes, game controllers and to a certain extent keyboards. By convention, the act of pressing a button intuively makes people think something is triggered and when it is not being pressed the opposite is true. It is also seen that when a button is lit up, it can mean that it is available to be pressed. This feedback given to the user can mean many different things such as they incorretly pressed something (if a red light is immediately followed as we have in this example) or if they have correctly completed an action (usually indicated by a green light)

## Implementation

This action was implemented by conecting the Arduino Uno to Grove modules (the LED Button and LED Socket) via a Grove Base Shield attached ontop of the Arduino Uno. The two modules in which a user will interact with are the LED Button and the LED Socket which are connected with the 4-pin Grove Cables.

To begin we will connect everything together which is first done by connected the Grove Base Shield to the Arduino by lining up the corresponding pins to their connectors. We will then attached the 4-pin Grove cables to our modules before connected them to the D2 and D3 Ports on the Base Shield.

We can then plug in our USB Type A cable to our Arduino Uno and checking that it is working by seeing the Power LED light up on the Grove Base Shield. 

After this we will be able to load our code onto the Arduino IDE (Code found here : https://github.com/david-djwu/PPI-Assignement-1) and uploading it from our PC to our Arduino.

This will cause our LED Button to light up when done successfully and when pressing our LED Button our LED Socket should turn on whilst the button turns off and vice versa.

## The Code:

```
// Grove - LedButton connect to D3
// Grove - LED connect to D2

int Button = 4;                   // pin of button define here
int led2 = 2;                     // pin of led define here
int led3 = 3;                     // pin of ledbutton define here

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
```
The code can be divided into 3 main parts and from there we can see the first basic commands we can give the Arduino to perform the simple task of turning off and on and LED given the state of the button. The first section we introduce our integers with the corresponding pins which they are connected to on the Grove Board. We give the LED Socket a value of 2 as it is connected to the D2 Socket on our board and the LED for the 3 as it is connected to D3 and the button itself is defined as 4.

We then set our inputs and outputs for our modules with the LED's being outputs and the button being an input. This is as the actions of the LEDs are based on how we manipulate the button.

Finally we provide an if statement for when the button is pressed, which LED will be turned on and the else function for when the button is not pressed down.

YouTube Video of it in Action : 
