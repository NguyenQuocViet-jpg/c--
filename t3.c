#include <stdio.h>
#include <string.h>

void inputArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Nhập mảng [%d]:", i);
        scanf(" %d", &a[i]);
    }
}
void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Mảng vừa nhập: %d\n", a[i]);
    }
}
void sapxep(int a[], int n)
{
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Số lượng phần tử: ");
    scanf("%d", &n);

    //Nhập mảng.
    int arr[n];
    inputArray(arr, n);

    float x;
    printf("Nhập x: ");
    scanf("%f", &x);

    printf("Các phần tử trong mảng lớn hơn x là ");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > x) printf("%d ", arr[i]);
    }

    printf("\n");
    sapxep(arr, n);

    printArray(arr, n);

    return 0;
}