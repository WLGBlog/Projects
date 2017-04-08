This project will affect an LED's brightness depending upon the measurement from the Ping(Ultrasonic) sensor.

**Visual Schematic**

![](https://s17.postimg.org/5qjqvb7tb/Screen_Shot_2017-04-08_at_3.35.59_PM.png)

```
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
