#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so n vao tu ban phim: ");
    scanf("%d", &n);
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    printf("So luong UC cua so %d la %d", n, count);
    return 0;
}