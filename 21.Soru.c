#include <stdio.h>
#include <string.h>

int main() {
    char sayi[20];
    printf("Lütfen ondalýklý sayýyý giriniz: ");
    scanf("%s", sayi);

    int uzunluk = strlen(sayi);
    for (int i = 0; i < uzunluk; i++) {
        if (sayi[i] == ',') {
            sayi[i] = '.';
        }
    }

    printf("Düzenlenmiþ sayý: %s\n", sayi);
    return 0;
}
