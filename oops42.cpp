#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int>Marksmap;
	Marksmap["Rahul"]=98;
	Marksmap["Abhishek"]=40;
	Marksmap["Pratik"]=90;
	
//	Marksmap.insert({{"Alok",67},{"Shashank",78}});
	map<string,int>::iterator itr;
	for(itr=Marksmap.begin();itr!=Marksmap.end();itr++){
		cout<<(*itr).first<<" "<<(*itr).second<<endl;
	}
	cout<<"The size of the Marksmap is "<<Marksmap.size()<<endl;
	cout<<"The max size of the Marksmap is "<<Marksmap.max_size()<<endl;
	cout<<"The empty return value is "<<Marksmap.empty()<<endl;
	return 0;
}
