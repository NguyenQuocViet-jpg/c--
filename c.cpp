#include <iostream>
using namespace std;

int main()
{
    int day;
    do{
        cin >> day;
        break;
        printf("Nhập lại: ");
    }while( day < 2 || day > 8 );

    switch(day){
        case 2: 
            printf("THU HAI");
        break;
        case 3:
            printf("THU BA");
        break;
        case 4:
            printf("THU TU");
        break;
        case 5:
            printf("THU NAM");
        break;
        case 6:
            printf("THU SAU");
        break;
        case 7:
            printf("THU BAY");
        break;
        case 8:
            printf("CHU NHAT");
        break;
    }

    return 0;
}