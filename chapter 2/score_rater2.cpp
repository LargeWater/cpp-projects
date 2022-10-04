#include <iostream>
using namespace std;

int main()
{
  int score;
  cout << "Enter your score: ";
  cin >> score;

  if (score >= 1000)
  {
    cout << "You scored 1000 or more. Impressive!\n\n" << endl;
  }
  else if (score >= 500)
  {
    cout << "You scored 500 or more. Nice.\n\n" << endl;
  }
  else if (score >= 250)
  {
    cout << "You scored 250 or more. Decent.\n\n" << endl;
  }
  else
  {
    cout << "You scored less than 250. Nothing to brag about.\n\n" << endl;
  }
}