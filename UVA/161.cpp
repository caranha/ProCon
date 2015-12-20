// UVA 161 Traffic Lights
// k lights have an n second cycle
// n-5 green, 5 yellow, n red.
// After at least on light turns yellow, when will all lights turn green again?
// Input is very irregular (breaklines, spaces, etc) but cin deals with that like a boss.

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{

  while (1)
  {
    int in;
    vector<int> lights;
    int lsize = 0;
    int minlight = 100;
    
    do {
      cin >> in;
      lights.push_back(in);
      if ((in != 0)&&(in-5 < minlight))
	minlight = in-5;
    } while (in != 0);
    
    if (lights.size() == 1)
      break;
    
    int i;
    for (i = minlight; i < 18001; i++)
    {
      bool green = true;
      for (int j = 0; j < lights.size() - 1; j++)
	if (i%(lights[j]*2) >= lights[j]-5)
	{
	  green = false;
	  break;
	}
      if (green) break;
    }
    
    if (i < 18001) 
    {
      cout << setfill('0') << setw(2) << i/3600;
      cout << ":";
      cout << setfill('0') << setw(2) << (i/60)%60;
      cout << ":";
      cout << setfill('0') << setw(2) << (i%60) << endl;
    }
    else
      cout << "Signals fail to synchronise in 5 hours" << endl;    
  }
}


//5 hours

//5 * 60 * 60 = 5*3600 18000

//0 to n-6 green,
//n-5 to n-1 orange,
//n to 2*n-1 red 


//k%2*n
//k < n-5