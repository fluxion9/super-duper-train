#include <SoftwareSerial.h>
String buf, wbuff;


SoftwareSerial serial(A4, A5);

void setup() {
  serial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(serial.available())
  {
    buf = serial.readStringUntil(';');
    if(buf.length() > 3)
    {
      Serial.println(buf);
    }
  }
}
