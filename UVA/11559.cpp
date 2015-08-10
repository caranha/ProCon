#include <iostream>
using namespace std;

int main()
{
    int n, b, h, w;
    int i,j,minprice;
    int price,spots;
    
    while(cin >> n >> b >> h >> w)
    {
        minprice = b+1;
        
        for (i = 0; i < h; i++)
        {
            cin >> price;
            price = price * n;
            for (j = 0; j < w; j++)
            {
                cin >> spots;
                if (price < minprice && spots >= n)
                    minprice = price;
            }
        }
        
        if (minprice < b+1)
            cout << minprice << "\n";
        else
            cout << "stay home\n";
    }    
}
    