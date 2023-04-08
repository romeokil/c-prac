//Static->Without object hmlog data members and functions ko access kr skte hai
//Static data members->declare in class and initialize it before the main class
//Static member function->*esme sirf static data members ko hi access kr skte hai.
//*this keyword ka use ni kr skte hai kyuki object se lena dena hi ni hai and this pointer
//toh current object ko point kr rha hota hai.
#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
	int health;
	public:
		char level;
		char *name;
		static int timetocomplete;
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
	static int Random(){
		return timetocomplete;
	}
};
int Hero::timetocomplete=5;
int main(){
	cout<<Hero::timetocomplete<<endl;
	cout<<Hero::Random()<<endl;
	return 0;
}
