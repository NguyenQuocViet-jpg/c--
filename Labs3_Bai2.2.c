#include <stdio.h> 
#include <math.h>

int main()
{
    float a, b, c;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);
    printf("Nhap gia tri cua c: ");
    scanf("%f", &c);

    
    if(a == 0)
    {
        printf("Nghiem cua phuong trinh: x=  %f", -(b/c));
    }else if(a != 0)
    {
        float delta = (b * b) - 4 * a * c;
        if(delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }else if(delta == 0)
        {
            printf("Phuong trinh co nghiem kep x= %f", -b / (2 * a));
        }else if(delta > 0)
        {
            printf("Phuong trinh co hai nghiem rieng biet x1= %f\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2= %f", (-b - sqrt(delta)) / (2 * a));
        }
    }
    
    return 0;
}