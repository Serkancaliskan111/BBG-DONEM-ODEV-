#include <stdio.h>

int main() {
    int saat, dakika, saniye;

    printf("L�tfen saat bilgisini ss:dd:ss format�nda girin: ");
    scanf("%d:%d:%d", &saat, &dakika, &saniye);

    int toplam_dakika = saat * 60 + dakika;
    printf("Girilen saat bilgisi %d dakika olarak yaz�labilir.\n", toplam_dakika);

    return 0;
}
