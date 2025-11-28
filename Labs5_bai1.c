#include <stdio.h>

int so_lon_nhat()
{
    float so_1, so_2, so_3;

     printf("Nhập số đầu tiên: ");
     scanf("%f", &so_1);
     printf("Nhập số thứ hai: ");
     scanf("%f", &so_2);
     printf("Nhập số thứ ba: ");
     scanf("%f", &so_3);

     float so = so_1 > so_2 ? so_1 : so_2;
     float max = so_3 > so ? so_3 : so;
     
     printf("Giá trị lớn nhất là: %f", max);

     return max;
}
int main()
{
     so_lon_nhat();

     return 0;
}