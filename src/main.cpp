#include <ESP32Servo.h>

static const int leftServoPin = 13;
static const int beakServoPin = 14;
static const int baseServoPin = 27;
static const int rightServoPin = 26;

Servo leftServo;
Servo beakServo;
Servo baseServo;
Servo rightServo;

void setup() {
  Serial.begin(115200);
  leftServo.attach(leftServoPin);
  beakServo.attach(beakServoPin);
  baseServo.attach(baseServoPin);
  rightServo.attach(rightServoPin);
}

void loop() {
  // leftServo
  Serial.println("leftServo 0 to 180");
  for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
    leftServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  Serial.println("");
  Serial.println("leftServo 180 to 0");
  for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
    leftServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  // beakServo
  Serial.println("");
  Serial.println("");
  Serial.println("beakServo 0 to 40");
  for(int posDegrees = 0; posDegrees <= 40; posDegrees++) {
    beakServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 30 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  Serial.println("");
  Serial.println("beakServo 40 to 0");
  for(int posDegrees = 40; posDegrees >= 0; posDegrees--) {
    beakServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  // baseServo
  Serial.println("");
  Serial.println("");
  Serial.println("baseServo 0 to 90");
  for(int posDegrees = 0; posDegrees <= 90; posDegrees++) {
    baseServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  Serial.println("");
  Serial.println("baseServo 90 to 0");
  for(int posDegrees = 90; posDegrees >= 0; posDegrees--) {
    baseServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  // rightServo
  Serial.println("");
  Serial.println("");
  Serial.println("rightServo 0 to 180");
  for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
    rightServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }

  Serial.println("");
  Serial.println("rightServo 180 to 0");
  for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
    rightServo.write(posDegrees);
    if (posDegrees == 0 || posDegrees == 60 || posDegrees == 90 || posDegrees == 120 || posDegrees == 180) {
      Serial.println(posDegrees);
    }
    delay(20);
  }
}
