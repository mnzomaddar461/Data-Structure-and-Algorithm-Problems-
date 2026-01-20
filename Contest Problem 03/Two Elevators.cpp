#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int current_location_left1, current_location_left2, nextfloor;
        int timeOfL1, timeOfL2;
        cin >> current_location_left1 >> current_location_left2 >> nextfloor;

        timeOfL1 = current_location_left1 - 1;
        timeOfL2 = abs(current_location_left2 - nextfloor) + (nextfloor - 1);
        if(timeOfL1 < timeOfL2){
            // for Codeforces cout << 1 << endl;
            cout << "The first elevator will arrive first. Wait just a moment!" << endl;
        }
        else if(timeOfL1 > timeOfL2){
            // for Codeforces cout << 2 << endl;
            cout << "The second elevator will arrive first. Wait just a moment!" << endl;
        }
        else{
            // for Codeforces cout << 3 << endl;
            cout << "The any elevator will arrive first. Wait just a moment!" << endl;
        }
    }
    
    return 0;
}