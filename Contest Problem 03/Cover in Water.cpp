#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countBlank = 0;
        int emptysell = 0;
        for(char c : s){
            if(c == '.'){
                emptysell++;
                countBlank++;
                if(countBlank == 3){
                    break;
                }
            }
            else{
                countBlank = 0;
            }
        }
        if(countBlank == 3){
            cout << 2 << endl;
        }
        else{
            cout << emptysell << endl;
        }
    }
    
    return 0;
}