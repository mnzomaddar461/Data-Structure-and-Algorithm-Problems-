#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(char c : s){
            if(c == '1'){
                count++;
            }
        }

        int answer = 0;
        for(char c : s){
            if(c == '1'){
                answer += count - 1;
            }
            else{
                answer += count + 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}