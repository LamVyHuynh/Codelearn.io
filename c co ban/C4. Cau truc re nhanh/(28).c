#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so nguyen n vao: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("n la so nguyen duong");
    }

    else if (n < 0)
    {
        printf("n la so nguyen am");
    }
    else
    {
        printf("n la so 0");
    }
    return 0;
}