"Those who do not remember the past are condemned to repeat it."

Find the sum of first n natural no. 
without using n * (n+1)/2;

int dp[n+1]; 
for(int i = 1; i <= n; i++) dp[i] = i + dp[i-1];

-------------------------------------------------------------------------
# When we try to do everything kind of brute force, at those places dP can be a way
ex. pick k elements from a list f N elements such that their sum is maximum.
or pick k elements from a list of n elements such that a particular condition holds (f(...))

C(n, k) => brute force {Choose k elements from n}
using dp we can break it into some sub problems which will help to reduce time complexity

//Standard fib ex. 
fib(int x) {
  if x == 1 || x == 2:
    return 1;
  return fib(x-1) + fib(x-2);
}

//DP solution
int dp[40];

for(int i = 1; i <= n; i++) dp[i] = -1;
int fibo(int n) {
  if(n == 1 || n == 2) return 1;
  if(dp[n] != -1) return dp[n];

  return dp[n] = fibo[n-1] + fibo[n-2];
}