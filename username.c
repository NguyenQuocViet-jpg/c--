#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int checkPass(char pass[])
{
    if(strlen(pass) > 12)
    {
        printf("Pass đã vượt ký tự cho phép!\n");
        return false;
    }

    int kytu = 0, inhoa = 0, chuthuong = 0, so = 0; 

    for(int i = 0; i < strlen(pass); i++)
    {
        if(isupper(pass[i])) inhoa = 1;
        else if(islower(pass[i])) chuthuong = 1;
        else if(isdigit(pass[i])) so = 1;
        else if(ispunct(pass[i])) kytu = 1;
    }

    if(!inhoa)
    {
        printf("Pass phải có ít nhất 1 chữ hoa!\n");
        return 0;
    }
    if(!chuthuong)
    {
        printf("Pass phải có ít nhất ! chữ thường!\n");
        return 0;
    }
    if(!so)
    {
        printf("Pass phải có ít 1 chữ số!\n");
        return 0;
    }
    if(!kytu)
    {
        printf("Pass phải có ít nhất 1 ký tự đạc biệt!\n");
        return 0;
    }
    return 1;
}
int main()
{
    char name[20];
    char pass[20];

    printf("---Đăng ký tài khoản---\n");
    printf("Lưu ý: username không có khoảng trắng, tối đa 16 ký tự,\n");
    printf("password tối đa 12 ký tự, có ít nhất một chữ in hoa, chữ thường, ký tự đặc biệt, chữ số\n");

    printf("\nUsername: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    do{

        printf("Password: ");
        fgets(pass, 20, stdin);
        pass[strcspn(pass, "\n")] = '\0';

    }while(!checkPass(pass));

    char username[20];
    char password[20];

    printf("--- Đăng nhập ---\n");
    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';


    if(strcmp(name, username)) 
    {
        printf("Đăng nhập thất bại.\n");
        printf("Sai Usename.\n");
    }else if(strcmp(pass, password))
    {
        printf("Đăng nhập thất bại.\n");
        printf("Sai Password.\n");
    }else{
        printf("Đăng nhập thành công.\n");
    }

    return 0;
}