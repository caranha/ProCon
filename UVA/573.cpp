// Don't forget the limits of the problem:
// 1- the snail speed does not get negative
// 2- success or failure is determined on >, not >=

#include <iostream>
using namespace std;

int main()
{
    int h,u,d,f;
    
    cin >> h >> u >> d >> f;
    while (h != 0)
    {
        double fatigue = u*(f/100.0);
        double cu = u;
        double pos = 0;
        int day = 1;
        
        while (1)
        {
            pos = pos + cu;
            if (pos > h)
            {
                cout << "success on day " << day << "\n";
                break;
            }
            
            cu -= fatigue;
            if (cu < 0)
                cu = 0;
            pos -= d;
            
            if (pos < 0)
            {
                cout << "failure on day " << day << "\n";
                break;
            }
            
            day++;
        }
        
        
        cin >> h >> u >> d >> f;
    }
    
}
