#include <stdio.h>
#include <string.h>

struct sinhVien {
    char maSV[8];     
    char hoTen[30];   
    float diem;       
    char thanhTuu[10];
};
void timThanhTuu(struct sinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        if(ds[i].diem >= 5)
            strcpy(ds[i].thanhTuu, "Pass");
        else
            strcpy(ds[i].thanhTuu, "Fail");
    }
}
void xuatDSSV(struct sinhVien ds[], int n) {
    printf("%-8s | %-20s | %-5s | %-10s\n", "MaSV", "Ho Ten", "Diem", "Thanh Tuu");
    printf("---------------------------------------------------------------\n");
    
    for(int i = 0; i < n; i++) {
        printf("%-8s | %-20s | %-5.1f | %-10s\n",
               ds[i].maSV, ds[i].hoTen, ds[i].diem, ds[i].thanhTuu);
    }
}
int main() {
    struct sinhVien sd21301[5] = {
        {"PS98765", "Teo",    6},
        {"PS65432", "Ty",     8},
        {"PS45678", "Lionel", 7},
        {"PS11111", "CR7",   10}
    };

    int n = 4; 
    
    timThanhTuu(sd21301, n);

    
    xuatDSSV(sd21301, n);

    return 0;
}
