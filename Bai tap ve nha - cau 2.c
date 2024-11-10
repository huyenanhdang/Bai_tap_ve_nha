#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    double tong = 0.0;
    printf("Hay nhap gia tri cua n vao day: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            tong += 1.0 /i;
        }
        else 
        {
            tong -= 1.0 / i;
        }
    }
    printf("Tong cac so la: %.4f\n", tong);
    return(0);
}





