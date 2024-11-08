/*Câu 1: Nhập n in ra màn hình các dấu * theo dạng
b. hình tam giác cân góc trên bên phải*/
#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Hay nhap gia tri cua n vao day: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) 
    {
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


