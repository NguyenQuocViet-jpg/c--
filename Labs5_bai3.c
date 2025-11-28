#include <stdio.h>

void hoan_vi(int *a, int *b)
{
     int c = *a;
     *a = *b;
     *b = c;
}
int main()
{
     int a, b;
     printf("Nhập giá trị của a: ");
     scanf("%d", &a);
     printf("Nhập giá trị của b: ");
     scanf("%d", &b);

     printf("\n--------------------------\v");
     printf("Giá trị trước khi thay đổi: \n");
     printf("Giá trị của a: %d\n", a);
     printf("Giá trị của b: %d", b);

     printf("\n--------------------------\v");
     printf("Giá trị sau khi thay đổi: \n");
     hoan_vi(&a, &b);
     printf("Giá trị của a: %d\n", a);
     printf("Giá trị của b: %d", b);

     return 0;
}