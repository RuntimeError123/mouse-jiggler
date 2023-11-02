#include <Mouse.h>

void setup()
{
  Mouse.begin();
}

void loop()
{
  delay(1000);

  while(true) { 
    Mouse.move(1,0,0);
    delay(100);
    Mouse.move(-1,0,0);
    delay(60000);
  }
}
