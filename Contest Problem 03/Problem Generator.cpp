#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int fre[7] = {0};
        for(char c : s){
            fre[c - 'A']++;
        }
        int con = 0;
        for(int i = 0; i < 7; i++){
            if(fre[i] < m){
                con += m - fre[i];
            }
        }
        cout << con << endl;
    }
    
    return 0;
}