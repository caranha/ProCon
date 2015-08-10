// UVA problema 11498,Division of Nlogonia
// Programming Challenges, third edition

#include <iostream>
using namespace std;

int main()
{
    int n;
    int x0,y0;
    int x,y;
    
    cin >> n;
    while (n > 0)
    {
        cin >> x0 >> y0;

        for (;n>0;n--)
        {
            cin >> x >> y;
            if (x == x0 || y == y0)
                cout << "divisa\n";
            else
                cout << (y > y0?"N":"S") << (x > x0?"E":"O") << "\n";
        }
        
        cin >> n;
    }
    
}