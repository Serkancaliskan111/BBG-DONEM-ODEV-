#include <stdio.h>

int main() {
    int gun, ay, yil;
    char *aylar[] = {"", "Ocak", "Þubat", "Mart", "Nisan", "Mayýs", "Haziran", "Temmuz", "Aðustos", "Eylül", "Ekim", "Kasým", "Aralýk"};

    printf("Lütfen doðum tarihinizi gün ay yýl þeklinde girin: ");
    scanf("%d %d %d", &gun, &ay, &yil);

    printf("Doðum tarihiniz: %d %s %d\n", gun, aylar[ay], yil);

    return 0;
}
