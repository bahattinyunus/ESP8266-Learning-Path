/*
 * 03_Auto_Connect.ino
 * 
 * Bu örnek, basit bir otomatik bağlantı mantığı uygular.
 * Önce kayıtlı bir ağa bağlanmaya çalışır, başarısız olursa
 * kendi Access Point'ini açar. (Basitleştirilmiş WiFiManager mantığı)
 * 
 * Yazar: Bahattin Yunus Çetin
 */

#include <ESP8266WiFi.h>

const char* ssid = "Ev_Internetim";
const char* password = "12345678";

// AP Mode ayarları
const char* ap_ssid = "ESP_Kurtarma_Modu";

void setup() {
  Serial.begin(115200);
  Serial.println("\nBaslatiliyor...");

  // Önce Station modunu dene
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  // 10 saniye boyunca bağlanmayı dene
  int retries = 0;
  while (WiFi.status() != WL_CONNECTED && retries < 20) {
    delay(500);
    Serial.print(".");
    retries++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nWi-Fi'ye baglandi!");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\nWi-Fi baglantisi basarisiz. AP moduna geciliyor.");
    
    // AP Moduna geç
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ap_ssid);
    
    Serial.print("Erisim Noktasi: ");
    Serial.println(ap_ssid);
    Serial.print("AP IP: ");
    Serial.println(WiFi.softAPIP());
  }
}

void loop() {
  // Ana program döngüsü
}
