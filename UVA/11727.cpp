// UVA 11727 -- Cost Cutting
// Programming Challenges, 3rd edition, Chapter 1

#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int c[3];
    
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c[0] >> c[1] >> c[2];
        sort(c,c+3);
        cout << "Case " << i+1 << ": " << c[1] << "\n";
    }
}