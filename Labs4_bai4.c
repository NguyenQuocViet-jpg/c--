#include <stdio.h>

void Bai1_Tinh_trung_binh_cong(){
    printf("+------------------------+\n");
    printf("|  Tính trung bình cộng  |\n");
    printf("+------------------------+\n");

    float min, max;

    printf("Gia tri min: ");
    scanf("%f", &min);
    printf("Gia tri max: ");
    scanf("%f", &max);

    float tong = 0, bien_diem = 0;
    int i = min;
    while(i <= max)
    {
        if(i % 2 == 0){
            tong += i;
        }
        i++;
    }

    float trung_binh = tong / max;
    printf("Tong cua cac so tu nhien chia het cho 2: %F", trung_binh);

    return;
}
void Bai2_xac_dinh_so_nguyen_to(){
    printf("+-----------------------+\n");
    printf("| Xác định số nguyên tố |\n");
    printf("+-----------------------+\n");

    int x;
    printf("Gia tri cua x: ");
    scanf("%d", &x);
    float c = 0;

    for(int i = 2; i <= x; i++)
    {
        if(i / x == 0 )
        {
            c++;
        }else if(c == 0)
        {
            printf("%d la so nguyen to", x);
        }else{
            printf("%d khong phai la so nguyen to", x);
        }
    }
    return;
}
void Bai3_xac_dinh_so_chinh_phuong(){
    printf("+--------------------------+\n");
    printf("| Xác định số chính phương |\n");
    printf("+--------------------------+\n");

    int x, y;
    printf("Gia tri cua x: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if(i * i == x){
            y = 1;
            break;
        }
    }
    if(y == 1)
    {
        printf("%d là số chính phương", x);
    }else
    {
        printf("%d không phải là số chính phương", x);
    }

    return;
}
int main()
{
    int lua_chon;

    do{
        printf("+-----------------------------------------------+\n");
        printf("|     Chức năng 1: Tính trung bình cộng.        |\n");
        printf("|     Chức năng 2: Xác định số nguyên tố.       |\n");
        printf("|     Chức năng 3: Xác định số chính phương.    |\n");
        printf("|     Chức năng 4: Thoát trương trình.          |\n");
        printf("+-----------------------------------------------+\n");
        printf("Xin mời chọn bài (1,2,3,4): ");
        scanf("%d", &lua_chon);

        switch(lua_chon){
            case 1:
                Bai1_Tinh_trung_binh_cong();
            break;
            case 2:
                Bai2_xac_dinh_so_nguyen_to();
            break;
            case 3:
                Bai3_xac_dinh_so_chinh_phuong();
            break;
            case 4:
                printf("\nĐang thoát khỏi trương trình. Tạm biệt\n");
            break;
            default:
                printf("\nLựa chọn không hợp lệ. Vui lòng chọn lại\n");
            break;
        }
        if(lua_chon != 4){
            printf("\nVui lòng ấn Enter để mở lại menu");
            while(getchar() != '\n');
            getchar();
        }
    }while(lua_chon != 4);

    return 0;
}

