#include <stdio.h>

void ordenar(int * ptr);

int main()
{
    int vetor[] = {6, 10, 1};
    int * ptr = vetor;

    ordenar(ptr);
}

void ordenar(int  * ptr)
{
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j+1);
                *(ptr+j+1) = (ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%i ", *(ptr+i));
    }
}