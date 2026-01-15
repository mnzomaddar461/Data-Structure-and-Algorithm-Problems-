#include<bits/stdc++.h>
/*- Asked in [Google, Amazon, Apple, Facebook, Microsoft, Adobe, Samsung, IBM, Intel, Uber, Linkedin] */
using namespace std;
class ValidParentheses{
    public:
        bool isValid(string s){
            stack<char> st;
            for(char c : s){
                if(c == '(' || c == '{' || c == '['){
                    st.push(c);
                }
                else{
                    if(st.empty()){
                        return false;
                    }
                    else{
                        if(c == ')' && st.top() == '('){
                            st.pop();
                        }
                        else if(c == '}' && st.top() == '{'){
                            st.pop();
                        }
                        else if(c == ']' && st.top() == '['){
                            st.pop();
                        }
                        else return false;
                    }
                }
            }
            if(st.empty()){
                return true;
            }
            else{
                return false;
            }
        }
};
int main(){
    string s;
    cin >> s;

    ValidParentheses vp;          
    bool result = vp.isValid(s);  

    if(result)
        cout << "true";
    else
        cout << "false";

    return 0;
}
