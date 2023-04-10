//Inheritance->In this we are inheriting the properities and behaviour from the other class
//Base Class->Class from which we are inherting also known as parent class
//Derived Class->Class which inherits the properties also known as sub class and child class

//************************(vvvimp table pura inheritance ka base esi pe hai)
//members        public    protected   private  
//1.private      private   private     private
//2.protected    protected protected   private
//3.public       public    protected   private
//************************
#include<iostream>
#include<string>
using namespace std;
class Human{
	public:
		int age;
	protected:
		int weight;
	public:
		int height;
		int getage(){
			return age;
		}
		void setweight(int w){
			this->weight=w;
		}
};
class Male:public Human{
	public:
		string color;  
		void sleep(){
			cout<<"So ja re pagla nhi re majak kiye padhai kr"<<endl;
		}
			int getweight(){
			cout<<"Yhi hmlogo ka weight likha hua hai";
		    	return weight;
		}
	
};
int main(){
	Male m;//We have created the object of class male
	//m.setweight(59);//but here we are accessing the weight which is present in the class Human
	//because we are inherting
	m.getweight();
	//cout<<"Weight of the person is "<<m.weight<<endl;
//	m.sleep();
//	m.height=8;
//    cout<<"Height of the person is "<<m.height<<endl;
	
	return 0;
}
