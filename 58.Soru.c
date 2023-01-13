#include <stdio.h>
int main() {
    char c;
    int mtk2code;
    printf("Cumle giriniz...\n ");
    while((c = getchar()) != '\n') {
        if (c == ' ') {
            mtk2code = 0;
        } else if(c == 'A') {
            mtk2code = 1;
        } else if(c == 'B') {
            mtk2code = 2;
        } else if(c == 'C') {
            mtk2code = 3;
        }

        else {
            mtk2code = -1;
        }
        printf("%03d ", mtk2code);
    }
    return 0;
}
