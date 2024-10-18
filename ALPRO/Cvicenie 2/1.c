#include <stdio.h>

int main()
{
    int x, y, z;
    printf("zadaj dve cisla oddelene medzerou: ");
    scanf("%d %d", &x, &y);
    z = (x>=y) ? x : y;
    printf("a) vacsie z cisel: %d \n", z);
    if (y > x)
    {
        printf("b) mensie z cisel : %d \n", x);
    }
    return 0;
}
