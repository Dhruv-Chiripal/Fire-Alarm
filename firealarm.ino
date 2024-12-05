int LED = 7;
int BUZZ = 8; 
int TEMP = A0;
float readval  ;
float calcval ;
float scalef = 0.01;
float TMP;
int gas;
int GAS = A3;
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BUZZ,OUTPUT);
  pinMode(TEMP,INPUT);
  pinMode(GAS,INPUT);
  Serial.begin(9600);
}
void loop(){
    readval = analogRead(TEMP);
    calcval = readval * (5.0/1023.0);
    TMP = calcval/scalef;
    gas = analogRead(GAS);//TMP GREATERE 260 
    // Serial.println(gas);///gas for 25
    // delay(100);
    Serial.println(TMP);
    delay(250);
    if(gas  >60 || TMP > 23){
      
      digitalWrite(LED,HIGH);
      digitalWrite(BUZZ, HIGH);
      delay(1000);
      digitalWrite(LED,LOW);
      digitalWrite(BUZZ, LOW);
      delay(50);
    }
    

    

}