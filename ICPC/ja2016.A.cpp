#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a[1010];
    
    cin >> n;
    while (n > 0)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        
        int diff = a[1] - a[0];
        for (int i = 1; i < n-1; i++)
        {
            if (a[i+1] - a[i] < diff)
                diff = a[i+1] - a[i];
        }
        
        cout << diff << endl;
        cin >> n;
    }
    
}