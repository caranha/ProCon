
// the name of the requirements are not actually used in the problem
// you just need to compare each new proposal with the best known one

// c++ input is tricky when mixing cin and getline -> cin leaves a trailing 
// \n, which must be cleaned up by cin.ignore (hackish)
// cleaning up cin with ignore lets us use getline

#include <iostream>
using namespace std;

int main()
{
    int p, n, serial = 0;
    string name;
    string line;
    
    double bprice, price;
    int breq, req;
    
    cin >> n >> p;
    cin.ignore(1000, '\n');
    while (n!=0 || p!=0)
    {        
        serial++;

        breq = 0; bprice = 0;
        int i;
        for (i =0; i < n; i++)
        {
            getline(cin,line);
            //cout << line << "\n";
        }
        
        for (i =0; i < p; i++)
        {
            //cout << "proposal " << i << "\n";
            getline(cin,line); // proposal name
            //cout << line << "\n";
            cin >> price >> req;
            cin.ignore(1000, '\n');
            if ((i == 0) || (req > breq) || (req == breq && price < bprice))
            {
                breq = req;
                bprice = price;
                name = line;
            }
            for (; req > 0; req--)
                getline(cin,line);
        }
        cout << (serial > 1?"\n":"")<< "RFP #"<<serial<<"\n";
        cout << name << "\n";


        cin >> n >> p;               
        cin.ignore(1000, '\n');
        //cout << n <<" " << p << "\n";
        //return 1;
    }
    
}
