#include <wiringPi.h>
#include <time.h>

/*
 * Onko se kaunista koodia ? 
 * Ei.
 * Toimiiko se ?
 * Kyllä.
 * Oliko koodin tuottaminen vaivatonta?
 * Ei.
 * Olenko tyytyväinen lopputulokseen ?
 * Kyllä.
 */

	int AV = 16;
	int AK = 12;
	int AP = 25;
	
	int JV = 18;
	int JK = 21;
	int JP = 20;

	int NAPPI = 23;

int main(void)
{
	wiringPiSetupGpio();
	
	pinMode(AP, OUTPUT); //Autoilija punainen
	pinMode(AK, OUTPUT); //Autoilija keltainen
	pinMode(AV, OUTPUT); //Autoilija vihreä

	pinMode(JK, OUTPUT); //Jalankulkija keltainen	
	pinMode(JV, OUTPUT); //Jalankulkija vihreä
	pinMode(JP, OUTPUT); // Jalankulkija punainen

	pinMode(NAPPI, INPUT); //nappi
	pullUpDnControl(NAPPI, PUD_UP);
	
	
	while(1){
	
	digitalWrite(23, LOW);
	int nappiPainettu = digitalRead(NAPPI);
	
	if(nappiPainettu == LOW)
	{
					
					digitalWrite(JP, HIGH);
					digitalWrite(AV, HIGH);
	}
	if(nappiPainettu == HIGH)
	{
					
					digitalWrite(AV, LOW);
					
					digitalWrite(AK, HIGH);
					digitalWrite(JP, HIGH);
					
					delay(2000);
					
					digitalWrite(AK, LOW);
					digitalWrite(JP, HIGH);
					
					
					digitalWrite(AP, HIGH);
					
					delay(1000);
					
					
					digitalWrite(JP, LOW);
					
					digitalWrite(JV, HIGH);
					digitalWrite(AP, HIGH);
					
					delay(2000);
					
					digitalWrite(JV, LOW);
					digitalWrite(AP, HIGH);
					
					digitalWrite(JK, HIGH);
					
					
					delay(2000);
					
					digitalWrite(JK, LOW);
					digitalWrite(AP, HIGH);
					
					digitalWrite(JP, HIGH);
					
					delay(1000);
					
					digitalWrite(AP, LOW);
					digitalWrite(AV, HIGH);
					digitalWrite(JP, HIGH);
				
					digitalWrite(23, LOW);
				}
				
	}	
return;
}

