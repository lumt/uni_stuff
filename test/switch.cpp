#include <iostream>

using namespace std;

int main()
{
  int score, scorex;
  
  cout << "input score out of 100: ";
  cin >> score;
  cout << endl << "your score was: " << score << endl;

  scorex = score / 10;
						 cout << scorex << endl;
								   
					       
  switch (scorex)
    {
    case 0: cout << "you fuck!";
    case 1: cout << "dumb noob!";
    case 2:
    case 3:
    case 4: cout << "welldone you failed";
      break;
    case 5: cout << "you passed!";
      break;
    case 6:
    case 7: cout << "do better!";
      break;
    default: cout << "you either passed or you cheated!";
      break;
    }

		     cout << endl;
		     return 0;
}
  
		   
