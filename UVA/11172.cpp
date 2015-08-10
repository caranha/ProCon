// Competitive Program Book, Ed 3
// Chapter 1, getting started (easy problems)
// UVA 11172 - Relational Operator

#include <iostream>
using namespace std;

int main()
{
    int n;
    long a, b;
    cin >> n;
    
    for (; n > 0; n--)
    {
        cin >> a >> b;
        if (a > b)
            cout << ">\n";
        if (a < b)
            cout << "<\n";
        if (a == b)
            cout << "=\n";
    }
}
