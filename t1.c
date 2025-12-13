#include <stdio.h>

float soNT(float x)
{
    int n = (int) x;

    if(n < 2){
        return 0;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if( n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    float x;
    printf("Nhập x: ");
    scanf("%f", &x);

    if(soNT(x) == 1) printf("%.0f là số nguyên tố.\n", x);
    else printf("%f không phải là số nguyên tố.\n", x);

    return 0;
}