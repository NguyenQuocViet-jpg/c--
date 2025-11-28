#include <stdio.h>
#include <math.h>

int soNguyen(float x)
{
    int nguyen = (int)x;
    if(nguyen == x){
        return 1;
    }else{
        return 0;
    }
}
int soCP(float x)
{
    
    if(x<0) return 0;
    else{
        int can = (int)sqrt(x);
        if(can * can == (int)x){
            return 1;
        }
    }
    return 0;
}
int soNT(float x)
{

    int n = (int)x;
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
        {
            return 0; 
        }
        
    }
    return 1;
}

int main()
{
    float so;
    printf("Số muốn kiểm tra: ");
    scanf("%f", &so);

    if(soNguyen(so)==1) printf("%.2f là số nguyên.\n", so);
    else printf("%.2f không phải là số nguyên.\n", so);
    if(soCP(so)==0) printf("%.2f không phải là chính phương.\n", so);
    else printf("%.2f là số chính phương.\n", so);
    if(soNT(so)==0) printf("%.2f không phải là số nguyên tố.\n", so);
    else printf("%.2f là số nguyên tố.\n", so);
    

    return 0;
}