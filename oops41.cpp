#include<iostream>
#include<list>
using namespace std;
//template<class T>
void display(list<int> &lst){
	list<int>::iterator it;
	for(it=lst.begin();it!=lst.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main(){
	list<int> list1;//list1 is a list having no elements.
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	list1.push_back(6);
	list1.push_back(9);
//	list1.pop_back();
//	display(list1);
//	list1.pop_front();
//	display(list1);
//	list1.remove(5);
//	display(list1);
    list1.sort();
    list1.reverse();
	display(list1);
	list<int> list2(3);
	list<int>::iterator itr;
    itr=list2.begin();
    *itr=45;
    itr++;
    *itr=78;
    itr++;
    *itr=90;
    display(list2);
    list1.merge(list2);
    cout<<"After merging"<<endl;
    display(list1);
	
	return 0;
}
