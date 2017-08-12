#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
   if (a == 0) return b;
   return gcd(b%a, a);
}

long long lcm(long long a, long long b)
{
   long long g = gcd(a,b);
   return (min(a,b)/g)*max(a,b);
}

int main()
{
   int N;
   long long T1, T2;

   cin >> N;
   
   N -= 1;
   cin >> T1;

   while (N--)
   {
      cin >> T2;
      T1 = lcm(T1,T2);
   }

   cout << T1 << "\n";

}
