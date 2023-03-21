/******************************************************************************************
 * FileName     : SwitchCase_ET_Board.ino
 * Description  : map() 함수를 이용하여 LED 제어하기
 * Hardware     : ETBoard(이티보드, ESP32 등록 공식 Arduino Board)
 * Author       : 한국공학기술연구원(KETRI)
 * Created Date : 2022.04.21
 * Reference    : 
 * Modified     : 2022.04.21 : LEH : 헤더 수정, 소스 크린징
 * Modified     : 2023.03.14 : PEJ : 주석 길이 수정
******************************************************************************************/

// 최소값 설정
const int sensorMin = 0;
// 최대값 설정                                  
const int sensorMax = 2400;                               

void setup() {
  Serial.begin(115200);
}

void loop() {
  // 아날로그 값을 변수에 저장 
  int sensorReading = analogRead(A0);                      
  // 0~2400 사이에서 4개의 범위 정하기
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

  // 범위(0~3)마다 단어 설정하기
  switch (range) {                                        
    // your hand is on the sensor
    case 0:  
      // 범위 0 이면 매우 작다 출력                                             
      Serial.println("매우 작다");                         
      break;
    // your hand is close to the sensor
    case 1:                                               
      // 범위 1 이면 작다 출력
      Serial.println("작다");                             
      break;
    // your hand is a few inches from the sensor
    case 2: 
      // 범위 2 이면 크다 출력                                              
      Serial.println("크다");                                  
      break;
    // your hand is nowhere near the sensor
    case 3:         
      // 범위 3 이면 매우 크다 출력                                          
      Serial.println("매우 크다");                             
      break;
  }
  // 0.001초 기다리기
  delay(1);                                                   
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
