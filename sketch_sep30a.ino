
const int led1 = 6;
const int led2 = 9;
int POM = A0;
int i=0;

void setup() {
  // put your setup code here, to run once:
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(POM, INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalRead(POM);
int j = map(i,0,1023,0,255);
int k = map(i,0,1023,255,0);

 for(int j; j>=0; j+=5){
  analogWrite(led1,j);
  delay(50);}

for(int k; j<=255; j-=5){
  analogWrite(led1,j);
  delay(50);}

 

 

}
