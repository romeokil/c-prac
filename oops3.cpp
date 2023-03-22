#include<iostream>
using namespace std;
class Shop{
	int ItemId[100];
	int ItemPrice[100];
	int counter;
	public:
		void initcounter(){
			counter=0;
		}
		void setPrice();
		void DisplayInfo();
};
void Shop::setPrice(){
	cout<<"enter the id of the item";
	cin>>ItemId[counter];
	cout<<"enter the price of the item";
	cin>>ItemPrice[counter];
	counter++;
}
void Shop::DisplayInfo(){
    for(int i=0;i<counter;i++){
    	cout<<"Price of the item with ItemId "<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;
	}
}
int main(){
	Shop s;
	int n;
    cout<<"enter the no of item you have";
	cin>>n;
	for(int i=0;i<n;i++){
		s.setPrice();
	}	
	s.DisplayInfo();
	return 0;
}
