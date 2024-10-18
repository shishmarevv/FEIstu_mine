
#include <stdio.h>

int main()
{
    int a;
    printf("zadaj 1 znak: ");
    a = getchar();
    if ((57 >= a) && ( a >= 48)){
        printf("To je cislo");
    } else {
        if ((90 >= a) && ( a >= 65)) {
            printf("To je velka bukva");
        } else {
            if ((122 >= a) && ( a >= 97)){
                printf("To je mala bukva");
            } else {
                printf("To je ina znacka");
            }
        }
    }
    return 0;
}
