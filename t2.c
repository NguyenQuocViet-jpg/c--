#include <stdio.h>
#include <string.h>

void iutputArray(char i[50])
{
    fgets(i, 50, stdin);
    i[strcspn(i, "\n")] = '\0';
}
void printArray(char i[50])
{
    printf("chuỗi vừa nhập: %s\n", i);
}
void kt(char h[50], char k[50])
{
    int a = 0;
    for(int i = 0; i < strlen(k); i++)
    {
        if(strchr(h, k[i]) != NULL){
            printf("%c ở index %d\n", k[i], i);
            a++;
        }
    }
    if(a == 0 ) printf("Mảng %s không có ký tự nào trong mảng %s", k, h);
}
int main()
{
    char str[50];
    char ch[50];

    printf("Chuỗi str: ");
    iutputArray(str);
    printArray(str);

    printf("chuỗi ch: ");
    iutputArray(ch);
    printArray(ch);

    kt(str, ch);

    return 0;
}