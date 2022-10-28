#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int GreekFavouriteElements(int a[], int n)
{
    int div = 0, sum = 0, num;
    for (int i = 0; i < n; i++)
    {
        div = 0;
        for (int x = 1; x <= a[i]; x++)
        {
            if (a[i] % x == 0)
            {
                div++;
            }
        }
        if (div == 4)
        {
            for (int x = 1; x <= a[i]; x++)
            {
                if (a[i] % x == 0)
                {
                    sum = sum + x;
                }
            }
        }
    }

    return (sum);
}
int main()
{
    int a[] = {6, 10, 4};
    cout << GreekFavouriteElements(a, 3);
}
