#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    int tong = 0;
    printf("Hay nhap gia tri cua n vao day: ");
    scanf("%d", &n);

    if (n % 2 == 1)
    {
        for (i = 1; i <= n; i += 2)
        {
            tong += i;
        }
        printf("Tong cac so le tu 1 den %d: %d\n", n, tong);
    }
    else 
    {
        for (i = 2; i <= n; i += 2)
        {
            tong += i; 
        }
        printf("Tong cac so chan tu 1 den %d: %d\n", n, tong);
    }
    return(0);
}




