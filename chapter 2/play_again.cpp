#include <iostream>
using namespace std;

int main()
{
  char again = 'y';
  while (again == 'y')
  {
    cout << "Hello!" << endl;
    cout << "Do you want to hear that again? (y/n): ";
    cin >> again;
  } 
  cout << "\nOkay, bye!";
  return 0;
}