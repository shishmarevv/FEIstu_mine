#include <stdio.h>

int main()
{
    int a, b, c, v, p;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    v = a*b*c;
    p = 2*a*b+2*b*c+2*c*a;
    printf("Volume %d\n",v);
    printf("Surface %d",p);
    return 0;
}

