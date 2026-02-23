#include <stdio.h>

int main() {
    float batarya_sicakligi;
    int sarj_yuzdesi;
    char kapi_durumu;
    int fren_pedali;

    printf("--- ELEKTROMOBİL GÜVENLİK KONTROLÜ ---\n");

    printf("Batarya Sıcaklığı (°C): ");
    scanf("%f", &batarya_sicakligi);

    if (batarya_sicakligi < -100 || batarya_sicakligi > 200) {
        printf("HATA: Geçersiz sıcaklık değeri.\n");
        return 1;
    }

    printf("Şarj Yüzdesi (%%): ");
    scanf("%d", &sarj_yuzdesi);

    if (sarj_yuzdesi < 0 || sarj_yuzdesi > 100) {
        printf("HATA: Hatalı sensör verisi. İmkansız şarj seviyesi.\n");
        return 1;
    }

    printf("Kapı Durumu (A/K): ");
    scanf(" %c", &kapi_durumu);

    if (kapi_durumu != 'A' && kapi_durumu != 'K') {
        printf("HATA: Geçersiz kapı durumu.\n");
        return 1;
    }

    printf("Fren Pedalı (1:Basılı, 0:Değil): ");
    scanf("%d", &fren_pedali);

    if (fren_pedali != 0 && fren_pedali != 1) {
        printf("HATA: Geçersiz fren pedalı verisi.\n");
        return 1;
    }

    if (batarya_sicakligi > 60) {
        printf("KRİTİK HATA: Motor Aşırı Isındı! Sürüş Engellendi.\n");
        return 1;
    }

    if (sarj_yuzdesi < 10) {
        printf("UYARI: Batarya Kritik Seviyede! Sürüş Başlatılamaz.\n");
        return 1;
    }

    if (kapi_durumu == 'A') {
        printf("HATA: Kapılar Açık! Lütfen Kapatınız.\n");
        return 1;
    }

    if (fren_pedali == 0) {
        printf("BİLGİ: Güvenlik için frene basarak tekrar deneyin.\n");
        return 1;
    }

    printf("BAŞARILI: SİSTEM HAZIR. MOTOR BAŞLATILIYOR...\n");

    return 0;
}
