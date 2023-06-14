#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}