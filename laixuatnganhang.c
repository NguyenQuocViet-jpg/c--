#include <stdio.h>

int main()
{
    long long tien_vay;
    long long goc_thang = 1000000;
    float lai = 0.05;
    long long du_no;
    long long tong_lai = 0;
    long long tong_tra = 0;
    int ky_han = 12;

    printf("Số tiền muốn vay là(VNĐ): ");
    scanf("%lld", &tien_vay);
    du_no = tien_vay;

    for(int thang = 1; thang <= ky_han; thang++)
    {
        long long lai_thang = (long long int)(du_no * lai);
        long long tra_thang = goc_thang + lai_thang;

        tong_lai += lai_thang;
        tong_tra += tra_thang;

        du_no -= goc_thang;
    }
    printf("Tổng lãi: %lld\n", tong_lai);
    printf("Tổng số tiền cần phải tra trong 12 tháng: %lld", tong_tra);
   
    return 0;
}