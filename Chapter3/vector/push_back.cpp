#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char *argv[])
{

  vector<int> v;

  for (int i = 0; i < 100; ++i) {
    v.push_back(i);
  }

  for (int i = 0; i < 100; ++i) {
    cout << v[i] << endl;
  }

  return 0;
}
