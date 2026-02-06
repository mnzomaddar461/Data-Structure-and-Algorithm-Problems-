#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    stack<char> undoSt;
    stack<char> redoSt;

    for(int i = 0; i < n; i++){
        string command;
        cin >> command;

        if(command == "TYPE")
        {
            char ch;
            cin >> ch;

            undoSt.push(ch);

            while(!redoSt.empty())
            {
                redoSt.pop();
            }
        }
        else if(command == "UNDO"){
            if(!undoSt.empty())
            {
                char ch = undoSt.top();
                undoSt.pop();
                redoSt.push(ch);
            }
        }
        else if(command == "REDO"){
            if(!redoSt.empty())
            {
                char ch = redoSt.top();
                redoSt.pop();
                undoSt.push(ch);
            }
        }
    }

    string result = "";

    while(!undoSt.empty())
    {
        result += undoSt.top();
        undoSt.pop();
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}
