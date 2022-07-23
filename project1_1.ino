// C++ code
//
#include <Servo.h>

int Position1 = 0;

int i = 0;

int j = 0;

Servo servo_13;

void setup()
{
  servo_13.attach(13, 500, 2500);
}

void loop()
{
  Position1 = 0;
  for (Position1 = 1; Position1 <= 179; Position1 += 1) {
    servo_13.write(Position1);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (Position1 = 179; Position1 >= 0; Position1 -= 1) {
    servo_13.write(Position1);
  }
}