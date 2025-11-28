#include <stdio.h>

int main()
{
    float so_kwh;

    printf("So dien tieu thu la: ");
    scanf("%f", &so_kwh);

    if(so_kwh <= 50)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.678);
    }else if(so_kwh > 50 && so_kwh <= 100)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.734);
    }else if(so_kwh > 100 && so_kwh <= 200)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.014);
    }else if(so_kwh > 200 && so_kwh <= 300){
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.536);
    }else if(so_kwh > 300 && so_kwh <= 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.834);
    }else if(so_kwh > 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.927);
    }
    
    return 0;
}