#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string> m;
	m[1]="Rahul";
	m[2]="Loves";
	m[6]="Akul";
	//another way of inserting
// 	m.insert{{5,"maria"}};
    cout<<"before erase"<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<"element 6 is there-->"<<m.count(6)<<endl;
// 	m.erase(2);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }	return 0;
}
