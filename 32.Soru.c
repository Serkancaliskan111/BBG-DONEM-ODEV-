#include <stdio.h>

int main() {
    char c;
    int space_flag = 1;
    printf("Cumle giriniz...\n ");
    while((c = getchar()) != '\n') {
        if(c == ' ') {
            space_flag = 1;
        } else {
            if(space_flag) {
                putchar('*');
                space_flag = 0;
            }
            putchar(c);
        }
    }
    return 0;
}
