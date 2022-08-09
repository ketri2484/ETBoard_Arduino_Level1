/******************************************************************************************
 * FileName     : AnalogInput_ET_Board_EX.ino
 * Description  : 가변저항의 값에 따라 서로 다른 LED를 켜고 끄도록 수정하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.08.09
 * Reference    : 
 * Modified     : 
******************************************************************************************/

int sensorPin = A0;                       // 가변저항(아날로그) : A0
int led_red = D2;                         // 빨강 LED : D2
int led_blue = D3;                        // 파랑 LED : D3
int led_green = D4;                       // 초록 LED : D4
int led_yellow = D5;                      // 노랑 LED : D5
int sensorValue = 0;                      // 가변 저항 변수값 : 0

void setup() {
  Serial.begin(115200);
  
  pinMode(sensorPin, OUTPUT);              // 가변저항 입력모드 설정
  pinMode(led_red, OUTPUT);                // 빨강 LED 출력모드 설정
  pinMode(led_blue, OUTPUT);               // 파랑 LED 출력모드 설정
  pinMode(led_green, OUTPUT);              // 초록 LED 출력모드 설정
  pinMode(led_yellow, OUTPUT);             // 노랑 LED 출력모드 설정

  digitalWrite(led_red, LOW);              //빨강 LED 꺼짐
  digitalWrite(led_blue, LOW);             //파랑 LED 꺼짐
  digitalWrite(led_green, LOW);            //노랑 LED 꺼짐
  digitalWrite(led_yellow, LOW);           //초록 LED 꺼짐
    
}

void loop() {
  sensorValue = analogRead(sensorPin);     // 아날로그 센서 값 읽어서 변수에 저장

  if(sensorValue < 600) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
  }
  if(600 < sensorValue && sensorValue < 1200) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
  } 
  if(1200 < sensorValue && sensorValue < 1800) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
  } 
  if(1800 < sensorValue && sensorValue < 2400) {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, LOW);
  } 
  if(2400 < sensorValue) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, HIGH);
  } 
  Serial.println(sensorValue);
 }

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
