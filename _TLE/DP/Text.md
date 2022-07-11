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

# 4 things to care about in a dp problem
1. state       -> clearly understand what does it signify
2. transition  -> if state is clearly defined, it comes up automatically  {care about the flow of the code}
3. base case   -> the transition expression will itself give you the base case      {the points at which our transition will not work is our base case.}
4. final sub problem -> 


You can solve all problems using this generic technique. 


# Problem
Given an array of integers (both positive and negative). Pick a subsequence of elements from it such that no 2 adjacent elements are picked and the sum of picked elements is maximized. 
A = [1, 2, 3, 4, 5] 
picked subsequence = [1, 3, 5]

A = [1, 4, 2, -10, 10]
picked subsequence = [4, 10]

* State
dp[i][0] = maximum subsequence sum till index i, excluding i
dp[i][1] = maximum subsequence sum till index i, including i

[(......................[.]).......]
* Transition
dp[i][0] = max(dp[i-1][1], dp[i-1][0])
dp[i][1] = arr[i] + dp[i-1][0]

* bAse Case
when i = 0,
dp[0][1] = arr[0];
dp[0][0] = 0;

* Final sub Problem
at n-1 th index, either we can include it or not
dp[n-1][0] or dp[n-1][1] we have to choose the maximum
thus max(dp[n-1][0], dp[n-1][1]);


------------------------------------------
Another approach to solve the same problem



