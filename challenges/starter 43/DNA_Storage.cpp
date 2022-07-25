#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// crewx123---------------------------------------------------<START>
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		cin>>n;
    string binary;
    cin >> binary;

		// for(int i=0;i<n;i++) cin>>binary[i];
		for(int i=0;i<n-1;i=i+2){
			if(binary[i] == '0' && binary[i+1] == '0') cout<<'A';
			else if(binary[i] == '0' && binary[i+1] == '1') cout<<'T';
			else if(binary[i] == '1' && binary[i+1] == '0') cout<<'C';
			else cout<<'G';
		}
		cout<<endl;
	}
	return 0;
}  //-----------------------------------------------------------crewx123
//.......<END>