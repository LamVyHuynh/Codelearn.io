#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Nhap so a vao: ");
    scanf("%d", &a);
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= a);
    return 0;
}