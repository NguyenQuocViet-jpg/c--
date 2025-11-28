#include <stdio.h>

int main()
{
    int x, y;
    printf("Gia tri cua x: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if(i * i == x){
            y = 0;
            break;
        }
    }
    if(y == 0)
    {
        printf("%d là số chính phương", x);
    }else
    {
        printf("%d không phải là số chính phương", x);
    }

    return 0;
}