//Direct assignment operator
//we don't have to copy the properties individually we can directly copy the properties
//of one object to another object.
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
		cout<<"This is default constructor";
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
};
int main(){
	Hero h1;
	h1.sethealth(90);
	h1.setlevel('A');
    char name[]="Rahul";
    h1.setname(name);
	Hero h2(h1);
	h1.name[0]='G';
	h1.print();
	h2.print();
	//Direct copy
    h1=h2;//Direct assignement operator
	h1.print();
	h2.print();
	return 0;
}
