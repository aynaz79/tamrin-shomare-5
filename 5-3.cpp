#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int counter = 0;
    for (int index = 0; input[index] != '\0'; ++index)
    {
        if (input[index] == ' ')
        {
            ++counter;
        }
    }
    cout << counter + 1;
}