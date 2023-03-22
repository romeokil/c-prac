#include<iostream>
using namespace std;
class Shop{
	int id;
	float price;
	public:
		void setData(int i,float p){
		    id=i;
		    price=p;
		}
		void getData(){
			cout<<"The id of the item is "<<id<<endl;
			cout<<"The price of the item is"<<price<<endl;
		}	
};
int main(){
	Shop *ptr=new Shop[3];
	Shop *temp=ptr;
	int p;
	float q;
	for(int i=0;i<3;i++){
		cout<<"enter the id and price of the item "<<i+1<<endl;
		cin>>p>>q;
		ptr->setData(p,q);
		ptr++;
	}
	for(int i=0;i<3;i++){
	   temp->getData();
	   temp++;
	}
	
	
	return 0;
}

