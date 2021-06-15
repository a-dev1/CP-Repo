// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// #define ar array
// #define ll long long

// const int MAX_N = 1e5 + 1;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;

// void solve() {}

// int main() {
//   vector<vector<int>> matrix(5, vector<int>(5, 0));
//   vector<vector<int>> answer(5, vector<int>(5, 1));

//   for (int i = 1; i <= 3; i++) {
//     for (int j = 1; j <= 3; j++) {
//       cin >> matrix[i][j];
//     }
//   }

//   for (int i = 1; i <= 3; i++) {
//     for (int j = 1; j <= 3; j++) {
//       if (matrix[i][j] % 2 != 0) {
//         answer[i][j] = 0;
//         answer[i + 1][j] = 0;
//         answer[i - 1][j] = 0;
//         answer[i][j + 1] = 0;
//         answer[i][j - 1] = 0;
//       }
//     }
//   }

//   for (int i = 1; i <= 3; i++) {
//     for (int j = 1; j <= 3; j++) {
//       cout << answer[i][j];
//     }
//     cout << endl;
//   }

//   return 0;
// }#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
#include<queue>
using namespace std;
#define PB push_back
#define MP make_pair
#define L first
#define R second
bool a[10][10];
main()
{
	ios_base::sync_with_stdio(false);
	for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
		a[i][j] = true;
	for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
		{
			int k;
			cin>>k;
			if(k%2==1)
			{
				a[i][j] = 1 - a[i][j];
				a[i-1][j] = 1 - a[i-1][j];
				a[i][j+1] = 1 - a[i][j+1];
				a[i][j-1] = 1 - a[i][j-1];
				a[i+1][j] = 1 - a[i+1][j];
			}
		}
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
			cout<<a[i][j];
		cout<<endl;
	}
}