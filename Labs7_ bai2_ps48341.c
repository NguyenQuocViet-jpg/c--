#include <stdio.h>
#include <string.h>

int main()
{
    char ten[] = "nguyenviet";
    int mk = 141125;

    char username[100];
    int password;

    printf("Nhập username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Nhập password: ");
    scanf("%d", &password);

   
    if(strcmp(username, ten) != 0 || password != mk){
        printf("Đăng nhập thất bại.\n");

        if( password != mk ){ 
            printf("Sai password.\n");
        }
        else if( strcmp(username, ten) != 0 ){
            printf("Sai username.\n");
           
        }

    }
    else  printf("Đăng nhập thành công.\n");
    
    return 0;
}