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
void karaoke()
{
    int gio_vao, gio_ra;
    printf("Giờ vào là: ");
    scanf("%d", &gio_vao);
    printf("Giờ ra là: ");
    scanf("%d", &gio_ra);

    if(gio_vao >= 12 && gio_ra <= 23 && gio_ra > gio_vao)
    {
        int tieng = gio_ra - gio_vao;
        int gia_tien = 150000;
        float gio_vang;

        if(tieng >=4)
        {
            gia_tien = gia_tien * 0.7;
        }
        
        if(gio_vao >= 14 && gio_vao <= 17)
        {
            gio_vang = 0.9;
        }else gio_vang = 1;

        float tong_tien = tieng * gia_tien * gio_vang;
        printf("Tổng số tiên phải trả là: %f\n", tong_tien);
    }
    else printf("Giờ này quán không hoạt động.\n");
}
void tinhTienDien()
{
    float so_kwh;

    printf("So dien tieu thu la: ");
    scanf("%f", &so_kwh);

    if(so_kwh <= 50)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.678);
    }else if(so_kwh > 50 && so_kwh <= 100)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.734);
    }else if(so_kwh > 100 && so_kwh <= 200)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.014);
    }else if(so_kwh > 200 && so_kwh <= 300){
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.536);
    }else if(so_kwh > 300 && so_kwh <= 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.834);
    }else if(so_kwh > 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.927);
    }
}
void laiXuatNganHang()
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
}
int USCLN(int a, int b)
{
    while(b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int BSCNN(int a, int b)
{
    return (a*b)/USCLN(a,b);
}
int main()
{
    int chuc_nang;
    printf("CHÀO MỪNG ĐẾN VỚI ASSIGNMENT CỦA TÔI\n");
    do{
        printf("\n+----------------------------------------------------------------+\n");
        printf("|     Chức năng 1: Kiểm tra số nguyên.                           |\n");
        printf("|     Chức năng 2: Tìm USC lớn nhất và BSC nhỏ nhất của 2 số.    |\n");
        printf("|     Chức năng 3: Tính tiền cho quán karaoke.                   |\n");
        printf("|     Chức năng 4: Tính tiền điện.                               |\n");
        printf("|     Chức năng 5: Tính lãi xuất vay ngân hàng.                  |\n");
        printf("|     Chức năng 6: Thông tin sinh viên.                          |\n");
        printf("|     Chức năng 7: Tính toán phân số.                            |\n");
        printf("|     Chức năng 0: Thoát trương trình.                           |\n");
        printf("+----------------------------------------------------------------+\n");
        printf("Vui lòng chọn chức năng: ");
        scanf("%d", &chuc_nang);

        switch(chuc_nang){
            case 1:
                printf("--------------------\n");
                printf("Kiểm tra số nguyên.\n");
                float so;
                printf("Số muốn kiểm tra: ");
                scanf("%f", &so);

                if(so == (int)so){
                    if(soNguyen(so)==1) printf("%.0f là số nguyên.\n", so);
                    else printf("%.0f không phải là số nguyên.\n", so);
                    if(soCP(so)==0) printf("%.0f không phải là chính phương.\n", so);
                    else printf("%.0f là số chính phương.\n", so);
                    if(soNT(so)==0) printf("%.0f không phải là số nguyên tố.\n", so);
                    else printf("%.0f là số nguyên tố.\n", so);
                }else{
                    printf("%.f là số thực.\n", so);
                }
                printf("--------------------\n");
            break;
            case 2:
                printf("\n--------------------\n");
                printf("Tính USCLN và BSCNN của hai số.\n");
                int a, b;
   
                printf("Nhập giá trị của a: ");
                scanf("%d", &a);
                printf("Nhập giá trị của b: ");
                scanf("%d", &b);

                printf("Ước số chung lớn nhất của hai số là: %d\n", USCLN(a,b));
                printf("Bội số chung nhỏ nhất của hai số là: %d\n", BSCNN(a,b));
                printf("--------------------\n");
            break;
            case 3:
                printf("\n--------------------\n");
                printf("Tính tiền cho quán karaoke.\n");

                karaoke();
                printf("--------------------\n");
            break;
            case 4:
                printf("\n--------------------\n");
                printf("Tính tiền điện.\n");

                tinhTienDien();
                printf("\n--------------------\n");
            break;
            case 5:
                printf("\n--------------------\n");
                printf("Tính lãi xuất ngân hàng.\n");

                laiXuatNganHang();
            break;
            case 6:
                printf("\n--------------------\n");
                printf("Thông tin sinh viên.\n");
                printf("Hiện chức năng này chưa hoàn thành.\n");
                printf("Vui lòng thực hiện bước bên dưới để mở lại menu.");
                printf("\n--------------------\n");
            break;
            case 7:
                printf("\n--------------------\n");
                printf("Tính toán phân số.\n");
                printf("Hiện chức năng này chưa hoàn thành.\n");
                printf("Vui lòng thực hiện bước bên dưới để mở lại menu.");
                printf("\n--------------------\n");
            break;
            case 0:
                printf("Đang thoát chương trình.");
            break;
            default:
                printf("Hiện chương trình chưa có chức năng này.\n");
            break;
        }
        if(chuc_nang != 0){
            printf("\nVui lòng ấn phím 1 để quay lại menu: ");
            int luachon;
            do{
                scanf("%d", &luachon);
                printf("Phím bạn nhập không đúng.\n");
                printf("Vui lòng ấn phím 1 để quay lại menu: ");
            }while(luachon != 1);
        }
    }while(chuc_nang != 0);  

    return 0;
}