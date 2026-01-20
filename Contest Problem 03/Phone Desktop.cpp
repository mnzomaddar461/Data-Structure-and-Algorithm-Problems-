#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        int needscreen = y/2;
        int blank = needscreen * 7;
        if(y % 2 != 0){
            needscreen++;
            blank += 11;
        }

        if(x > blank){
            x -= blank;
            needscreen += x/15;
            if(x % 15 != 0){
                needscreen++;
            }
        }
        cout << needscreen << endl;
    }
    
    return 0;
}