#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    char n[20];
    int h,m;
    double deg = 0;

    
    while (1)
    {
        cin >> n;
        sscanf(n,"%d:%d",&h,&m);
        if (h == 0 && m == 0)
            break;
        deg = (h*30.0 + m/2.0 - m*6.0);
        
        if (deg < 0)
            deg = deg*-1;
        if (deg > 180)
            deg = 360 - deg;
        
        cout << fixed << setprecision(3) << deg << "\n";
    }        
}