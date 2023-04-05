#include<iostream>
using namespace std;
class Hero{
	public:
	int health;
	char level;
//	Hero(){
//	cout<<"This is default constructor ";
//	}
//	Hero(int health){
//		cout<<"This is one parameter constructor "<<endl;
//		cout<<"this-> "<<this<<endl;
//		this->health=health;
//	}
	Hero(int health,char level){
		cout<<"This is two parameter constructor";
		this->health=health;
		this->level=level;
	}
//	void setlevel(char l){
//		level=l;
//	}
//	void sethealth(int h){
//		health=h;
//	}
//	char getlevel(){
//		return level;
//	}
//	int gethealth(){
//		return health;
//	}
	void printlevel(){
	cout<<"level"<<level<<endl;
	}
	void printhealth(){
	cout<<"Health"<<health<<endl;
	}
};
int main(){
//	Hero h(10);//static decalration
	//dynamic decalration
//	Hero *h=new Hero(10);
//	cout<<"Address this object is pointing "<<&h<<endl;
//    Hero temp(80,'B');//static declaration
//	temp.printlevel();
//	temp.printhealth(); 
	Hero *c=new Hero(100,'H');
	c->printlevel();
	c->printhealth();
	return 0;
}
