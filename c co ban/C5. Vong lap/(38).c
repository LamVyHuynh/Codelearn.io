#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so n vao: ");
    scanf("%d", &n);
    for (int i = n; i >= -5; i--)
    {
        printf("%d ", i);
    }
    return 0;
}