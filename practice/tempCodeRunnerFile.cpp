  long long ans = 0;
  int poscnt = 0, negcnt = 0;
  bool temp = true;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ') {
      if (temp) {
        if (s[i] == '+') poscnt++;
        if (s[i] == '-') negcnt++;
        if (poscnt && negcnt) return 0;
        if (poscnt > 1 || negcnt > 1) return 0;
      }

      if (s[i] >= '0' && s[i] <= '9') {
        temp = false;
        ans = ans * 10 + (((int)s[i]) - 48);
        if (i != s.size() - 1) {
          if (s[i + 1] == '+' || s[i + 1] == '-' || s[i + 1] == ' ') {
            if (negcnt >= 1) ans = ans * -1;
            return ans;
          }
        }
        // cout << ((int)s[i]) - 48 << endl;
      } else if (s[i] == '+' || s[i] == '-') {
      } else {
        if (negcnt >= 1) ans = ans * -1;
        return ans;
      }
    }
    if (negcnt >= 1) {
      if (-ans <= INT32_MIN) return INT32_MIN;
    } else {
      if (ans >= INT32_MAX) return INT32_MAX;
    }
  }
  // cout << "ans: " << ans;
  // if (negcnt >= 1) ans = ans * -1;
  if (negcnt >= 1) ans = ans * -1;
  return ans;