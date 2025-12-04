#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Số lượng sinh viên muốn nhập: ");
    scanf("%d", &n);
    getchar();

    char ten[n][50];
    float diem[n];

    for(int i = 0; i < n; i++)
    {
        printf("Nhap ten %d:", i +1);
        scanf("%s", &ten[i]);
        
        printf("Nhap diem %d: ", i + 1);
        scanf("%f", &diem[i]);
    }

    char temp[50];
    float doi = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(diem[j] < diem[i])
            {
                doi = diem[i];
                diem[i] = diem[j];
                diem[j] = doi;

                strcpy(temp, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], temp);
            }
        }
    }

    char xl[n][50];
    for(int i = 0; i < n; i++)
    {
        if(diem[i] >= 9)
        {
            //printf(" xuất sắc");
            strcpy(xl[i], "Học lực xuất sắc");
        }else if(diem[i] < 9 && diem[i] >= 8)
        {
            //printf(" giỏi");
            strcpy(xl[i], "Học lực giỏi");
        }else if(diem[i] < 8 && diem[i] >= 6.5)
        {
            //printf(" khá");
            strcpy(xl[i], "Học lực khá");
        }else if(diem[i] < 6.5 && diem[i] >= 5)
        {
            //printf(" trung bình");
            strcpy(xl[i], "Học lực trung bình");
        }else if(diem[i] < 5 && diem[i] >= 3.5)
        {
            //printf(" yếu");
            strcpy(xl[i], "Học lực yếu");
        }else if(diem[i] < 3.5)
        {
            //printf(" kém");
            strcpy(xl[i], "Học lực kém");
        }
    }

    printf(" %-5s | %-20s | %-6s | %-25s\n", "STT", "Tên", "Điểm", "Xếp loại");
    printf("--------------------------------------------------------------\n");
    for(int i = 0; i < n; i++)
    {
        printf(" %-5d | %-20s | %-6.2f | %-25s\n", i + 1, ten[i], diem[i], xl[i]);

    }

    return 0;
}