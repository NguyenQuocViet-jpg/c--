#include <stdio.h>

int main()
{
    
    int ky_han;
    long long tien_vay;

    printf("Số tiền muốn vay là(VNĐ): ");
    scanf("%lld", &tien_vay);
    printf("Kỳ hạn(tháng): ");
    scanf("%d", &ky_han);

    float lai = 0.05;
    long long du_no;
    long long tong_lai = 0;
    long long tong_tra = 0;
    du_no = tien_vay;
    long long goc_thang = tien_vay / ky_han;

    printf("\n%-6s | %-15s | %-15s | %-17s | %-15s\n",
       "Thang", "Lai thang", "Goc thang", "Tong tra", "Du no");

    printf("----------------------------------------------------------------------\n");
    for(int thang = 1; thang <= ky_han; thang++)
    {
        long long lai_thang = (long long int)(du_no * lai);
        long long tra_thang = goc_thang + lai_thang;

        tong_lai += lai_thang;
        tong_tra += tra_thang;

        du_no -= goc_thang;

        printf("%-6d | %-15lld | %-15lld | %-17lld | %-15lld |\n", thang, lai_thang, goc_thang, tra_thang, du_no);

        
    }

    printf("Tổng lãi: %72lld\n", tong_lai);
    printf("Tổng số tiền cần phải tra trong 12 tháng: %40lld", tong_tra);
   
    return 0;
}