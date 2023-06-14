#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Nhap 2 so a va b vao: ");
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}