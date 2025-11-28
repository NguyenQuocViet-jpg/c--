#include <stdio.h>

int main()
{
    int n; 

    printf("Nhập giá trị n: ");
    scanf("%d", &n);
    int tong = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            tong += i;
        }
    }
    printf("Tổng các số tự nhiên chia hết cho 2 từ 1 đến %d là: %d", n, tong);

    return 0;
}