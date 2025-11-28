#include <stdio.h>
#include <math.h>

float tonghaiso(float x, float y)
{
    float tong = x + y ;
    
    return tong;
}
int main()
{
    float a, b, c;
    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);
   
    printf("Tổng ba số là: %f\n", tonghaiso(a,b)+c);

    return 0;
}