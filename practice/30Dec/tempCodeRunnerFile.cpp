int isEnough(ll x, ll w, ll h, ll n) {
  if (((x / w) * (x / h)) >= n) {
    return 1;
