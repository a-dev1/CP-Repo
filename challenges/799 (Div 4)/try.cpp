void solve() {
  int n, s;
  cin >> n >> s;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  int sum = accumulate(begin(v), end(v), 0ll);
  if (sum < s) {
    cout << -1 << "\n";
    return;
  }
  if (sum == s) {
    cout << 0 << "\n";
    return;
  }
  int maxi = 0, cnt = 0, j = 0;
  int need = s;
  for (int i = 0; i < n; i++) {
    cnt += v[i];
    while (j <= i and cnt > need) {
      cnt -= v[j++];
    }

    maxi = max(maxi, i - j + 1);
  }

  cout << n - maxi << "\n";
}