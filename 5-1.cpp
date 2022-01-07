#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter row count: ";
    cin >> n;
    int pascalTriangle[1000];
    int counter = 0;
    for (int row = 1; row <= n; ++row)
    {
        int temp = 1;
        for (int i = 1; i <= row; ++i)
        {
            pascalTriangle[counter++] = temp;
            temp = temp * (row - i) / i;
        }
    }
    counter = 0;
    for (int row = 1; row <= n; ++row)
    {
        for (int i = 0; i < row; ++i)
        {
            cout << pascalTriangle[counter++] << ' ';
        }
        cout << '\n';
    }
    return 0;
}