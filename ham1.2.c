#include <stdio.h>
#include <stdbool.h>

bool laSoNT(float a)
{
    int n = (int)a;
    if (n < 2) {
        return false; 
    }
    for (int i = 2; i <= n/2; i++) 
    {
        if (n % i == 0)
        {
            return false; 
        }
        
    }
    return true;
}
int main()
{
    float x;

    printf("Nhập một số bất kì: ");
    scanf("%f", &x);
    if(laSoNT(x) == true) printf("%.0f là số nguyên tố.\n", x);
    else printf("%.0f không phải là số nguyên tố.\n", x);

    return 0;
}