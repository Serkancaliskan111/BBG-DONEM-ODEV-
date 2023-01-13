#include <stdio.h>

int main() {
    char c;
    printf("Bir cumle giriniz...\n ");
    while((c = getchar()) != '\n') {
        printf("%03d ", c);
    }
    return 0;
}
