#include <iostream>
#include <string>

using namespace std;


int main()
{
  string line;

  while (getline(cin, line)) {
    if (!line.empty()) {
      if (line.size() >= 10) {
	cout << line << endl;
      }
    }
  }


  return 0;
}
