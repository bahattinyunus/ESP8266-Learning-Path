/*
 * 02_Access_Point.ino
 * 
 * Bu örnek, ESP8266'yı bir Wi-Fi erişim noktası (Hotspot) olarak yapılandırır.
 * Başka cihazlar bu ağa bağlanabilir.
 * 
 * Yazar: Bahattin Yunus Çetin
 */

#include <ESP8266WiFi.h>

const char* ssid = "ESPWifi_Agim";
const char* password = "zorbisifreolsun"; // Şifre en az 8 karakter olmalı

void setup() {
  Serial.begin(115200);
  Serial.println();

  Serial.print("Erisim Noktasi (AP) kuruluyor...");

  // Access Point modunu ayarla
  // softAP(ssid, password, channel, hidden, max_connection)
  bool result = WiFi.softAP(ssid, password);

  if(result == true) {
    Serial.println("Basarili!");
    Serial.print("AP IP Adresi: ");
    Serial.println(WiFi.softAPIP());
  } else {
    Serial.println("Basarisiz!");
  }
}

void loop() {
  Serial.printf("Bagli istasyon sayisi: %d\n", WiFi.softAPgetStationNum());
  delay(3000);
}
