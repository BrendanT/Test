#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;     cout << "numbers: " << numbers << ", p: " << p << ", *p: " << *p << endl;
  p++;  *p = 20;             cout << "numbers: " << numbers << ", p: " << p << ", *p: " << *p << endl;
  p = &numbers[2];  *p = 30; cout << "numbers: " << numbers << ", p: " << p << ", *p: " << *p << endl;
  p = numbers + 3;  *p = 40; cout << "numbers: " << numbers << ", p: " << p << ", *p: " << *p << endl;
  p = numbers;  *(p+4) = 50; cout << "numbers: " << numbers << ", p: " << p << ", *p: " << *p << endl;

  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  cout << endl;

  return 0;
}