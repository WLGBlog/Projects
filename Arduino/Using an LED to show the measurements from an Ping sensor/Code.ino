int Measure;
boolean ledBool = HIGH;

void setup(){
 pinMode(9, INPUT); 
 pinMode(11, OUTPUT);
 Serial.begin(9600);
}

void loop(){
  Measure = digitalRead(9);
  Serial.print(Measure);
  if (Measure == 0) {
    digitalWrite(11, HIGH); 
  }
  else {
   digitalWrite(11, LOW); 
  }
}
