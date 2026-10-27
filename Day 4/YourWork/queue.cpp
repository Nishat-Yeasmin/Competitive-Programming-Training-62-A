#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    queue<string>line;
    
    cout<<"Processing queue operations: ";
    
    while(t--){
        int type;
        cin>>type;

        if(type==1){
            string name;
            cin>>name;
            line.push(name);
            cout<<name<<" joined the line."<<endl;
        }
        else if(type==2){
            if(line.empty())
                cout<<"line is already empty!"<<endl;
            else{
                cout<<line.front()<<" has been served and left the line."<<endl;
                line.pop();
            }
        }

        else if(type==3){
            if(line.empty())
                cout<<"Nobody is the line."<<endl;
            else
                cout<<"Next in line is: "<<line.front()<<endl;
        }
    }

    cout<<endl<<"Remaining people in line: "<<line.size()<<endl; 
}
