#include<bits/stdc++.h>
using namespace std;
// - Asked in [Google, Facebook] 
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // First input
        stack<char> st1;
        for(char c : s){
            if(c == '#' ){
                if(!st1.empty()){
                    st1.pop();
                }
            }
            else{
                st1.push(c);
            }
        }

        // second input
        stack<char> st2;
        for(char c : t){
            if(c == '#' ){
                if(!st2.empty()){
                    st2.pop();
                }
            }
            else{
                st2.push(c);
            }
        }
        if(st1 == st2){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    string s;
    string t;

    cin >> s;
    cin >> t;

    Solution chack;
    bool result = chack.backspaceCompare(s,t);

    if(result){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}