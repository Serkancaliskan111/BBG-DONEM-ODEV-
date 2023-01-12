#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Pozitif bir tamsayi giriniz\n ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sonuc==> %d", sum);

    return 0;
}
