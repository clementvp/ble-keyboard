#include <Arduino.h>
#include <M5Unified.h>
#include <BleKeyboard.h>
BleKeyboard bleKeyboard;

void setup()
{
  M5.begin();
  bleKeyboard.begin();
}

void loop()
{
  M5.update();

  if (M5.BtnA.wasPressed())
  {
    bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
  }

  delay(100);
}
