#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{

  int a[] = {0,1,2,3};

  int *pbeg = begin(a);
  int *pend = end(a);
  
  while (pbeg != pend) {
    cout << *pbeg++ << endl;
  }

  vector<int> v(begin(a), end(a));

  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }
  
  return 0;
}
