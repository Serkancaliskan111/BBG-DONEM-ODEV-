#include <stdio.h>

int main() {
    int gun, ay, yil;
    char *aylar[] = {"", "Ocak", "�ubat", "Mart", "Nisan", "May�s", "Haziran", "Temmuz", "A�ustos", "Eyl�l", "Ekim", "Kas�m", "Aral�k"};

    printf("L�tfen do�um tarihinizi g�n ay y�l �eklinde girin: ");
    scanf("%d %d %d", &gun, &ay, &yil);

    printf("Do�um tarihiniz: %d %s %d\n", gun, aylar[ay], yil);

    return 0;
}
