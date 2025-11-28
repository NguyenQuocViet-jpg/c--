#include <stdio.h>

int main()
{
    char ten[100];

    printf("Vui lòng nhập tên của bạn: ");
    
    fgets(ten, sizeof(ten), stdin);

    float Diem;
    printf("Nhập điểm của bạn : ");
    scanf("%f", & Diem);

    printf("-----------------------\n");
    printf("Thông tin sinh viên: \n");
    printf("Họ và tên: %s", ten);
    printf("Học lực: ");

    if(Diem >= 9)
    {
        printf(" xuất sắc");
    }else if(Diem < 9 && Diem >= 8)
    {
        printf(" giỏi");
    }else if(Diem < 8 && Diem >= 6.5)
    {
        printf(" khá");
    }else if(Diem < 6.5 && Diem >= 5)
    {
        printf(" trung bình");
    }else if(Diem < 5 && Diem >= 3.5)
    {
        printf(" yếu");
    }else if(Diem < 3.5)
    {
        printf(" kém");
    }

    return 0;
}