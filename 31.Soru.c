#include <stdio.h>

int main() {
    char c;
    printf("Bir cumle giriniz...\n ");
    while((c = getchar()) != '\n') {
        if(c == '.' || c == '!' || c == '?') {
            putchar(c);
            putchar(' ');
        } else {
            putchar(c);
        }
    }
    return 0;
}
