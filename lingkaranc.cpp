#include <stdio.h>

int main(void)
{

    float Volume,LA,t;


    printf("Program menghitung Luas Lingkaran\n");
    printf("=================================\n\n");
    printf("Luas Alas ="); scanf("%f", &LA);
    printf("Tinggi    ="); scanf("%f",&t);

   Volume = LA * t;

    printf("\nVolume tabung = %lf\n", Volume);
    return 0;
}
