#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH KIỂM TRA XEM NGÀY THÁNG NĂM CÓ HỢP LÍ KHÔNG
    int ngay, thang, nam;
    printf("Nhap vao ngay: ");
    scanf("%d", &ngay);
    printf("Nhap vao thang: ");
    scanf("%d", &thang);
    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (ngay > 0 && ngay <= 31)
        {
            printf("Ngay %d  thang %d nam %d hop le", ngay, thang, nam);
            break;
        }
        else
        {
            printf("Ngay %d  thang %d nam %d khong hop le", ngay, thang, nam);
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (ngay > 0 && ngay <= 30)
        {
            printf("Ngay %d  thang %d nam %d hop le", ngay, thang, nam);
            break;
        }
        else
        {
            printf("Ngay %d  thang %d nam %d khong hop le", ngay, thang, nam);
            break;
        }
    case 2:
        if (ngay <= 28 && ngay > 0)
        {
            printf("Ngay %d thang %d nam %d hop le", ngay, thang, nam);
            break;
        }
        else
        {
            printf("Ngay %d thang %d nam %d khong hop le", ngay, thang, nam);
            break;
        }
    default:
        printf("Ngay %d thang %d nam %d khong hop le", ngay, thang, nam);
        break;
    }

    return 0;
}