This teaches you how to blink an LED!
![](https://s18.postimg.org/tpavxspi1/Screen_Shot_2017-04-10_at_6.35.38_AM.png)

    int ledPin=13;

    void setup() {
      pinMode(ledPin, OUTPUT);
    }

    void loop() {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
    }
