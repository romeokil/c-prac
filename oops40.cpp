#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
	cout<<"Function enabled!!!"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
vector<int> v1;//no length vector;
vector<char> v2(4);//vector v2 having 4 length ;
int size;
cout<<"enter the size of the vector";
cin>>size;
int ele;
for(int i=0;i<size;i++){
	cout<<"Enter the element you want to insert";
	cin>>ele;
	v1.push_back(ele);
}
display(v1);
v1.pop_back();
cout<<"vector after popping the element";
vector<int>::iterator iter=v1.begin();
v1.insert(iter+1,500,5667);
display(v1);
v2.push_back('d');
//display(v2);
vector<char> v3(v2);//vector v3 composed from vector v2;
//display(v3);
vector<double> v4(6,3);//6 times 3s in the vector;
display(v4);
return 0;
}
