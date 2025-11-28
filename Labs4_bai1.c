#include <stdio.h>

int main()
{
    float min, max;

    printf("Gia tri min: ");
    scanf("%f", &min);
    printf("Gia tri max: ");
    scanf("%f", &max);

    float tong = 0;
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

    return 0;
}