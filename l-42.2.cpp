//static and dynamic memory allocation uses in oops
#include<iostream>
using namespace std;

class Hero{
	int health;
	char level;
	public:
	void sethealth(int h){
		health=h;
	}	
	void setlevel(char l){
		level=l;
	}
	char getlevel(){
		return level;
	}
    int gethealth(){
		return health;
	}
};

int main(){
	//static memory allocation
	Hero h;
	
	//dynamic memory allocation
	Hero *b=new Hero;
	
	h.sethealth(80);
	h.setlevel('A');
	cout<<"Health for static memory allocation  "<<h.gethealth()<<endl;
	cout<<"Level for static memory allocation  "<<h.getlevel()<<endl;
	
	(*b).sethealth(90);
	(*b).setlevel('C');
	cout<<"Health for dynamic memory allocation  "<<(*b).gethealth()<<endl;
	cout<<"Level for dynamic memory allocation  "<<(*b).getlevel()<<endl;
	
	cout<<"Health for dynamic memory allocation  "<<b->gethealth()<<endl;
	cout<<"Health for dynamic memory allocation   "<<b->getlevel()<<endl;
	
	
	return 0;
}
