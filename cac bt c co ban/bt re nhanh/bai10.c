#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH NHẬP VAO SỐ NGÀY THÁNG NĂM HỢP LỆ
    int gio, phut, giay;
    printf("Nhap vao so gio: ");
    scanf("%d", &gio);
    printf("Nhap vao so phut: ");
    scanf("%d", &phut);
    printf("Nhap so giay vao: ");
    scanf("%d", &giay);
    if ((gio >= 0 && gio <= 23) && (phut >= 0 && phut <= 59) && (giay >= 0 && giay <= 59))
    {
        printf("%d:%d:%d la thoi gian hop li", gio, phut, giay);
    }
    else
    {
        printf("%d:%d:%d la thoi gian khong hop li", gio, phut, giay);
    }
    return 0;
}