#include <stdio.h>
int main()
{
    //  CHƯƠNG TRÌNH TÍNH TỔNG ĐIỂM 3 MÔN VÀ XÉT XEM KHẢ NĂNG ĐẬU
    float t, l, h, sum;
    printf("Nhap vao diem so mon Toan: ");
    scanf("%f", &t);
    printf("Nhap vao diem so mon Ly: ");
    scanf("%f", &l);
    printf("Nhap vao diem so mon Hoa: ");
    scanf("%f", &h);
    sum = t + l + h;
    if (sum >= 15 && t >= 4 && l >= 4 && h >= 4)
    {
        printf("Thi Dau!!!\n");
        if (t > 5 && l > 5 && h > 5)
        {
            printf("Hoc deu cac mon\n");
        }
        else
        {
            printf("Hoc chua deu cac mon\n");
        }
    }
    else
    {
        printf("Thi hong:");
    }

    return 0;
}