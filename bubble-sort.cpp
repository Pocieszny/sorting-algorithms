/*
    [Project] : Bubble-Sort Algorithm
    [Author]  : Pocieszny
*/ 

#include <iostream>

bool sort (int toSort[], unsigned size)
{
    static bool output {};
    output = false;

    for (unsigned i {}; i < (size - 1); ++i)
    {
        if (toSort[i] > toSort[i + 1])
        {
            int temp {toSort[i]};
            toSort[i] = toSort[i + 1];
            toSort[i + 1] = temp;
            output = true;
        }
    }

    if (output)
        sort (toSort, size);
    else
    {
        for (unsigned i {}; i < size; ++i)
            printf ("%i", toSort[i]);
        putchar_unlocked ('\n');
    }

    return output;
}

int main ()
{
    int test[]  {2, 3, 4, 5, 6};
    int ccc[]   {9, 9, 5, 3, 1};

    sort (test, 5);
    sort (ccc, 5);
}
