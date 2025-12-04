#include <stdio.h>

int main()
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

    return 0;
}