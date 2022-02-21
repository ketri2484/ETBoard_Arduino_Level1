
int timer = 100;  // LED 점등 시간(0.1초)
int ledPins[] = { 
  D4, D5, D3, D2  // LED 순서 정해놓은 배열 : D4(초록), D5(노랑), D3(파랑), D2(빨강)
};  
int pinCount = 4;  // LED 개수

void setup() {

  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT); //LED 들을 출력으로 설정하는 반복문
  }
}

void loop() {

  for (int thisPin = 0; thisPin < pinCount; thisPin++) { // LED 순서대로 켜기 끄기 반복문
   
    digitalWrite(ledPins[thisPin], HIGH); // LED 켜기
    delay(timer); // 0.1초 기다리기
   
    digitalWrite(ledPins[thisPin], LOW); // LED 끄기

  }

  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) { // LED 반대순서대로 껴기 끄기 반복문
   
    digitalWrite(ledPins[thisPin], HIGH);// LED 켜기
    delay(timer); // 0.1초 기다리기
   
    digitalWrite(ledPins[thisPin], LOW); // LED 끄기
  }
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
