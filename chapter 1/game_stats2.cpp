#include <iostream>
using namespace std;

int main()
{
  unsigned int score = 5000;
  cout << "Score:" << score << endl;

  // change the value of score
  score = score + 100;
  cout << "Score:" << score << endl;

  // combining output
  score += 100;
  cout << "Score:" << score << endl;

  int lives = 3;
  ++lives;
  cout << "Lives:" << lives << endl;

  lives = 3;
  lives++;
  cout << "Lives:" << lives << endl;

  lives = 3;
  int bonus = ++lives * 10;
  cout << "Lives, Bonus = " << lives << "," << bonus << endl;

  lives = 3;
  bonus = lives++ * 10;
  cout << "Lives, Bonus = " << lives << "," << bonus << endl;

  // integer wrap around
  score = 4294967295;
  cout << "\nScore:" << score << endl;
  ++score;
  cout << "Score:" << score << endl;

  return 0;
}