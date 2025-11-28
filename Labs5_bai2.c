#include <stdio.h>

int  check_year()
{
    int year;
    printf("Năm: ");
    scanf("%d", &year);
    
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d là năm nhuận", year);
    }
    else{
        printf("%d không phải là năm nhuận", year);
    }

    return year;
}
int main()
{

    check_year();

    return 0;
}