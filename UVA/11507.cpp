#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s;
    string input;
    int st[4][6] = {{2,3,1,0,4,5},
                    {3,2,0,1,4,5},
                    {4,5,2,3,1,0},
                    {5,4,2,3,0,1}};    
    int n;
    
    cin >> n;
    while (n > 0)
    {
        s = 0;
        
        for (;n > 1;n--)
        {
           cin >> input;
           if (input.compare("+y")==0)
               s = st[0][s];
           if (input.compare("-y")==0)
               s = st[1][s];
           if (input.compare("+z")==0)
               s = st[2][s];
           if (input.compare("-z")==0)
               s = st[3][s];
           //cout << s;
        }
        
        //cout << "\n";
        
        switch(s)
        {
            case 0:
                cout << "+x\n";
                break;
            case 1:
                cout << "-x\n";
                break;
            case 2:
                cout << "+y\n";
                break;
            case 3:
                cout << "-y\n";
                break;
            case 4:
                cout << "+z\n";
                break;
            case 5:
                cout << "-z\n";
                break;
        }
        
        cin >> n;
    }
    
}
