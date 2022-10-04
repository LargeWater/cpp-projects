#include <iostream>
using namespace std;

int main()
{
  char again;
  do
  {
    cout << "\n**Played an exciting game**" << endl;
    cout << "Do you want to play again? (y/n): ";
    cin >> again;
  } while (again == 'y');

  cout << "\nOkay, bye!";
  
  return 0;
}