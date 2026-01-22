#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        map<int, int> track;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            track[arr[i]]++;
        }

        if(track.size() > 2){
            cout << "No" << endl;
        }
        else{
            if(track.size() == 2){
                vector<int> v;
                for(auto p : track){
                    v.push_back(p.second);
                }
                if(abs(v[0] - v[1]) > 1){
                    cout << "No" << endl;
                }
                else{
                    cout << "Yes" << endl;
                }
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }
    
    return 0;
}