/*
    [Project] : Quick-Sort Algorithm
    [Author]  : Pocieszny
*/ 

#include <iostream>

void swap (int & x, int & y)
{
    int temp {x};
    x = y;  y = temp;
}

void quickSort (int tab[], int start, int end)
{
    int
        pivot   {end},
        left    {start},
        right   {end - 1};

    for (;;)
    {
        while (tab[left] < tab[pivot])
            ++left;
        
        while (tab[right] > tab[pivot])
            --right;

        if (left >= right)
            break;
            
        swap (tab[left], tab[right]);
        left    = start;
        right   = end - 1;
    }

    swap (tab[pivot], tab[left]);
    pivot = left;

    if (pivot < end)
        quickSort (tab, pivot + 1, end);
    
    if (pivot > start)
        quickSort (tab, start, pivot - 1);
}

int main ()
{
    int tab [10] {8, 8, 5, 1, 4, 3, 2, 7, 0, 3};
    quickSort (tab, 0, 9);

    for (int x : tab)
        printf ("%i", x);
    putchar_unlocked ('\n');
}
