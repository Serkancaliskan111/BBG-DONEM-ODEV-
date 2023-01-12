#include <stdio.h>

int main() {
    int a, b;
    float ortalama;
    int secim;

    printf("Pozitif iki sayi girin: ");
    scanf("%d %d", &a, &b);

    printf("Hangi ortalamayi hesaplamak istiyorsunuz?\n");
    printf("1 - Arithmetic mean (ortalama)\n");
    printf("2 - Geometric mean (ortanca)\n");
    printf("3 - Harmonic mean (harmonik ortalama)\n");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            ortalama = (float)(a + b) / 2;
            printf("Arithmetic mean: %.2f", ortalama);
            break;
        case 2:
            ortalama = (float)sqrt(a * b);
            printf("Geometric mean: %.2f", ortalama);
            break;
        case 3:
            ortalama = (float)2 / ((1 / (float)a) + (1 / (float)b));
            printf("Harmonic mean: %.2f", ortalama);
            break;
        default:
            printf("Gecersiz secim.");
    }

    return 0;
}
