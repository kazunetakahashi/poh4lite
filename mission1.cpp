#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> V;
  int s;
  for (auto i=0; i<N; i++) {
    cin >> s;
    V.push_back(s);
  }
  int sum = 0;
  auto it = V.begin();
  while (it != V.end()) {
    sum += *it++;
  }
  cout << sum << endl;
}
