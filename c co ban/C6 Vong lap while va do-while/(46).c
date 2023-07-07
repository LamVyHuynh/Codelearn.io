#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap 2 so a va b: ");
    scanf("%d%d", &a, &b);
    int answer = 1;
    while (b > 0)
    {
        answer *= a;
        b--;
    }
    printf(" %d mu %d la %d", a, b, answer);
    return 0;
}