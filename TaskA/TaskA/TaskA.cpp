
#include <iostream>

using namespace std;

int main() {
  int n, k;
  int counter = 0;
  int factor = 1;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    if (k % i == 0 && k / i <= n) {
      counter++;
    }
  }
  cout << counter;
}
