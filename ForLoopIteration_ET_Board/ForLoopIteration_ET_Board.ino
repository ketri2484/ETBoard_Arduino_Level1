
// LED pin : 12=D4(초록), 13=D5(노랑), 14=D3(파랑), 27=D2(빨강)

int timer = 100;           

void setup() {
  // LED들을 출력으로 설정하기
  for (int thisPin = 12; thisPin < 28; thisPin++) { //LED pin 번호 12~27
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  
  for (int thisPin = 12; thisPin < 28; thisPin++) { // 낮은순서부터 LED 반복문
    // turn the pin on:
    digitalWrite(thisPin, HIGH); // LED 켜기
    delay(timer); // 0.1초 기다리기
    digitalWrite(thisPin, LOW); // LED 끄기
  }

  for (int thisPin = 27; thisPin >= 12; thisPin--) { // 높은 순서부터 LED 반복문
    digitalWrite(thisPin, HIGH); // LED 켜기
    delay(timer);  // 0.1초 기다리기
    digitalWrite(thisPin, LOW); // LED 끄기
  }
}



//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
