#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Hello world C++" << endl;
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  for (vector<int>::iterator it = v.begin(), end = v.end(); it != end; ++it) {
    cout << "Elem " << *it << endl;
  }
  return 0;
}
