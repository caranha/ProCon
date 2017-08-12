#include <iostream>

using namespace std;

int main()
{
   int A,B,C,D;
   
   cin >> A >> B >> C >> D;
   
   if (C >= B || A >= D) 
      cout << "0\n";
   else
      cout << min(B - A, min(B - C, min(D - C, D - A))) << "\n";

}
