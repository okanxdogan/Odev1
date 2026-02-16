# Elektromobil Araç Güvenlik Kontrol Sistemi

## Proje Açıklaması
Bu proje, bir yarış aracı için güvenlik protokollerini simüle eden C programıdır. Motor çalıştırılmadan önce sensörlerden (sıcaklık, şarj, kapı, fren) gelen verileri analiz eder ve sürüşe onay verir veya engeller.

## Kurulum ve Çalıştırma
Kodu derlemek için GCC derleyicisi kullanılır. Terminalde şu komutu çalıştırın:

```bash
gcc main.c -o check
./check
