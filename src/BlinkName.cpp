/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/GDRIVE/School/DEVIT_UNI/2020_T1/SIT210/OnTrack/SIT210-02.1P/BlinkName/src/BlinkName.ino"
/*
 * Project BlinkName
 * Description: Morse code on my first name (TIM)
 * Author: tjcook (214014891)
 * Date: 16/03/2020
 */

// -----------------------------------
// Morse code LED blink - D7
// -----------------------------------


//led1 is D7 - logical identifier 
void setup();
void loop();
#line 14 "d:/GDRIVE/School/DEVIT_UNI/2020_T1/SIT210/OnTrack/SIT210-02.1P/BlinkName/src/BlinkName.ino"
int led1 = D7;


void setup()
{

   //Configuring led1 to be an output
   pinMode(led1, OUTPUT);

   //Initialise led1 to be off
   digitalWrite(led1, LOW);

}


//Loop through TIM in morse code DASH-DOT-DOT-DASH(- .. -)
//DASH = 2000ms
//DOT = 1000ms
void loop()
{
	//Switch led1 on for 2 seconds (DASH)
	digitalWrite(led1, HIGH);
	delay(2000);

	//Switch led1 off for half second
	digitalWrite(led1, LOW);
  	delay(500);

  	//Switch led1 on for 1 second (DOT)
	digitalWrite(led1, HIGH);
	delay(1000);

	//Switch led1 off for half second
	digitalWrite(led1, LOW);
  	delay(500);

    	//Switch led1 on for 1 second (DOT)
	digitalWrite(led1, HIGH);
	delay(1000);

	//Switch led1 off for half second
	digitalWrite(led1, LOW);
  	delay(500);

  	//Switch led1 on for 2 seconds (DASH)
	digitalWrite(led1, HIGH);
	delay(2000);

	// Wait 4 seconds before repeating sequence.
  	digitalWrite(led1, LOW);
	delay(4000);

}