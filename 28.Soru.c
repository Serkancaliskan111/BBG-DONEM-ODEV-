#include <stdio.h>
#include <string.h>

int main() {
char cevap[100];
int i, max = 0, max_index = 0;

printf("Cümleyi girin: ");
gets(cevap);

for(i = 0; i < strlen(cevap); i++) {
    int uzunluk = 0;
    while(cevap[i] != ' ' && cevap[i] != '\0') {
        i++;
        uzunluk++;
    }
    if(uzunluk > max) {
        max = uzunluk;
        max_index = i - max;
    }
}

printf("En uzun kelime: ");
for(i = max_index; i < max_index + max; i++)
    printf("%c", cevap[i]);
printf("\n");

return 0;
}
