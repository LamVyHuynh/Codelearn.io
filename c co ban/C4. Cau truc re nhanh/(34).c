#include <stdio.h>
int main()
{
    int a, b, c;
    printf("nhap 3 nguyen a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b && b <= c)
    {
        printf("Tang dan");
    }
    else if (a >= b && b >= c)
    {
        printf("giam dan");
    }

    else
    {
        printf("khong tang khong giam");
    }
}