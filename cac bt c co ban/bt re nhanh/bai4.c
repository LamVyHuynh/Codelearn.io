#include <stdio.h>
int main()
{
    int dog, chicken, sumanimal, sumlegdog, sumlegchk, sumleg;
    printf("Nhap so con cho vao: ");
    scanf("%d", &dog);
    printf("Nhap so con ga vao: ");
    scanf("%d", &chicken);
    sumanimal = dog + chicken;
    printf("Tong so con dong vat la: %d\n", sumanimal);
    if (dog)
    {
        sumlegdog = dog * 4;
        printf("Tong so chan cua cho la  %d\n", sumlegdog);
    }
    if (chicken)
    {
        sumlegchk = chicken * 2;
        printf("Tong so chan cua ga la %d\n", sumlegchk);
    }
    sumleg = sumlegdog + sumlegchk;
    printf("Tong so chan cho va chan ga la %d", sumleg);
    return 0;
}