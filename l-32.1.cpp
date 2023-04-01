//Reaching destination having source with recursion]
#include<iostream>
using namespace std;
void reachdest(int src,int des){
	cout<<"Source ="<<src<<" "<<"Destination ="<<des<<endl;
	
	if(src==des){
		cout<<"Pahuch gy lounda";
		return ;
	}
	src++;
	reachdest(src,des);
}
using namespace std;
int main(){
	int src=1;
	int des=10;
	reachdest(src,des);
	return 0;
}
