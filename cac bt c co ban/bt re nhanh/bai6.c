#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH TÌM RA SÔ NÀO LỚN NHẤT TRONG 4 SÔ || NHIỀU SỐ
    int a, b, c, d, max;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen c: ");
    scanf("%d", &c);
    printf("Nhap vao so nguyen d: ");
    scanf("%d", &d);
    // khúc này là thuật toán để tìm ra số lớn nhất ta sẽ cho 1 biến max gán nó cho r so sánh lần lượt nếu lớn hơn max thì t gán số đó cho max r lần lượt ss tiếp tục với các số còn lại
    max = a;
    if (a < b)
    {
        max = b;
    }
    if (b < c)
    {
        max = c;
    }
    if (c < d)
    {
        max = d;
    }
    printf("So lon nhat trong 4 so %d, %d, %d, %d la %d", a, b, c, d, max);
    return 0;
}