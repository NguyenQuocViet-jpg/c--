#include <stdio.h>
#include <string.h>

void outputArray(char i[50])
{
    fgets(i, 50, stdin);
    i[strcspn(i, "\n")] = '\0';
}
void printArray(char i[50])
{
    printf("chuỗi vừa nhập: %s\n", i[50]);
}
int main()
{
    char str[50];
    char ch[50];

    printf("Nhập chuỗi str: ");
    for(int i = 0; i < 50; i++)
    {
        outputArray(str);
    }
    printArray(str);

    printf("Nhập chuỗi ch: ");
    outputArray(ch);
    printArray(ch);

    return 0;
}