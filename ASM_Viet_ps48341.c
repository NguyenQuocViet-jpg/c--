#include <stdio.h>
#include <math.h>
#include <string.h>

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
    int gio_vao, gio_ra, tg;
    float tienhat;

    do{
        printf("Giờ vào là: ");
        scanf("%d", &gio_vao);
        printf("Giờ ra là: ");
        scanf("%d", &gio_ra);
    }while(gio_vao < 12 ||  gio_vao >= 23 || gio_ra <= 12 || gio_ra >= 23 || gio_ra < gio_vao);

    tg = gio_ra - gio_vao;
    
    if(tg <= 3 ) tienhat = 150000;
    else tienhat = 150000 + ((tg - 3) * 50000 * 0.7);

    if(gio_vao >= 14 && gio_vao <= 17) tienhat *= 0.9; 

    printf("Tổng tiền phải trả là: %f", tienhat);
}
void tinhTienDien()
{
    float so_kwh;

    printf("So dien tieu thu la: ");
    scanf("%f", &so_kwh);

    if(so_kwh <= 50)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.678);
    }else if(so_kwh <= 100)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 1.734);
    }else if(so_kwh <= 200)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.014);
    }else if(so_kwh <= 300){
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.536);
    }else if(so_kwh <= 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.834);
    }else if(so_kwh > 400)
    {
        printf("So tien can phai dong la: %fvnđ", so_kwh * 2.927);
    }
}
struct sinhvien
{
    char MaSV[8];
    char ten[30];
    float diem;
};
void inputSV(struct sinhvien *F)
{

    printf("Mã số sinh viên: ");
    fgets(F->MaSV, 10, stdin);
    F->MaSV[strcspn(F->MaSV, "\n")] = '\0';
     
    printf("Nhập tên: ");
    fgets(F->ten, 50, stdin);
    F->ten[strcspn(F->ten, "\n")] = '\0';

    printf("Nhập điểm: ");
    scanf("%f", &F->diem);
    getchar();

}
void printSV(struct sinhvien *F, int n)
{
    
    printf("MaSV: |%s| Tên: |%s| Điểm: |%.2f| \n", F->MaSV, F->ten, F->diem);
    
}
void thongtinSV()
{
    int n; 
    printf("Số lượng sinh viên: ");
    scanf("%d", &n);
    getchar();

    struct sinhvien SD21301[n];

    printf("--- Nhập thông tin sinh viên ---\n");
    printf("================================\n");
    for(int i = 0; i < n; i++)
    {
        printf("--- Sinh viên %d ---\n", i + 1);
        inputSV(&SD21301[i]);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");
    for (int i = 0; i < n; i++)
    {
        printSV(&SD21301[i], n);
    }

    char mssv[10];
    printf("\nMục tìm kiếm sinh viên (tìm bằng mã sinh viên)\n");
    printf("Nhập mã sinh viên: ");
    fgets(mssv, 15, stdin);
    mssv[strcspn(mssv, "\n")] = '\0';
    for(int i = 0; i < n; i++)
    {
        if(strcmp(mssv, SD21301[i].MaSV) == 0)
        {
            printf("MaSV: |%s| Tên: |%s| Điểm: |%.2f| \n", SD21301[i].MaSV, SD21301[i].ten, SD21301[i].diem);
        }
    }
}
void laiXuatNganHang()
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
}
int USCNN(int a, int b)
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
    return (a*b)/USCNN(a,b);
}
int UCLN(int a, int b)
{
    return (a * b) / BSCNN(a,b);
}
int main()
{
    int chuc_nang;
    printf("CHÀO MỪNG ĐẾN VỚI ASSIGNMENT CỦA TÔI\n");
    do{
        printf("\n+--------------------------------------------------------------+\n");
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

                printf("Ước số chung lớn nhất của hai số là: %d\n", UCLN(a,b));
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
            case 6:{
                printf("\n--------------------\n");
                printf("Thông tin sinh viên.\n");

                int n; 
                printf("Số lượng sinh viên: ");
                scanf("%d", &n);
                getchar();

                struct sinhvien SD21301[n];

                printf("--- Nhập thông tin sinh viên ---\n");
                printf("================================\n");
                for(int i = 0; i < n; i++)
                {
                    printf("--- Sinh viên %d ---\n", i + 1);
                    inputSV(&SD21301[i]);
                }

                printf("\n===== DANH SACH SINH VIEN =====\n");
                for (int i = 0; i < n; i++)
                {
                    printSV(&SD21301[i], n);
                }

                char mssv[10];
                printf("\nMục tìm kiếm sinh viên (tìm bằng mã sinh viên)\n");
                printf("Nhập mã sinh viên: ");
                fgets(mssv, 15, stdin);
                mssv[strcspn(mssv, "\n")] = '\0';
                for(int i = 0; i < n; i++)
                {
                    if(strcmp(mssv, SD21301[i].MaSV) == 0)
                    {
                        printf("MaSV: |%s| Tên: |%s| Điểm: |%.2f| \n", SD21301[i].MaSV, SD21301[i].ten, SD21301[i].diem);
                    }
                }
                break;
            }
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