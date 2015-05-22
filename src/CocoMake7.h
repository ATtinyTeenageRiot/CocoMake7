/*
  CocoMake7.h - Library for Capacitive touch sensors using only one ADC PIN and a Reference
  modified from https://github.com/jgeisler0303/QTouchADCArduino
  https://github.com/CocoMake7/MIDICocoMake7
  Released into the public domain.
*/

#ifndef __CocoMake7_h__
#define __CocoMake7_h__

#include <Arduino.h>

class CocoMake7Class
{
    public:
        void init();
        uint16_t sense(byte ADCReadPin, byte ADCRef, uint8_t samples, uint16_t qTouchDelay = 30);
        uint8_t touch(byte ADCReadPin);
        int measurement1, measurement2;
};

extern CocoMake7Class CocoMake7;

#endif // __CocoMake7_h__
