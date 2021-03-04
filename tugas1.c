#include <stdio.h>

int main(void)
{
    int x;

    printf ("Masukkan angka: ");
    scanf ("%i", &x);

    if (x > 0)
    {
        printf ("Angka yang anda masukkan %i merupakan Angka positif\n", x);
    }
    else if (x < 0)
    {
        printf ("Angka yang anda masukkan %i merupakan Angka negatif\n", x);
    }
    else
    {
        printf ("Angka yang anda masukkan adalah %i\n", x);
    }

    return 0;
}