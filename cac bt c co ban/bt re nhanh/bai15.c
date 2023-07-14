#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH HIỆN RA CHỮ SỐ KHI NHẬP SỐ
    int n;
    printf("Nhap so nguyen n vao: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Mot");
        break;
    case 2:
        printf("Hai");
        break;
    case 3:
        printf("Ba");
        break;
    case 4:
        printf("Bon");
        break;
    case 5:
        printf("Nam");
        break;
    case 6:
        printf("Sau");
        break;
    case 7:
        printf("Bay");
        break;
    case 8:
        printf("Tam");
        break;
    case 9:
        printf("Chin");
        break;
    case 10:
        printf("Muoi");
        break;
    default:
        printf("Vui long nhap lai!!!!");
        break;
    }
    return 0;
}