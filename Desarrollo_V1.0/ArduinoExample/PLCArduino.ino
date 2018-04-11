#include "PLC.h"

void setup() {
  
   Serial.begin(9600);
   PLC_Setup();
   
}

void loop() {
  
   for( int i=0; i<100; i++) {
    
      if( !PLC_ReadContact(DIGITAL_IN_1) ) {
         PLC_WriteRelay(DIGITAL_OUT_1, true);
         PLC_WriteRelay(DIGITAL_OUT_3, false);
      }
      
      if( !PLC_ReadContact(DIGITAL_IN_3) ){
         PLC_WriteRelay(DIGITAL_OUT_1, false);
         PLC_WriteRelay(DIGITAL_OUT_3, true);
      }
      
      delay(10);
   }
   
   Serial.print("Canal Analogo 2: ");
   Serial.println( PLC_ReadAnalogInput(ANALOG_IN_2) );
   
   if( PLC_ReadAnalogInput(ANALOG_IN_2) > 6.0 ) {
      Serial.println("Alarma de sobre tension mayor a 6V");
   }
}
