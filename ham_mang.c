#include <stdio.h>

void imputarray(int x[10], int n)
{
    int i; 
    for(i=0; i<n; i++)
    {
        printf("x[%d]= ", i);
        scanf("%d", &x[i]);
    }
}
void outputarray(int x[10], int n)
{
    int i; 
    for(i=0; i<n; i++)
    {
        printf("x[%d]: %d\n", i,x[i]);
    }
}
void printElemenArray(int x[], int n)
{
    int i, b;
    for(i=0; i<n; i++)
    {
        int a = 1;
        if(x[i]<2) a = 0;
        for(int j=2; j * j <= x[i]; j++)
        {
            if(x[i] % j == 0) a = 0;
        }
        if(a == 1)
        {
            printf("x[%d] là số nguyên tố.\n", x[i]);
            b++;
        } 
    }
    printf("có %d số trong mảng là số nguyên tố.\n", b);
}
int main()
{
    int a[10], size;

    printf("Nhập số phần tử của mảng (<=10): "); scanf("%d", &size);

    imputarray(a, size);

    printf("----------\n");
    printf("Mảng vừa nhập là: \n");
    outputarray(a, size);
    
    printf("----------\n");
    printf("Các số nguyên tố trong mảng:\n");
    printElemenArray(a, size);
    printf("==========\n");

    return 0;
}