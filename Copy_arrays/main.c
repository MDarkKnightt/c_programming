#include <stdio.h>

void copy_array(int *, int *);

void main()
{
    int num_1[] = {2, 5, 6, 4, 1, 3, 10, 25, -1};
    int num_2[10];

    copy_array(num_2, num_1);

    for (int i = 0; i < 8; i++)
        printf("%d ", num_2[i]);

        
}

void copy_array(int *arD, int *arS)
{
    int *ptr = arD;

    for (int k = 0; *arS != -1; k++)
        *ptr++ = *arS++;

    *ptr = -1;
}