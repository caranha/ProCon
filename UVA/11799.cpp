// UVA 11799 Horror Show
// Competitive Programming chapter 1

#include <iostream>
using namespace std;

int main()
{
    int t,n,i;
    int speed, maxspeed;
    
    cin >> t;
    
    for (i = 0; i < t; i++)
    {
        maxspeed = 0;
        cin >> n;
        for (;n>0;n--)
        {
            cin >> speed;
            if (speed > maxspeed)
                maxspeed = speed;
        }
        cout << "Case "<<i+1<<": "<<maxspeed<<"\n";
    }
}