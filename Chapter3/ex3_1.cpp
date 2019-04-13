#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{

  int sum = 0;
  int i = 50;
  
  while (i <= 100) {
    sum += i;
    i++;
  }

  cout << "Sum of the number between 50 and 100 ";
  cout << sum << endl;


  sum = 0;
  cout << "Current value: " << sum  << endl;
  cout << "After sum++: " << sum++ << endl;

  // reset to orginal
  sum = 0;
  cout << "After ++sum: " << ++sum << endl;
  
  
  return 0;
}
