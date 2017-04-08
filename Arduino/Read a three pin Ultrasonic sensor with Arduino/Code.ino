int Measure;

void setup(){
 pinMode(9, INPUT); 
 Serial.begin(9600);
}

void loop(){
  Measure = digitalRead(9);
  Serial.print(Measure);
}
