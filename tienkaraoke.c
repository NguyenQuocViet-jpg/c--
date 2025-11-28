#include <stdio.h>

int main()
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
        printf("Tổng số tiên phải trả là: %f", tong_tien);
    }
    else printf("Giờ này quán không hoạt động.\n");

    return 0;
}