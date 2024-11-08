/*Câu 1: Nhập n in ra màn hình các dấu * theo dạng
a. hình tam giác cân góc dưới bên trái*/
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Hay nhap gia tri cua n vao day: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}

