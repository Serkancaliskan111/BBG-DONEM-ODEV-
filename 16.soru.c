#include <stdio.h>

int main() {
    int gun, ay, yil;
    char *burclar[] = {"Ko�", "Bo�a", "�kizler", "Yenge�", "Aslan", "Ba�ak", "Terazi", "Akrep", "Yay", "O�lak", "Kova", "Bal�k"};
    int burc_ay[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2};
    int burc_gun[] = {21, 20, 21, 21, 22, 22, 23, 22, 24, 24, 23, 22};

    printf("L�tfen do�um tarihinizi g�n ay y�l �eklinde girin: ");
    scanf("%d %d %d", &gun, &ay, &yil);

    int burc = -1;
    if (gun >= burc_gun[ay-1] || ay > burc_ay[ay-1]) {
        burc = (ay-1) % 12;
    } else {
        burc = (ay-2+12) % 12;
    }

    printf("Do�um tarihiniz: %d %s %d\n", gun, ay, yil);
    printf("Burcunuz: %s\n", burclar[burc]);

    return 0;
}
