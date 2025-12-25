/*
 * 01_Blink.ino
 * 
 * Bu örnek, ESP8266'nın üzerindeki yerleşik LED'i (Built-in LED) yakıp söndürür.
 * Dijital çıkış pinlerinin kontrolü için temel bir örnektir.
 * 
 * Yazar: Bahattin Yunus Çetin
 */

void setup() {
  // LED_BUILTIN pini çıkış olarak ayarlanır
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // LED'i yak (NodeMCU'da LOW aktiftir)
  delay(1000);                     // 1 saniye bekle
  digitalWrite(LED_BUILTIN, HIGH); // LED'i söndür
  delay(1000);                     // 1 saniye bekle
}
