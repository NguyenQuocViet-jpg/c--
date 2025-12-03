#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int nguyen[n];

    for(int k = 0; k < n; k++)
    {
        printf("Nhập mảng nguyen[%d]: ", k);
        scanf("%d", &nguyen[k]);
    }

    float tong = 0;
    float tb = 0;
    int count = 0;
    for(int k = 0; k < n; k++)
    {
        if(nguyen[k] % 3 == 0){
            tong += nguyen[k];
            count++;
        }
    }
    tb = tong / count;
    printf("Trung bình tổng của các phần tử chia hết cho ba tronbg mảng là: %f\n", tb);

    return 0;
}