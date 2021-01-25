#include <dht11.h>
// set pin 4 to 
#define DHT11PIN 4
// you can also use pin 7
dht11 DHT11;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.println();
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);
  Serial.print("Temperature (C): ");
  Serial.println((float)DHT11.temperature, 2);
  delay(2000);
}