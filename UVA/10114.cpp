// UVA 10114 Loansome Car Buyer
// Programming contest -- ad hoc problem

// Troublesome problem:
// Dealing with the holes in the data is boring
// 0 months, not 0 month
// use double instead of float
// downpayment is added in the initial loan, and never used again 
// (this is not well explained in the text)
// monthly payments is value/months, and not given in the text.


#include <iostream>
using namespace std;

int main()
{
    int i, m, n, k;
    double tp, p, v;
    double dp, dpn;
    double pay;
    
    cin >> m >> p >> v >> n;
    while (m > 0)
    {
        cin >> k >> dp;
        n--;

        
        tp = v;
        v = v+p;
        v = v*(1-dp);
        pay = tp/m;
        
        //cout << v << " " << tp << "\n";
        for (i = 1; i <= m+1; i++)
        {
            if (tp < v)
            {
                cout << i-1 << " month" << (i != 2?"s\n":"\n");
                break;
            }

            if (i > k && n > 0)
            {
                cin >> k >> dpn;
                n--;
            }
            if (i == k)
                dp = dpn;
            tp = tp - pay;
            v = v*(1-dp);

            //cout << dp << " " << v << " " << tp << "\n";
        }
        
        while (n > 0)
        {
            cin >> k >> dpn;
            n--;
        }
        
        cin >> m >> p >> v >> n;
    }
}
