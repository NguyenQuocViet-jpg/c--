#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], kt;
    fgets(str, sizeof(str), stdin);
    //puts(str);
    //fflush(stdin);
    

    printf("Nhập chuỗi ký tự muốn tìm: ");
    scanf("%c", &kt);

    strlwr(str);
    kt = tolower(kt);

    int cout = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == kt)
        {
            cout++;
        }
    }

    if(cout > 0) printf("Chuỗi %c xuất hiện %d lần trong chuỗi: %s", kt, cout, str);
    else printf("Chuỗi %c không xuất hiện trong chuỗi: %s", kt, str);

    return 0;
}