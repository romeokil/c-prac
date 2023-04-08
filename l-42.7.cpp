//Destructor->
//*Not any input
//*Same as class Name
//*no parameters
//*having a ~sign shows destructor
//*************
//Static allocated->destructor automatically called
//Dynamic allocated->destructor should manually called
//*************
#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
	int health;
	public:
		char level;
		char *name;
	Hero(){
		name=new char[100];
		cout<<"This is default constructor"<<endl;
	}
	Hero(int health,char level){
		this->health=health;
		this->level=level;
		cout<<"This is parameterized constructor";
	}
	Hero(Hero &temp){
		 char *ch=new char[strlen(temp.name)+1];
		 strcpy(ch,temp.name);
		 this->name=ch;
	     this->health=temp.health;
	     this->level=temp.level;
	}
	void sethealth(int health){
		this->health=health;
	}
	void setlevel(char level){
		this->level=level;
	}
	void setname(char name[]){
		strcpy(this->name,name);
	}
	void print(){
		cout<<"Health: "<<health<<endl;
		cout<<"Level: "<<level<<endl;
		cout<<"Name: "<<name<<endl;
	}
	~Hero(){
		cout<<"Destructor called"<<endl;
	}
};
int main(){
	Hero h1;//Static allocation
	
	Hero *h=new Hero();//Dyanmic allocation
	delete h;//manually calling destructor
	
	return 0;
}
