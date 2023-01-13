#include <stdio.h>

int main() {
    int hollerithcode;
    char c;
    printf(" Hollerith koduyla mesaj giriniz..\n: ");
    while(scanf("%d", &hollerithcode) != EOF) {
        if (hollerithcode >= 1 && hollerithcode <= 26) {
            c = hollerithcode + 'A' - 1;
        } else if (hollerithcode >= 27 && hollerithcode <= 36) {
            c = hollerithcode + '0' - 27;
        } else {
            c = '?';
        }
        printf("%c", c);
    }
    return 0;
}
