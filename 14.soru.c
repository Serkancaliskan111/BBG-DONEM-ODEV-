#include <stdio.h>
#include <string.h>

int main() {
    char ay[10];
    int ay_num;

    printf("Lütfen ay adýný girin (örnek: Ocak): ");
    scanf("%s", ay);

    if (strcmp(ay, "Ocak") == 0) {
        ay_num = 1;
    } else if (strcmp(ay, "Þubat") == 0) {
        ay_num = 2;
    } else if (strcmp(ay, "Mart") == 0) {
        ay_num = 3;
    } else if (strcmp(ay, "Nisan") == 0) {
        ay_num = 4;
    } else if (strcmp(ay, "Mayýs") == 0) {
        ay_num = 5;
    } else if (strcmp(ay, "Haziran") == 0) {
        ay_num = 6;
    } else if (strcmp(ay, "Temmuz") == 0) {
        ay_num = 7;
    } else if (strcmp(ay, "Aðustos") == 0) {
        ay_num = 8;
    } else if (strcmp(ay, "Eylül") == 0) {
        ay_num = 9;
    } else if (strcmp(ay, "Ekim") == 0) {
        ay_num = 10;
    } else if (strcmp(ay, "Kasým") == 0) {
        ay_num = 11;
    } else if (strcmp(ay, "Aralýk") == 0) {
        ay_num = 12;
    } else {
        printf("Geçersiz ay adý girdiniz.\n");
        return 0;
    }

    printf("Girdiðiniz ay yýlýn %d. ayýdýr.\n", ay_num);

    return 0;
}
