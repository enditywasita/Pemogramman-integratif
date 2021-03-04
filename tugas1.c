#include <stdio.h>

int main(void)
{
    int x;

    printf ("Masukkan sebuah integer : ");
    
    
    if (scanf ("%i", &x) != 1)
    {
        printf ("Tolong masukkan nilai integer\n");
    }
    else
    {
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
    }
    
    return 0;
}
