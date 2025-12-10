#include <stdio.h>
#include <string.h>

struct sinhvien
{
    char MaSV[8];
    char ten[30];
    float diem;
};
void inputSV(struct sinhvien *F)
{

    printf("Mã số sinh viên: ");
    fgets(F->MaSV, 10, stdin);
    F->MaSV[strcspn(F->MaSV, "\n")] = '\0';
     
    printf("Nhập tên: ");
    fgets(F->ten, 50, stdin);
    F->ten[strcspn(F->ten, "\n")] = '\0';

    printf("Nhập điểm: ");
    scanf("%f", &F->diem);
    getchar();

}
void printSV(struct sinhvien *F, int n)
{
    
    printf("MaSV: |%s| Tên: |%s| Điểm: |%.2f| \n", F->MaSV, F->ten, F->diem);
    
}
int main()
{
    int n; 
    printf("Số lượng sinh viên: ");
    scanf("%d", &n);
    getchar();

    struct sinhvien SD21301[n];

    printf("--- Nhập thông tin sinh viên ---\n");
    printf("================================\n");
    for(int i = 0; i < n; i++)
    {
        printf("--- Sinh viên %d ---\n", i + 1);
        inputSV(&SD21301[i]);
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");
    for (int i = 0; i < n; i++)
    {
        printSV(&SD21301[i], n);
    }

    char mssv[10];
    printf("\nMục tìm kiếm sinh viên (tìm bằng mã sinh viên)\n");
    printf("Nhập mã sinh viên: ");
    fgets(mssv, 15, stdin);
    mssv[strcspn(mssv, "\n")] = '\0';
    for(int i = 0; i < n; i++)
    {
        if(strcmp(mssv, SD21301[i].MaSV) == 0)
        {
            printf("MaSV: |%s| Tên: |%s| Điểm: |%.2f| \n", SD21301[i].MaSV, SD21301[i].ten, SD21301[i].diem);
        }
    }

    return 0;
}