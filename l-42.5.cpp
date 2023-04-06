//Deep and Shallow Copy
//In Deep copy->original array me change or wo dusra object
// ko point kr rha hota hai eslie usme bhi change dikhta hai.
//In Shallow copy->hmlog copy constructor ke help se dusra array hi 
//create kr lete hai jiske wajah se wo change dusre waale me change hi nhi dikhta hai.
#include<iostream>
#include<string.h>
using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
		char *name;
	Hero(){//Default constructor
	    name=new char[100];
		cout<<"This is default constructor"<<endl;
	}
	Hero(int health){
		cout<<"This is single parameterized constructor";
		health=this->health;
	}
	Hero(int health,char level){
		cout<<"This is two parameterized constructor";
		this->health=health;
		this->level=level;
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
	void setlevel(int level){
		this->level=level;
	}
	void setname(char name[]){
	   this->name=name;
	}
	void print(){
		cout<<"Name "<<this->name<<endl;
		cout<<"level "<<this->level<<endl;
		cout<<"Health "<<this->health<<endl;
	}
};
int main(){
	Hero h;
	h.sethealth(70);
	h.setlevel('A');
	char name[]="Rahul";
	h.setname(name);
	h.print();
	Hero h1(h);
	h1.print();
	h.name[0]='G';
	h.print();
	h1.print();
	
	
	return 0;
}
