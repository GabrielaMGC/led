#define vermelho 5
#define azul 11
#define verde 3

void setup() {
  // put your setup code here, to run once:
  pinMode(vermelho,OUTPUT);
  pinMode(azul,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(vermelho,HIGH);
  delay(1000);
  digitalWrite(vermelho,LOW);
  delay(1000);
  analogWrite(azul,35);
  delay(1000);
  analogWrite(azul,80);
  delay(1000);
  analogWrite(azul,140);
  delay(1000);
  analogWrite(azul,255);
  delay(1000);
  analogWrite(azul,0);
  delay(1000);
  for(int i = 0;i<256;i = i + 1){
    analogWrite(verde,i);
    delay(20);
    }
}
