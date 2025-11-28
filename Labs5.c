#include <stdio.h>
#include <math.h>

void nhapsonguyen(int *n)
{
    printf("Gia tri cua n: ");
    scanf("%d", n);

}
void nhapsothuc(float *x)
{
    printf("Gia tri cua x: ");
    scanf("%f", x);

}
int lasonguyen(float x)
{
   int nguyen = (int)x;
   if(x == nguyen){
    return 1;
   }else{
    return 0;
   }
   return 0;
}
int lasoCP(float x)
{
    if(x < 0)
    {
        return 0;
    }else if(lasonguyen(x))
    {
        int can_bac = (int)sqrt(x);
        if(can_bac == sqrt(x)){
            return 1;
        }
    }
    return 0;
}
int lasonguyento(float x)
{
    if(x < 2)
    {
        return 0;
    }else{
        for(int i = 2;i < x; i++)
        {
            if(i % (int)x == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
int main()
{
    int nhap_nguyen;
    float nhap_thuc;

    nhapsonguyen(&nhap_nguyen);
    nhapsothuc(&nhap_thuc);

    printf("--------------------\n");
    printf("Kiểm tra số nguyên.\n");
    if(lasonguyen(nhap_nguyen) == 1)
     {
        printf("%d la so nguyen\n", nhap_nguyen);
     }else{
         printf("%d khong phai la so nguyen\n", nhap_nguyen);
        }
    if(lasonguyen(nhap_thuc) == 1)
    {
        printf("%.2f la so nguyen\n", nhap_thuc);
    }else{
        printf("%.2f khong phai la so nguyen\n", nhap_thuc);
    }
    
    printf("--------------------\n");
    printf("Kiểm tra chính phương.\n");
    if(lasoCP(nhap_nguyen))
    {
        printf("%d la so chinh phuong\n", nhap_nguyen);
    }else{
        printf("%d khong phai la so chinh phuong\n", nhap_nguyen);
    }
        if(lasoCP(nhap_thuc))
    {
        printf("%.2f la so chinh phuong\n", nhap_thuc);
    }else{
        printf("%.2f khong phai la so chinh phuong\n", nhap_thuc);
    }

    printf("--------------------\n");
    printf("Kiểm tra số nguyên tố.\n");
    if(lasonguyento(nhap_nguyen) == 0)
    {
        printf("%d khong phai la so nguyen to\n", nhap_nguyen);
    }else{
        printf("%d la so nguyen to\n", nhap_nguyen);
    }
    if(lasonguyento(nhap_thuc) == 0)
    {
        printf("%.2f khong phai la so nguyen to\n", nhap_thuc);
    }else{
        printf("%.2f la so nguyen to\n", nhap_thuc);
    }

    return 0;
}