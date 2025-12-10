#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Số lượng sinh viên muốn nhập: ");
    scanf("%d", &n);
    getchar();

    char ten[n][100];
    float diem[n];
    char mssv [n][20];

    for(int i = 0; i < n; i++)
    {
        printf("------------------\n");

        printf("Nhập MSSV %d: ", i + 1);
        fgets(mssv[i], sizeof(mssv), stdin);
        mssv[i][strcspn(mssv[i], "\n")] = '\0';

        printf("Nhap ten %d:", i +1);
        fgets(ten[i], sizeof(ten), stdin);
        ten[i][strcspn(ten[i], "\n")] = '\0';
        
        printf("Nhap diem %d: ", i + 1);
        scanf("%f", &diem[i]);
        while(getchar() != '\n');
    }

    char temp[50];
    float doi = 0;
    char sv[10];
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

                strcpy(sv, mssv[i]);
                strcpy(mssv[i], mssv[j]);
                strcpy(mssv[j], sv);
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

    printf(" %-5s | %-10s | %-25s | %-6s | %-25s\n", "STT", "MSSV", "Tên", "Điểm", "Xếp loại");
    printf("--------------------------------------------------------------\n");
    for(int i = 0; i < n; i++)
    {
        printf(" %-5d | %-10s | %-25s | %-6.2f | %-25s \n", i + 1, mssv[i], ten[i], diem[i], xl[i]);
    }

    return 0;
}