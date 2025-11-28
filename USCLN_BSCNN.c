#include <stdio.h>

int USCLN(int a, int b)
{
    while(b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int BSCNN(int a, int b)
{
    return (a*b)/USCLN(a,b);
}
int main()
{
    int a, b;
   
    printf("Nhập giá trị của a: ");
    scanf("%d", &a);
    printf("Nhập giá trị của b: ");
    scanf("%d", &b);

    printf("Ước số chung lớn nhất của hai số là: %d\n", USCLN(a,b));
    printf("Bội số chung nhỏ nhất của hai số là: %d", BSCNN(a,b));

    return 0;
}