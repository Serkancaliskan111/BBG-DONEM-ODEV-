#include <stdio.h>

int main() {
    int saat, dakika, saniye;

    printf("Lütfen saat bilgisini ss:dd:ss formatında girin: ");
    scanf("%d:%d:%d", &saat, &dakika, &saniye);

    int toplam_dakika = saat * 60 + dakika;
    printf("Girilen saat bilgisi %d dakika olarak yazılabilir.\n", toplam_dakika);

    return 0;
}
