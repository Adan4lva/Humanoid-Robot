/*
  ESP32 PCA9685 Servo Control
  esp32-pca9685.ino
  Driving multiple servo motors with ESP32 and PCA9685 PWM module
  Use I2C Bus
 
  Adan Alvaez Barajas
  adan_4lvarez_@hotmail.com
*/

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Adafruit_BusIO_Register.h>

int getPWM180(int);
int getPWM270(int);

// Creat object to represent PCA9685 at default I2C address
Adafruit_PWMServoDriver pca9685 = Adafruit_PWMServoDriver(0x40); 

// Define servo motor connections
#define SER1  0    //Servo Motor 1 on connector 0
#define SER2  14   // Throat Izq
#define SER3  15   // Throat Der

#define SER4  4
#define SER5  5

int angle = 90;
int selector;
int delta = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);

  Serial.println("PCA9685 Humanoid Robot...");
 
  // Initialize PCA9685
  pca9685.begin();
  // Set PWM Frequency to 60Hz
  pca9685.setPWMFreq(60);
}

void loop()
{
  while (Serial.available()==0)
  {
  }
  selector = Serial.parseInt();     // Reads the Serial Monitor for incoming byte:
 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);

  switch(selector){

    case 1:
      Serial.println("Q1 ");  
      while (Serial.available()==0)
      {
      }
      angle = Serial.parseFloat();
      
      Serial.println(angle);         // Prints the received data
      pca9685.setPWM(SER1, 0, getPWM180(angle));
      pca9685.setPWM(SER2, 0, getPWM180(angle));
      break;

    case 2:
      Serial.println("Q2 ");  
      while (Serial.available()==0)
      {
      }
      angle = Serial.parseFloat();
      
      Serial.println(angle);         // Prints the received data
      pca9685.setPWM(SER4, 0, getPWM270(angle));
      pca9685.setPWM(SER5, 0, getPWM270(angle));
      break;

    case 3:
      Serial.println("Q3 ");  
      while (Serial.available()==0)
      {
      }
      angle = Serial.parseFloat();
      
      Serial.println(angle);         // Prints the received data
      pca9685.setPWM(SER2, 0, getPWM180(angle));
      break;

    case 4:
      Serial.println("Q4 ");  
      while (Serial.available()==0)
      {
      }
      angle = Serial.parseFloat();
      
      Serial.println(angle);         // Prints the received data
      pca9685.setPWM(SER3, 0, getPWM180(angle));
      break;
    
    case 5:                                   // Cuello
      Serial.println("Q5 ");  
      while (Serial.available()==0)
      {
      }
      delta = Serial.parseFloat();
      
      Serial.println(delta);         // Prints the received data
      if(delta<=30 && delta>=-30)
      {
        pca9685.setPWM(SER2, 0, getPWM180(70+delta));    // Izquierda
        pca9685.setPWM(SER3, 0, getPWM180(150-delta));   // Derecha
        pca9685.setPWM(SER1, 0, getPWM180(80+delta));
      }
      else
      {
        // Do nothing
      }
      break;
  }
}

int getPWM180(int angle)
{
  int pwm = 0;
  // Define maximum and minimum number of "ticks" for the servo motors
  // Range from 0 to 4095
  // This determines the pulse width
  // pwm = map(angle, 0, 180, SERVOMIN, SERVOMAX);
  pwm = map(angle, 0, 180, 172, 565);
  return pwm;
}

int getPWM270(int angle)
{
  int pwm = 0;
  // Define maximum and minimum number of "ticks" for the servo motors
  // Range from 0 to 4095
  // This determines the pulse width
  // pwm = map(angle, 0, 270, SERVOMIN, SERVOMAX);
  
  pwm = map(angle, 0, 270, 123, 614);

  return pwm;
}