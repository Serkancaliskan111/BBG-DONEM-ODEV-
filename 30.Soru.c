#include <stdio.h>
#include <string.h>

int main() {
char cevap[100];
int i, noktalama_isareti_sayisi = 0;

Copy code
printf("Cümleyi girin: ");
gets(cevap);

for(i = 0; i < strlen(cevap); i++) {
    if(cevap[i] == '.' || cevap[i] == ',' || cevap[i] == '!' || cevap[i] == '?') {
        noktalama_isareti_sayisi++;
    }
}

printf("Cümlede %d tane noktalama iþareti var.\n", noktalama_isareti_sayisi);

return 0;
}
