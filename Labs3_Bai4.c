#include <stdio.h>
#include <math.h>

int main()
{
    int bai;
    printf("===========================================\n");
    printf("|            Menu trương trình            |\n");
    printf("+-----------------------------------------+\n");
    printf("|  Chức năng 1: Tính học lực.             |\n");
    printf("|  Chức năng 2: Giải phương trình bậc 1.  |\n");
    printf("|  Chức năng 3: Giải phương trình bậc 2.  |\n");
    printf("|  Chức năng 4: Tính tiền điện.           |\n");
    printf("+-----------------------------------------+\n");

    printf("Chức năng số: ");
    scanf("%d", &bai);

    switch(bai)
    {
        case 1:
            printf("--------------------\n");
            printf(" ---Tính học lực---\n");
            float Diem;
            printf("Nhap diem cua ban: ");
            scanf("%F", & Diem);

            if(Diem >= 9)
            {
                printf("=> Hoc luc xuat sac");
            }else if(Diem < 9 && Diem >=8)
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
        break;
        case 2:
            printf("---------------------------------\n");
            printf("----Giải phương trình bậc nhất---\n");
            float A, B;

            printf("Nhap gia tri cua a: ");
            scanf("%f", &A);
            printf("Nhap gia tri cua b: ");
            scanf("%f", &B);

            if(A == 0 && B == 0)
            {
                printf("Phuong trinh co vo so nghiem");
            }else if(A == 0 && B != 0)
            {
                printf("Phuong trinh vo nghiem");
            }else if(A != 0 && B == 0 || B != 0)
            {
                printf("Nghiem cu phuong trinh la: %f", -B/A);
            }
        break;
        case 3:
            printf("-------------------------------\n");
            printf("---Giải phương trình bậc hai---\n");
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
        break;
        case 4:
            printf("--------------------\n");
            printf("---Tính tiền điện---\n");
            int so_kwh;

            printf("So dien tieu thu la: ");
            scanf("%d", &so_kwh);

            if(so_kwh <= 50)
            {
                printf("So tien can phai dong la: %f", so_kwh * 1.678);
            }else if(so_kwh > 50 && so_kwh <= 100)
            {
                printf("So tien can phai dong la: %f", so_kwh * 1.734);
            }else if(so_kwh > 100 && so_kwh <= 200)
            {
                printf("So tien can phai dong la: %f", so_kwh * 2.014);
            }else if(so_kwh > 200 && so_kwh <= 300){
                printf("So tien can phai dong la: %f", so_kwh * 2.536);
            }else if(so_kwh > 300 && so_kwh <= 400)
            {
                printf("So tien can phai dong la: %f", so_kwh * 2.834);
            }else if(so_kwh > 400)
            {
                printf("So tien can phai dong la: %f", so_kwh * 2.927);
            }
        break;
        default:
        printf("Chưa có chức năng này.");
        break;
    }

    return 0;
}