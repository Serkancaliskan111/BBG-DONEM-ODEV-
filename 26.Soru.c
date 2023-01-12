#include <stdio.h>

int main() {
    int num, max = 0, i;

    printf("Int degere sahip bir sayi giriniz...\n ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        max = max * 10 + 9;
    }

    printf("en büyük tamsayý ile %d basamaklý en küçük tamsayý arasýndaki fark  %d", num, max, max - num);

    return 0;
}
