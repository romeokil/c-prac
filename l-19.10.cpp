#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector <int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.push_back(9);
// 	for(int i=0;i<v.size();i++){
// 	    cout<<v[i];
// 	}
cout<<"Before sorting"<<endl;
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
cout<<"After sorting"<<endl;
sort(v.begin(),v.end());
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
vector<int>::iterator lower,upper;
lower=lower_bound(v.begin(),v.end(),9);
upper=lower_bound(v.begin(),v.end(),9);
cout<<"lower_bound for 2 at position "<<(lower-v.begin())<<endl;
cout<<"upper_bound for 2 at position "<<(upper-v.begin())<<endl;

//Binary Search
cout<<"Searching 2-->"<<binary_search(v.begin(),v.end(),2)<<endl;
//min and max
int a=10,b=5;
cout<<"Min of the above is-->"<<min(a,b)<<endl;
cout<<"Max of the above is-->"<<max(a,b)<<endl;
swap(a,b);
cout<<"Swapping of the no is-->"<<a<<"and "<<b<<endl;
//Reversing string
string s="abcd";
reverse(s.begin(),s.end());
cout<<"Reverse is-->"<<s<<endl;
//Rotating vector
rotate(v.begin(),v.begin()+3,v.end());
for(auto i:v){
    cout<<i;
}
	return 0;
}
