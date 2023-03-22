#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);.
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<"Before rotating"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the number from where you want to rotate";
    cin>>key;
    int c=0,i=0;
    while(v[i]!=key){
        c++;
        i++;
    }
    rotate(v.begin(),v.begin()+c,v.end());
    cout<<"After rotating"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
