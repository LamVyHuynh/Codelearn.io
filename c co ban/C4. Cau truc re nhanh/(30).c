#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    if (a != 0 && b != 0)
    {
        printf(" a va b la 2 so nguyen khac 0");
    }
    else
    {
        printf("a va b la 2 so nguyen ko khac 0");
    }
    return 0;
}