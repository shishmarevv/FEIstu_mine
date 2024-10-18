
#include <stdio.h>

int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}

int dec2hex(int num)
{
    int hex = 0, k = 1;

    while (num)
    {
        hex += (num % 16) * k;
        k *= 10;
        num /= 2;
    }

    return hex;
}

int main()
{
    int a;
    char b;
    printf("zadaj 1 znak: ");
    a = getchar();
    printf("V decimalnej: %d \n", a);
    printf("V binarnej: %d \n", dec2bin(a));
    printf("V hexidecimalnej: %d \n", dec2hex(a));
    if ((122 >= a) && ( a >= 97)){
        a = a - 32;
        printf("Vacsia bukva: ");
        putchar(a);
        printf("\nV decimalnej: %d \n", a);
        printf("V binarnej: %d \n", dec2bin(a));
        printf("V hexidecimalnej: %d \n", dec2hex(a));
    }
    return 0;
}
