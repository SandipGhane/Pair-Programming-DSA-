/*  Note : use Recursion
    Given n=4;
    output = 12344321;
*/

#include <bits/stdc++.h>
using namespace std;
void printSeries(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n;
    printSeries(n - 1);
    cout << n;
}
int main()
{
    int n = 4;
    printSeries(n);
}