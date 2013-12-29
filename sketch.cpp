/*
  Mutex class library example for Arduino (tm), version 0.1

  Copyright (C) 2013 F1RMB, Daniel Caujolle-Bert <f1rmb.daniel@gmail.com>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#include <Arduino.h>
#include "Mutex.h"

Mutex mutex;

void setup()
{
    // initialize the digital pin as an output.
    // Pin 13 has an LED connected on most Arduino boards:
    pinMode(13, OUTPUT);
}

void loop()
{
    mutex.lock();
    digitalWrite(13, HIGH);   // set the LED on
    mutex.unlock();
    delay(1000);              // wait for a second
    mutex.lock();
    digitalWrite(13, LOW);    // set the LED off
    mutex.unlock();
    delay(1000);              // wait for a second
}
