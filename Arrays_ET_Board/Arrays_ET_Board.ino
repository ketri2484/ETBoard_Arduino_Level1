/******************************************************************************************
 * FileName     : ASCIITable_ET_Board.ino
 * Description  : 배열을 이용하여 LED 제어하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2023.03.18 : PEJ : 헤더 주석 및 푸터 주석 추가
******************************************************************************************/
int timer = 500;  // LED 점등 시간(0.5초)
int ledPins[] = { 
  D4, D5, D3, D2  
  // LED 순서 정해놓은 배열 : D4(초록), D5(노랑), D3(파랑), D2(빨강)
};  
int pinCount = 4;  // LED 개수
 
  //LED 들을 출력으로 설정하는 반복문
void setup() {
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT); 
  }}
 
void loop() {
  // LED 순서대로 켜기
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {    
    digitalWrite(ledPins[thisPin], HIGH); // LED 켜기
    delay(timer); // 0.5초 기다리기
  }

  // LED 순서대로 켜기 끄기
  for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
    digitalWrite(ledPins[thisPin], LOW); // LED 끄기
    delay(timer); // 0.5초 기다리기
  }
}
//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================