#include <stdio.h>
#include <math.h>

void xethocluc()
{
      float Diem;
    printf("Nhap diem cua ban: ");
    scanf("%f", & Diem);

    if(Diem >= 9)
    {
        printf("=> Hoc luc xuat sac");
    }else if(Diem < 9 && Diem >= 8)
    {
        printf("=> Hoc luc gioi");
    }else if(Diem < 8 && Diem >= 6.5)
    {
        printf("=> Hoc luc kha");
    }else if(Diem < 6.5 && Diem >= 5)
    {
        printf("=> Hoc luc trung binh");
    }else if(Diem < 5 && Diem >= 3.5)
    {
        printf("=> Hoc luc yeu");
    }else if(Diem < 3.5)
    {
        printf("=> Hoc luc kem");
    }
}
void phuongtrinhbac1()
{
     float a, b;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);

    if(a == 0 && b == 0)
    {
        printf("Phuong trinh co vo so nghiem");
    }else if(a == 0 && b != 0)
    {
        printf("Phuong trinh vo nghiem");
    }else if(a != 0 && b == 0 || b != 0)
    {
        printf("Nghiem cua phuong trinh la: %f", -b/a);
    }
}
void phuongtrinhbac2()
{
     float a, b, c;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);
    printf("Nhap gia tri cua c: ");
    scanf("%f", &c);

    
    if(a == 0)
    {
        printf("Nghiem cua phuong trinh: x=  %f", -(b/c));
    }else if(a != 0)
    {
        float delta = (b * b) - 4 * a * c;
        if(delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }else if(delta == 0)
        {
            printf("Phuong trinh co nghiem kep x= %f", -b / (2 * a));
        }else if(delta > 0)
        {
            printf("Phuong trinh co hai nghiem rieng biet x1= %f\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2= %f", (-b - sqrt(delta)) / (2 * a));
        }
    }
}
void tinhtiendien()
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
int main()
{
    int chuc_nang;
    
    do{
        printf("===========================================\n");
        printf("|            Menu trương trình            |\n");
        printf("+-----------------------------------------+\n");
        printf("|  Chức năng 1: Xét học lực.              |\n");
        printf("|  Chức năng 2: Giải phương trình bậc 1.  |\n");
        printf("|  Chức năng 3: Giải phương trình bậc 2.  |\n");
        printf("|  Chức năng 4: Tính tiền điện.           |\n");
        printf("|  Chức năng 5: Thoát chương trình.       |\n");
        printf("+=========================================+\n");

        printf("Vui lòng chọn chức năng(1,2,3,4,5): ");
        scanf("%d", &chuc_nang);

        switch(chuc_nang)
        {
            case 1: 
                xethocluc();
           
            case 2:
                phuongtrinhbac1();
            break;
            case 3:
                phuongtrinhbac2();
            break;
            case 4:
                tinhtiendien();
            break;
            case 5:
                printf("\nĐang thoát trương trình, tạm biệt.\n");
            break;
            default:
                printf("\nHiện trương trình không có chức năng này.\n");
            break;
        }
        if( chuc_nang != 5){
            printf("\nVui lòng ấn enter để mở lại menu.\n");
            while(getchar() != '\n');
            getchar();
        }
    }while(chuc_nang != 5);

    return 0;
}