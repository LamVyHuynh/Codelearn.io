#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        printf("So nguyen a lon hon so nguyen b!!!");
    }
    else
    {
        printf("So nguyen b lon hon so nguyen a!!!");
    }
}