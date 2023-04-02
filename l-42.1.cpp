//Introduction of classes and object 
//******size of empty class is 1 bytes******
//Introduction of getter and setter function 
#include<iostream>
using namespace std;
class Hero{
	private:
	int health;
	public:
	char level;
	int gethealth(){
		return health;
	}
	char getlevel(){
		return level;
	}
	void sethealth(int h){
		health=h;
	}
	void setlevel(char l){
		level=l;
	}
	void print(){
		cout<<level<<endl;
	}
};

int main(){
	Hero h1;
	
	h1.sethealth(70);
	h1.setlevel('A');
	cout<<"Size of class is "<<sizeof(h1)<<endl;
	cout<<"Size of health is "<<h1.gethealth()<<endl;
	cout<<"Size of level is "<<h1.getlevel()<<endl;
	return 0;
}
