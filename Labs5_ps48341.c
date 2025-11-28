#include <stdio.h>
#include <math.h>

int laSoNguyen(float x)
{
    int nguyen = (int)x;

    if(nguyen == x)
    {
        return 1;
    }else{
        return 0;
    }
    return 0;
}
int laSoCP(float x)
{
    if(x <0){
        return 0;
    }else{
        int can = (int)sqrt(x);
        if(can * can == (int)x){
            return 1;
        }
    }
    return 0;
}
int laSoNT(float x)
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
    int so_nguyen;
    float so_thuc;

    nhapSoNguyen(&so_nguyen);
    nhapSoThuc(&so_thuc);

    printf("Gia tri cua so nguyen la: %d\n", so_nguyen);
    printf("Gia tri cua so thuc la: %.2f\n", so_thuc);

    printf("____________________\n");
    printf("Kiểm tra số nguyên.\n");
    if(laSoNguyen(so_nguyen)==0) printf("%d không phải là số nguyên.\n", so_nguyen);
    else printf("%d là số nguyên.\n", so_nguyen);
    if(laSoNguyen(so_thuc)==0) printf("%.2f không phải là số nguyên.\n", so_thuc);
    else printf("%.2f là số nguyên.\n", so_thuc);

    printf("____________________\n");
    printf("Kiểm tra số chính phương.\n");
    if(laSoCP(so_nguyen)==0) printf("%d không phải là số chính phương.\n", so_nguyen);
    else printf("%d là số chính phương.\n", so_nguyen);
    if(laSoNguyen(so_thuc)==0) printf("%.2f là số chính phương.\n", so_thuc);
    else printf("%.2f là số chính phương.\n", so_thuc);

    printf("____________________\n");
    printf("Kiểm tra số nguyên tố.\n");
    if(laSoNT(so_nguyen)==0) printf("%d không phải là số nguyên tố.\n", so_nguyen);
    else printf("%d là số nguyên tố.\n", so_nguyen);
    if(laSoNT(so_thuc)==0) printf("%.2f không phải là số nguyên tố.\n", so_thuc);
    else printf("%.2f là số nguyên tố.\n", so_thuc);


    return 0;
}