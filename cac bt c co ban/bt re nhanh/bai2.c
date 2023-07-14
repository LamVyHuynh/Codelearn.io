#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH XẾP LỌAI THÀNH TÍCH CỦA HỌC SINH
    int a, v, av;
    float dtb;
    printf("Nhap diem  toan: ");
    scanf("%d", &a);
    printf("Nhap diem van: ");
    scanf("%d", &v);
    printf("Nhap diem anh van: ");
    scanf("%d", &av);
    dtb = (a + v + av) / 3;
    printf("Diem trung binh 3 mon Toan, Van, Anh Van: %.2f\n", dtb);
    if (dtb >= 8 && dtb <= 10)
    {
        printf("Xep loai Gioi");
    }

    else if (dtb >= 6.5 && dtb < 8)
    {
        printf("Xep loai Kha");
    }

    else if (dtb >= 5 && dtb < 6.5)
    {
        printf("Xep loai Trung Binh");
    }

    else
    {
        printf("Xep loai Yeu");
    }
    return 0;
}
