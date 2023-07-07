#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    do
    {
        if (i % 10 == 0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= a);
    return 0;
}