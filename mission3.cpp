#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
  ll t, n;
  cin >> t >> n;
  ll m[300100];
  for (auto i=0; i<n; i++) {
    cin >> m[i];
  }
  ll sum[300100];
  fill(sum, sum+300100, 0);
  for (auto i=0; i<n; i++) {
    sum[i+1] = sum[i];
    sum[i+1] += m[i];
  }
  ll M = -1;
  ll temp;
  for (auto i=t; i<n+1; i++) {
    temp = sum[i] - sum[i-t];
    M = max(M, temp);
  }
  cout << M << endl;
}
