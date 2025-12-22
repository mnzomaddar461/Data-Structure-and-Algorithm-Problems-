#include<bits/stdc++.h>
using namespace std;
int main(){
    int num_of_arr_size;
    cin >> num_of_arr_size;
    int array[num_of_arr_size];

    cout << "Input Your Array Elements: " ;
    for(int i = 0; i < num_of_arr_size; i++){
        cin >> array[i];
    }
    //if array unsorted then used "sort(array, array+num_of_arr_size)"
    int left = 0, right = num_of_arr_size - 1;
    int search_element;
    int flag = 0;
    cout << "Input Your Search Element: ";
    cin >> search_element;
    while(left < right){
        int mid = (left + right) / 2;
        if(array[mid] == search_element){
            flag = 1;
            break;
        }
        else if(array[mid] > search_element){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    if(flag == 1){
        cout << "FOUNT....!";
    }
    else{
        cout << "NOT FOUNT.....!";
    }
    return 0;
}