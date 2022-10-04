#include <iostream>
using namespace std;

int main()
{
  if (true)
  {
    cout << "This is always displayed.\n\n" << endl;
  } 
  if (false)
  {
    cout << "This is never displayed.\n\n" << endl;
  }
  int score = 1000;
  if (score)
  {
    cout << "At least you didn't score zero.\n\n" << endl;
  }
  if (score >= 250)
  {
    cout << "You scored 250 or more. Decent.\n\n" << endl;
  }
  if (score >= 500)
  {
    cout << "You scored 500 or more. Nice.\n\n" << endl;
  }
  if (score >= 1000)
  {
    cout << "You scored 1000 or more. Impressive!\n\n" << endl;
  }
  return 0;
}