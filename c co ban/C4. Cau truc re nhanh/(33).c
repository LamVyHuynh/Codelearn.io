#include <stdio.h>
int main()
{
    int score;
    printf("nhap diem cua hoc sinh vao:");
    scanf("%d", &score);
    if (score < 0 || score > 10)
    {
        printf("diem hop le");
    }
    else
    {
        printf("diem khong hop le");
    }
}