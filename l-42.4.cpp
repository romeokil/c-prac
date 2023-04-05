//Copy constructor
//2 methods we have
//1->we don't have to create copy constructor
//2->we have to make copy constructor
#include<iostream>
using namespace std;
class Hero{
	public:
		char level;
		int health;
		Hero(){//Default constructor
			cout<<"This is a default constructor";
		}
		Hero(int health,char level){//Parameterized constructor
			this->health=health;
			this->level=level;
		}
		Hero(Hero &temp){//Copy constructor
			this->health=temp.health;
			this->level=temp.level;
		}
		void printlevel(){
			cout<<"level"<<level<<endl;
		}
		void printhealth(){
			cout<<"Health"<<health<<endl;
		}
};

int main(){
	Hero h(19,'H');
	h.printhealth();
	h.printlevel();
	
	//1st method(easy)
//	Hero c(h);//Here we are copy the object,but we are not making copy constructor in the class
//	c.printhealth();//c.health=h.health;
//	c.printlevel();//c.level=h.level;
   
   //2nd method
   Hero c(h);
   c.printhealth();
   c.printlevel();	
	
	return 0;
}
