#include <stdio.h>
#include <string.h>
#include <bool.h>

bool dieuKien(char ten[16], char [12])
{
    
}
int main()
{
    char name[16];
    char pass[12];

    printf("---Đăng ký tài khoản---\n");
    printf("Lưu ý: username không có khoảng trắng, tối đa 16 ký tự,\n");
    printf("password tối đa 12 ký tự, có ít nhất một chữ in hoa, chữ thường, ký tự đặc biệt, chữ số\n");
    do{
        printf("\nUsername: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Password: ");
        fgets(pass, sizeof(pass), stdin);
        pass[strcspn(pass, "\n")] = '\0';
    }while(strlen(name) > 16);

    /*char username[16];
    char password[12];

    printf("---Đăng nhập tài khoản---\n");
    printf("Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';
    printf("Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(passwprd, "\n")] = '\0';
    */

    printf("--- Tài khoản vừa đăng ký ---\n");
    printf("Tên đăng nhập: %s\n", name);
    printf("Mật khẩu: %s", pass);

    return 0;
}