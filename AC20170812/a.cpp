#include <iostream>

using namespace std;

int main()
{

   int N;
   
   cin >> N;
   
   if (N/100 == N%10)
      cout << "Yes\n";
   else
      cout << "No\n";
}
