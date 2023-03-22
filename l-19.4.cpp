#include<iostream>
#include<list>
using namespace std;
int maim(){
    list <int> l;
    list <int> n(5,100);
    for(int i:n){
        cout<<i;
    }
    cout<<endl;
    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
