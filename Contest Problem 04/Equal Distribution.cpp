#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int students_number, number_of_chocolate;
    cin >> students_number >> number_of_chocolate;

    if(students_number == 0){
        return 0; 
    }

    long long int chocolates_received = number_of_chocolate / students_number;
    long long int remaining_chocolates = number_of_chocolate % students_number;

    cout << chocolates_received << " " << remaining_chocolates << endl;
    return 0;
}
