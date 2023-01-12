#include <stdio.h>

int main() {
    int number, digit_count = 0;
    printf("Int olan bir sayi degeri giriniz...\n ");
    scanf("%d", &number);
    int temp = number;
    while (temp != 0) {
        digit_count++;
        temp /= 10;
    }
    printf("%d sayisinin basamak sayisi %d", number, digit_count);
    printf("%d sayisinin basamak sayisina bolunce sonu==>%d", number, number / digit_count);
    return 0;
}
