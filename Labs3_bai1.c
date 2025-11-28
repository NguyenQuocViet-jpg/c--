#include <stdio.h>

int main()
{
    int x;
    printf("Gia tri cua x: ");
    scanf("%d", &x);
    float c = 0;

    for(int i = 2; i <= x; i++)
    {
        if(i % x == 0 && x % x == 0 )
        {
            c = 1;
        }
    }
    if(c != 0){
        printf("%d là số nguyên tố", x);
    }else{
        printf("%d không phải là số nguyên tố", x);
    }

    return 0;
}