#include <stdio.h>
#include <string.h>

int main() {
    char ay[10];
    int ay_num;

    printf("L�tfen ay ad�n� girin (�rnek: Ocak): ");
    scanf("%s", ay);

    if (strcmp(ay, "Ocak") == 0) {
        ay_num = 1;
    } else if (strcmp(ay, "�ubat") == 0) {
        ay_num = 2;
    } else if (strcmp(ay, "Mart") == 0) {
        ay_num = 3;
    } else if (strcmp(ay, "Nisan") == 0) {
        ay_num = 4;
    } else if (strcmp(ay, "May�s") == 0) {
        ay_num = 5;
    } else if (strcmp(ay, "Haziran") == 0) {
        ay_num = 6;
    } else if (strcmp(ay, "Temmuz") == 0) {
        ay_num = 7;
    } else if (strcmp(ay, "A�ustos") == 0) {
        ay_num = 8;
    } else if (strcmp(ay, "Eyl�l") == 0) {
        ay_num = 9;
    } else if (strcmp(ay, "Ekim") == 0) {
        ay_num = 10;
    } else if (strcmp(ay, "Kas�m") == 0) {
        ay_num = 11;
    } else if (strcmp(ay, "Aral�k") == 0) {
        ay_num = 12;
    } else {
        printf("Ge�ersiz ay ad� girdiniz.\n");
        return 0;
    }

    printf("Girdi�iniz ay y�l�n %d. ay�d�r.\n", ay_num);

    return 0;
}
