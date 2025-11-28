#include <stdio.h>

int main()
{
    float x;
    int i = 2, kq = 1;
    printf("x = ");
    scanf("%f", &x);

    if(x < 2){
        kq = 0;
    }else
    {
        while(i < x - 1)
        {
            if((int)x % i == 0)
            {
                kq = 0;
                break;
            }
            i++;
        }
    }
    if( kq == 1){
        printf("%f la so nguyen to", x);
    }else 
    {
        printf("%f khong phai la so nguyen to", x);
    }

    return 0;
}