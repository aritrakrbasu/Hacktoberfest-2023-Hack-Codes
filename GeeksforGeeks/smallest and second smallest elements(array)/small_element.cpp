
// C++ simple approach to print smallest
// and second smallest element.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {111, 13, 25, 9, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sorting the array using
    // in-built sort function
    sort(arr, arr + n);
    // printing the desired element
    cout << "smallest element is " << arr[0] << endl;
    cout << "second smallest element is " << arr[1];
    return 0;
}