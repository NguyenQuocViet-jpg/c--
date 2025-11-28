#include <stdio.h>

int main()
{
    float a, b;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);

    if(a == 0 && b == 0)
    {
        printf("Phuong trinh co vo so nghiem");
    }else if(a == 0 && b != 0)
    {
        printf("Phuong trinh vo nghiem");
    }else if(a != 0 && b == 0 || b != 0)
    {
        printf("Nghiem cu phuong trinh la: %f", -b/a);
    }

    return 0;
}