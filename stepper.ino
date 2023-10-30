//www.elegoo.com
//2016.12.12

/************************
Exercise the motor using
the L293D chip
************************/

#define ENABLE 13
#define d 100
char pins[4] = "rgbB";
int i;
int j;
 
void setup() {
  //---set pin direction
  pinMode(ENABLE,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(ENABLE, HIGH);
  for(i=3;i<7;i++){
    for(j=3;j<7;j++){
      if(i!=j){
        digitalWrite(j, LOW);
      }
    }
    digitalWrite(i, HIGH);
    Serial.println(i);
    Serial.println(pins[i-3]);
    delay(d);
  }
}
