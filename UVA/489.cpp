// UVA 489 Hanman Judge
// Competitive Programming 3 -- Games (easier)

// Test if a game of hangman ends in victory, lost or tie
// easiest way is to have a vector of letters, and check if they are 
// 0- incorrect, 1- correct

// Not clear from the descriptions, but retrying accepted 
// letters should count as errors.

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int r;
  string word;
  string answer;
  int t[30];
  while (1)
  {
    int l = 7;
    int q = 0;
    cin >> r;
    if (r < 0)
      break;
    cout << "Round " << r << endl;
    for (int i = 0; i < 30; i++)
      t[i] = 0;
    cin >> word;
    cin >> answer;

    for (int i = 0; i < word.size(); i++)
    { 
      if (t[word[i] - 'a'] == 0) q++;
      t[word[i] - 'a'] = 1;
    }
    for (int i = 0; i < answer.size(); i++)
    {
      if ((t[answer[i]-'a']) == 0)
      {
	l--;
	if (l == 0)
	{
	  cout << "You lose." << endl;
	  break;
	}  
      }
      if ((t[answer[i]-'a']) == 1)
      {
	q--;
	if (q == 0)
	{
	  cout << "You win." << endl;
	  break;
	}
      }
      t[answer[i]-'a'] = 0;
    }
    if ((l > 0)&&(q > 0))
      cout << "You chickened out." << endl;
    
  }
}
