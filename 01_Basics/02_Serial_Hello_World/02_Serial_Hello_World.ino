/*
 * 02_Serial_Hello_World.ino
 * 
 * Bu örnek, ESP8266'dan bilgisayara Seri Port üzerinden veri gönderimini gösterir.
 * Seri monitörü açarak (Araçlar -> Seri Port Ekranı) çıktıyı görebilirsiniz.
 * Baud Rate: 115200 olarak ayarlanmalıdır.
 * 
 * Yazar: Bahattin Yunus Çetin
 */

void setup() {
  // Seri haberleşmeyi başlat (115200 baud)
  Serial.begin(115200);
  delay(1000); // Portun açılması için kısa bir bekleme

  Serial.println();
  Serial.println("-----------------------------------");
  Serial.println("ESP8266 Seri Haberleşme Örneği");
  Serial.println("Merhaba Dünya!");
  Serial.println("-----------------------------------");
}

void loop() {
  Serial.print("Uptime (milisaniye): ");
  Serial.println(millis()); // Cihazın açık kalma süresini yazdır
  delay(2000);              // 2 saniye bekle
}
