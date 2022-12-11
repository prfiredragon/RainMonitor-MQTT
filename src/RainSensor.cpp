#include <Arduino.h>
#include <RainSensor.h>


const int capteur_D = D8;
const int capteur_A = A0;

int val_analogique;

Rain_sensor::Rain_sensor()
{
  pinMode(capteur_D, INPUT);
  pinMode(capteur_A, INPUT);
  Serial.begin(115200);
}


int Rain_sensor::WetVal()
{
    val_analogique=analogRead(capteur_A); 
    
    //Serial.print("Analog value : ");
    //Serial.println(val_analogique); 
    //Serial.println("");
    delay(1000);
    return val_analogique;

}


int Rain_sensor::value()
{
    if(digitalRead(capteur_D) == LOW) 
        {
            //Serial.println("Digital value : wet"); 
            
            delay(10); 
            return 1;
        }
    else
        {
            
            //Serial.println("Digital value : dry");
            delay(10); 
            return 0;
        }
}

void Rain_sensor::update()
{
    this->get.value = this->value();

    this->get.wet_val = this->WetVal();
}