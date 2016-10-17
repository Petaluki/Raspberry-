//Atte Sarkosen avustuksella.

#include <wiringPi.h>
#include <stdio.h>

// Pinnien numerot
const int ledPin = 22; // LED-valo
const int butPin = 17; // PIR-liiketunnistin


int main(void)
{

    wiringPiSetupGpio(); 
	
    pinMode(ledPin, OUTPUT);     // Asetetaan led outputksi
    pinMode(butPin, INPUT);      // Asetetaan PIR-liiketunnistin inputiksi

    while(1)
    {
        if (digitalRead(butPin)) // Jos loytyy liiketta
        {
            
            digitalWrite(ledPin, HIGH);     // Led on
        }

        else // Ei loydy liiketta
        {
          
            digitalWrite(ledPin, LOW); // Led off
        }
    }

    return 0;
}