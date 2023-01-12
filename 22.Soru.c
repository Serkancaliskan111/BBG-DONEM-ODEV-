#include <stdio.h>
#include <string.h>

#define MAX_KELIME_SAYISI 100
#define MAX_KELIME_UZUNLUGU 100

int main() {
    char cumle[MAX_KELIME_UZUNLUGU * MAX_KELIME_SAYISI];
    char kelimeler[MAX_KELIME_SAYISI][MAX_KELIME_UZUNLUGU];
    int uzunluklar[MAX_KELIME_SAYISI];
    int kelime_sayisi = 0;

    printf("Lütfen cümleyi giriniz: ");
    fgets(cumle, MAX_KELIME_UZUNLUGU * MAX_KELIME_SAYISI, stdin);

    char *kelime = strtok(cumle, " ");
    while (kelime != NULL) {
        strcpy(kelimeler[kelime_sayisi], kelime);
        uzunluklar[kelime_sayisi] = strlen(kelime);
        kelime_sayisi++;
        kelime = strtok(NULL, " ");
    }

    // Kelimeleri uzunluklara göre sýralama
    for (int i = 0; i < kelime_sayisi - 1; i++) {
        for (int j = i + 1; j < kelime_sayisi; j++) {
            if (uzunluklar[i] > uzunluklar[j]) {
                int temp = uzunluklar[i];
                uzunluklar[i] = uzunluklar[j];
                uzunluklar[j] = temp;

                char temp_str[MAX_KELIME_UZUNLUGU];
                strcpy(temp_str, kelimeler[i]);
                strcpy(kelimeler[i], kelimeler[j]);
                strcpy(kelimeler[j], temp_str);
            }
        }
    }

    printf("Sýralanmýþ kelimeler: ");
    for (int i = 0; i < kelime_sayisi; i++) {
        printf("%s ", kelimeler[i]);
    }

    return 0;
}
