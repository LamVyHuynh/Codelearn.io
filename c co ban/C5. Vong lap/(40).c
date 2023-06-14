#include <stdio.h>
int main()
{
    int n;
    int s = 0;
    printf("Nhap so n vao: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            s += i;
        }
    }
    printf("%d", s);
    return 0;
}