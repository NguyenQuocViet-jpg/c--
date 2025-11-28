#include <stdio.h>

int main()
{
    float Diem;
    printf("Nhap diem cua ban: ");
    scanf("%F", & Diem);

    if(Diem >= 9)
    {
        printf("Hoc luc xuat sac");
    }else if(Diem < 9 && Diem >= 8)
    {
        printf("Hoc luc gioi");
    }else if(Diem < 8 && Diem >= 6.5)
    {
        printf("Hoc luc kha");
    }else if(Diem < 6.5 && Diem >= 5)
    {
        printf("Hoc luc trung binh");
    }else if(Diem < 5 && Diem >= 3.5)
    {
        printf("Hoc luc yeu");
    }else if(Diem < 3.5)
    {
        printf("Hoc luc kem");
    }

    return 0;
}