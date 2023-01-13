#include <stdio.h>

int main() {
    char c;
    int ita1code;
    printf("Bir Cumle giriniz...\n ");
    while((c = getchar()) != '\n') {
        if(c >= 'A' && c <= 'Z') {
            ita1code = c - 'A' + 1;
        } else if(c >= 'a' && c <= 'z') {
            ita1code = c - 'a' + 1;
        } else if(c >= '0' && c <= '9') {
            ita1code = c - '0' + 27;
        } else {
            ita1code = 0;
        }
        printf("%03d ", ita1code);
    }
    return 0;
}
