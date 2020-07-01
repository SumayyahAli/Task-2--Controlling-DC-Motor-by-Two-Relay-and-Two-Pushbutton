#include <Servo.h>

int position = 0;

int i = 0;

int j = 0;

Servo servo_9;

Servo servo_10;

void setup()
{
  servo_9.attach(9);

  servo_10.attach(10);

}

void loop()
{
  position = 0;
  for (position = 1; position <= 179; position += 1) {
    servo_9.write(position);
    servo_10.write(position);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (position = 179; position >= 0; position -= 179) {
    servo_9.write(position);
    servo_10.write(position);
    delay(20); // Wait for 20 millisecond(s)
  }
}