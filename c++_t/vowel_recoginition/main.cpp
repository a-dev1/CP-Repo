#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int T;
    cin >> T;  

    while(T){
        string s;
        cin >> s;
        int sum = 0;

        for (int i = 0; i < (int)s.length(); i++)
        {
            for (int j = 0; j < (int)s.length()-i; j++)
            {
                string subString = s.substr(i, j+1);
                for(char c : subString){
                    c = tolower(c);
                    if(c == 'a'   || c =='e' || c == 'i' || c == 'o' || c == 'u'){
                        sum++;
                    }
                }
            }
        }
    cout << sum;    
    T--;
    }

    return 0;
}