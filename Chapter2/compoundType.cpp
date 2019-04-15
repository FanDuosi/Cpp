#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

  // reference
  int i = 5, &ri=i;

  i = 10;
  ri = 20;

  cout << i << ri << endl;


  // pointer
  int ival = 10;
  int *p = &ival;

  *p = 20;
  cout << *p << endl;
  return 0;
}

