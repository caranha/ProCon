#include <iostream>
#include <string.h>

using namespace std;


int main() 
{
    int n;
    int candidate[30];

    cin >> n;
    while (n > 0)
    {
        memset(candidate,0,sizeof(candidate));
        int first=29;
        int second=29;
        int t=0;

        char vote;
        
        for (int i = 0; i < n; i++)
        {
           cin >> vote;
           if (t == 0)
           {
               int voten = vote-'A';
               candidate[voten]++;
               
               if (voten!=first &&
                   (candidate[voten] > candidate[first]))
               {
                    second = first; 
                    first = voten;
               }
               else if (voten!=second &&
                        voten!=first &&
                        candidate[voten] > candidate[second])
               {
                   second = voten;
               }
               
               if (candidate[first]-candidate[second] >
                   n-(i+1))
                   t = i;
           }
        }
        
        if (candidate[first] == candidate[second])
            cout << "TIE\n";
        else
            cout << (char) (first+(int)'A') << " " << t+1 << endl;
            
        cin >> n;
    }
    
}