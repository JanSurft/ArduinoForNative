#pragma once

#include "api/Common.h"

int analogRead(pin_size_t);
void analogWrite(pin_size_t, int);
PinStatus digitalRead(pin_size_t);
void digitalWrite(pin_size_t, PinStatus);
void pinMode(pin_size_t, PinMode);