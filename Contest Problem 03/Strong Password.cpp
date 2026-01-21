#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int i;
        bool found = false;

        for(i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1]){
                found = true;
                break;
            }
        }

        if(found){
            
            char ch = (s[i-1] == 'a') ? 'b' : 'a';
            s.insert(s.begin() + i, ch);
        }
        else{
            
            char ch = (s[0] == 'a') ? 'b' : 'a';
            s.insert(s.begin(), ch);
        }

        cout << s << endl;
    }
    return 0;
}
