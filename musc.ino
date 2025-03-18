#include <Arduino.h>

#define LED_1 13
#define LED_2 12
#define LED_3 11
#define LED_4 10
#define BUZZER 9
#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4
#define BUTTON_4 5

// Note Freq
#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  
  pinMode(BUZZER, OUTPUT);
  
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);
}

void loop() {
  
  if(digitalRead(BUTTON_1) == LOW) {
    digitalWrite(LED_1, HIGH); 
    tone(BUZZER, NOTE_C); 
    delay(500); 
    digitalWrite(LED_1, LOW); 
    noTone(BUZZER); 
  }
  
  if(digitalRead(BUTTON_2) == LOW) {
    digitalWrite(LED_2, HIGH); 
    tone(BUZZER, NOTE_D); 
    delay(500); 
    digitalWrite(LED_2, LOW); 
    noTone(BUZZER); 
  }
  
  if(digitalRead(BUTTON_3) == LOW) {
    digitalWrite(LED_3, HIGH); 
    tone(BUZZER, NOTE_E); 
    delay(500); 
    digitalWrite(LED_3, LOW); 
    noTone(BUZZER); 
  }
  
  if(digitalRead(BUTTON_4) == LOW) {
    digitalWrite(LED_4, HIGH); 
    tone(BUZZER, NOTE_F); 
    delay(500); 
    digitalWrite(LED_4, LOW); 
    noTone(BUZZER);
  }
}
