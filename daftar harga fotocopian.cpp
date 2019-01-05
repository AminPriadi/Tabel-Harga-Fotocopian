#include<stdio.h>
using namespace std;
int main()
{
    int A=1,h;
    printf("DAFTAR HARGA FOTOCOPIAN\n");
    printf("Jumlah Lembar\t | Harga\t\n");
    while (A<=25)
    {
        h=A*95;
        printf("%d Lembar \t | Rp%d\n",A,h);
        A++;
    }
    return 0;
}
