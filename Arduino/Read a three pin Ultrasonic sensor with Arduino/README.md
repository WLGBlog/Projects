Read a three pin Ping (Ultrasonic) sensor with Arduino

**Visual Schematic:**

![](https://s12.postimg.org/cwb6jb8f1/Screen_Shot_2017-04-08_at_3.22.39_PM.png)

  int Measure;

  void setup(){
   pinMode(9, INPUT); 
   Serial.begin(9600);
  }

  void loop(){
   Measure = digitalRead(9);
   Serial.print(Measure);
  }
