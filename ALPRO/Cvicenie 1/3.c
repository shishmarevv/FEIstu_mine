#include <stdio.h>

int main()
{
    int a;
    float b, c, pi;
    pi = 3.14;
    scanf("%d", &a);
    b = 2*pi*a;
    c = pi*(a*a);
    printf("Obsah %f\n",c);
    printf("Obvod %f",b);
    return 0;
}

