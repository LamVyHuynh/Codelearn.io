#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Nhap 2 so nguyen va phep tinh: ");
    scanf("%d %d %c", &a, &b, &c);
    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    case '/':
        printf("%d", a / b);
        break;
    }

    return 0;
}