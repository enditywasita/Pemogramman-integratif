#include <stdio.h>

int main(void)
{
    int x;

    printf ("Masukkan sebuah integer : ");
    scanf ("%i", &x);

    while (x != 1)
    {
        printf ("Masukkan sebuah integer : ");
        scanf ("%i", &x);
    }

    if (x > 0)
    {
        printf ("Angka yang anda masukkan merupakan bilangan positif\n");
    }
    else if (x < 0)
    {
        printf ("Angka yang anda masukkan merupakan bilangan negatif\n");
    }
    else
    {
        printf ("Angka yang anda masukkan merupakan 0\n");
    }
    return 0;
}
