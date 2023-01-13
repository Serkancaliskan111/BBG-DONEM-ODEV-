#include <stdio.h>

int main() {
    int mtk2code;
    char c;
    printf(" MTK-2 koduyla bir cumle giriniz...\n: ");
    while(scanf("%d", &mtk2code) != EOF) {
        if (mtk2code == 0) {
            c = ' ';
        } else if (mtk2code == 1) {
            c = 'A';
        } else if (mtk2code == 2) {
            c = 'B';
        } else if (mtk2code == 3) {
            c = 'C';
        }
        else {
            c = '?';
        }
        printf("%c", c);
    }
    return 0;
}
