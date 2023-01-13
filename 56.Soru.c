#include <stdio.h>
#include <math.h>

void HSVtoHSL(double H, double S, double V, double *H2, double *S2, double *L) {
    *L = (2 - S) * V / 2;
    *S2 = S * V / (*L <= 1 ? *L : 2 - *L);
    *H2 = H;
}

int main() {
    double H, S, V, H2, S2, L;
    printf("Renkleri format sirasiyla giriniz (H S V): ");
    scanf("%lf %lf %lf", &H, &S, &V);
    HSVtoHSL(H, S, V, &H2, &S2, &L);
    printf("Renk kodlari sirasiyla: %.2lf %.2lf %.2lf", H2, S2, L);
    return 0;
}
