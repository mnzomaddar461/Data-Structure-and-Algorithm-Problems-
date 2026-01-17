#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
int main(){
    list<string> stors;
    string address;
    
    while (cin >> address && address != "end")
    {
        stors.push_back(address);
    }

    int qureies;
    cin >> qureies;
    cin.ignore(); 

    auto current = stors.begin();
    string command;

    while (qureies--)
    {
        getline(cin, command);
        stringstream strBreak(command);
        string commandType, commandTergat;
        strBreak >> commandType;
            if(commandType == "visit"){
                strBreak >> commandTergat;
                bool found = false;
                for(auto it = stors.begin() ; it != stors.end() ; it++){
                    if(*it == commandTergat){
                        current = it;
                        cout << *current << endl;
                        found = true;
                        break;
                    }
                }
                if(!found){
                    cout << "Not Available" << endl;
                }
            }

            else if(commandType == "next"){
                auto temp = current;
                temp++;
                if(temp != stors.end()){
                    current = temp;
                    cout << *current << endl;
                }
                else{
                    cout << "Not Available" << endl;
                }
            }

            else if(commandType == "prev"){
                if(current != stors.begin()){
                    current--;
                    cout << *current << endl;
                }
                else{
                    cout << "Not Available" << endl;
                }
            }
    }

    return 0;
}