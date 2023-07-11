#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{

    float x1, x2, delta, a, b, c;
    printf("Nhap so a vao: ");
    scanf("%f", &a);
    printf("Nhap so b vao: ");
    scanf("%f", &b);
    printf("Nhap so c vao: ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh co vo so nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else
        {
            printf("Phuong trinh da cho co nghiem duy nhat x = %f", -c / b);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh da cho vo nghiem");
        }
        else if (delta == 0)
        {
            printf("Phuong trinh da cho co nghiem duy nhat: x1 = x2 = %f", -b / 2 * a);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh da cho co 2 nghiem phan biet x1 = %f, x2 = %f ", x1, x2);
        }
    }

    return 0;
}