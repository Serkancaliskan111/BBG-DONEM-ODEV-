#include <stdio.h>

int main() {
    double num;
    int before_dot, after_dot;

    printf("Ondalik bir sayi giriniz...\n ");
    scanf("%lf", &num);

    before_dot = (int)num;
    after_dot = (int)((num - before_dot) * 100);

    printf("Onceki hali%d\n", before_dot);
    printf("Sonraki hali: %d", after_dot);

    return 0;
}
