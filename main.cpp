#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;
ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;
  const auto& target = s.substr(0, 5);
  cin >> n;

  auto ans = ll{0};
  while (0 < (n--)) {
    string x;
    cin >> x;

    const auto& t = x.substr(0, 5);
    if (target == t) {
      ++ans;
    }
  }
  cout << ans;

  return 0;
}