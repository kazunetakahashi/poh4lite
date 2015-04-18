#include <iostream>
#include <vector>
using namespace std;

struct product {
  int T, S, P;
  product(int _T, int _S, int _P) {
    T = _T;
    S = _S;
    P = _P;
  }
};

int main() {
  int N;
  cin >> N;
  vector<product> V;
  int _T, _S, _P;
  for (auto i=0; i<N; i++) {
    cin >> _T >> _S >> _P;
    V.push_back(product(_T, _S, _P));
  }
  int ans = 0;
  for (auto i=0; i<N; i++) {
    int sa = V[i].T - V[i].S;
    if (sa > 0) {
      ans += sa * V[i].P;
    }
  }
  cout << ans << endl;
}
