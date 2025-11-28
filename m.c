#include <stdio.h>

int main(){
    int d;
    do{
        scanf("%d", &d);
    }while(d < 2 || d > 8); 

    switch(d){
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