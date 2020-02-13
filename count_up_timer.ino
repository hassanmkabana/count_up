#include <SevSeg.h>

SevSeg sevseg;
void setup() {
  // put your setup code here, to run once:
    byte numDigits  = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {10,9,5,6,7,11,12,4};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE;

    sevseg.begin(hardwareConfig, numDigits, digitPins,segmentPins, resistorsOnSegments);

    sevseg.setBrightness(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  
for(int i=9; i >=0 ; --i){
        
         sevseg.setNumber(i,0);
        delay(1000);
        sevseg.refreshDisplay(); 
        }
}
