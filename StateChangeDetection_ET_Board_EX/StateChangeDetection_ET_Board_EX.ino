 /******************************************************************************************
 * FileName     : StateChangeDetection_ET_Board_EX.ino
 * Description  : 초기화 버튼 추가하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.08.09
 * Reference    : 
 * Modified     : 
******************************************************************************************/

const int  buttonPin = D6;                       // 빨강 버튼 : D6
const int ledPin = D2;                           // 빨강 LED : D2
const int resetPin = D7;                         // 파랑 버튼 : D7

int buttonPushCounter = 0;                       // 빨강 버튼 누르는 수
int buttonState = 0;                             // 빨강 버튼의 현재 상태
int lastButtonState = 0;                         // 빨강 버튼의 마지막 상태
int resetState = 0;                              // 파랑 버튼의 상태

void setup() {
  pinMode(buttonPin, INPUT);                     // 빨강 버튼 입력모드 설정
  pinMode(resetPin, INPUT);                      // 파랑 버튼 입력모드 설정
  pinMode(ledPin, OUTPUT);                       // 빨강 LED 출력모드 설정
  
  Serial.begin(115200);
}

void loop() {
  buttonState = digitalRead(buttonPin);          // 빨강 버튼 상태 값 읽기
  
  if(buttonState != lastButtonState) {           // 현재 빨강 버튼상태가 마지막 상태 아니라면
    if(buttonState == HIGH) {                    // 빨강 버튼상태가 HIGH이면
      buttonPushCounter++;                       // 빨강 버튼 누른 수 증가
      Serial.println("on");                      // 'on' 출력
      Serial.print("number of button pushes: "); // 'number of button pushes: ' 출력
      Serial.println(buttonPushCounter);         // 빨강 버튼 누른수 출력
    } else{                                      // 빨강 버튼상태가 HIGH가 아니라면     
      Serial.println("off");                     // 'off' 출력
    }
    delay(50);                                   // 0.05초 기다리기
  }
  lastButtonState = buttonState;                 // 현재 빨강 버튼상태를 마지막상태에 저장

  if(lastButtonState % 4 == 0) {                 // 빨강 버튼 누른 수가 4의 배수라면
    digitalWrite(ledPin, HIGH);                  // LED 켜기
  } else{                                        // 아니면
    digitalWrite(ledPin, LOW);                   // LED 끄기
  }

  resetState = digitalRead(resetPin);  
  if(resetState == LOW) {                         // 파랑 버튼상태가 HIGH 면
    buttonPushCounter = 0;
    Serial.println("reset");                      // 'reset' 출력
    Serial.print("number of button pushes: ");    // 'number of button pushes: ' 출력
    Serial.println(buttonPushCounter);            //  초기화
   delay(100);                                    // 0.1초 기다리기
  }
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
