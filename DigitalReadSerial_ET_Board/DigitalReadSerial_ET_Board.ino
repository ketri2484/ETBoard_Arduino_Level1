
int pushButton = D6; // ET보드의 빨간 버튼 : D6
void setup() {

  Serial.begin(9600);
  pinMode(pushButton, INPUT); // 버튼 입력모드 설정
}

void loop() {
  
  int buttonState = !digitalRead(pushButton); // 버튼 누르면 '0' 또는 '1'을 buttonState에 저장
  
  Serial.println(buttonState);// '0' 또는 '1' 출력
  delay(1); // 1ms 기다림
  
}

//┌────────────────────────────────┐
//│                                                      │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr         │
//│                                                      │ 
//└────────────────────────────────┘
