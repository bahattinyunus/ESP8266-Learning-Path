/*
 * 01_Station_Mode.ino
 * 
 * Bu örnek, ESP8266'yı bir Wi-Fi ağına (yönlendiriciye) bağlar.
 * Station (STA) modu kullanılır.
 * 
 * Yazar: Bahattin Yunus Çetin
 */

#include <ESP8266WiFi.h>

// Wi-Fi bilgilerinizi buraya girin
const char* ssid = "WIFI_ADINIZ";
const char* password = "WIFI_SIFRENIZ";

void setup() {
  Serial.begin(115200);
  delay(10);

  Serial.println();
  Serial.print("Baglaniliyor: ");
  Serial.println(ssid);

  // ESP8266'yı Station moduna al
  WiFi.mode(WIFI_STA);
  // Bağlantıyı başlat
  WiFi.begin(ssid, password);

  // Bağlantı kurulana kadar bekle
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Wi-Fi baglantisi basarili!");
  Serial.print("IP Adresi: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Bu örnekte loop içinde yapacak bir şey yok
}
