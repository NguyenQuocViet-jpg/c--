#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[30];
    fgets(fullName, sizeof(fullName), stdin);

    int i = 0;
    while(fullName[i] != '\0')
    {
        if(fullName[i]!=' ') 
        {
            printf("%c", fullName[i]);
        }
        else printf("\n");
        i++;
    }

    return 0;
}