#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v;

  for (int i; cin >> i; v.push_back(i));  
  return 0;
}
