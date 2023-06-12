#include <stdio.h>
int main()
{
    int a;
    printf("Nhap so a vao: ");
    scanf("%d", &a);

    if (a >= 10 && a <= 100)
    {
        printf("%d nam trong [10, 100]", a);
    }

    else
    {
        printf("%d khong nam trong [10 ,100]", a);
    }
    return 0;
}