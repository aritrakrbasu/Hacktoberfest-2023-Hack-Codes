#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int countBalls(int n)
{
    if (n % 2 == 0)
        return (0);
    else
        return (n * 2);
}

int main()
{
    int N;
    cout << "\n Enter the number of balls : ";
    cin >> N;
    cout << "\n Number of Balls Offered : " << countBalls(N);
}
