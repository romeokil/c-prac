#include<iostream>
#include<math.h>
using namespace std;
class SimpleCalculator{
	float a,b,res;
	public:
		float setdata(float a1,float b1){
		    a=a1;
			b=b1;	
		}
		float add(){
			 res=(a+b);
			 return res;
		}
		float mul(){
			res=(a*b);
			return res;
		}
		float sub(){
			res=(a-b);
			return res;
		}
		float div(){
			res=(a/b);
			return res;
		}
		void getdata(){
	     cout<<"The result of the followed operation is "<<res;
	 }
};
class ScientificCalculator{
	float ax,res1;
	public:
		float setdata1(float a1){
			ax=a1;
		}
		float sine(){
			res1=sin(ax);
			return res1;
		}
		float cose(){
			res1=cos(ax);
			return res1;
		}
		float tane(){
			res1=tan(ax);
			return res1;
		}
//		float cote(){
//			res1=cot(ax);
//			return res1;
//		}
		void getdata1(){
			cout<<"The result of the followed operations are"<<res1;
		}
};
class Hybrid:public SimpleCalculator,public ScientificCalculator{
	
};
int main(){
	Hybrid h;
	int c;float x,y;int ch;
	cout<<"--Choose from the given option--"<<endl;
	cout<<"1.For Simple Calculation"<<endl;
	cout<<"2.For Scientific Calculation"<<endl;
	cin>>c;
	switch(c){
	   case 1:
	  cout<<"enter 2 nos "<<endl;
      cin>>x>>y;
	  h.setdata(x,y);
	  cout<<"--choose from below option--"<<endl;
	  cout<<"1.For addition"<<endl;
	  cout<<"2.For Substraction"<<endl;
	  cout<<"3.For Multiplication"<<endl;
	  cout<<"4.For Division"<<endl;
	  cin>>ch;
	    switch(ch)
		{
		  case 1:h.add();
		        break;
	 	  case 2:h.sub();
	            break;
	      case 3:h.mul();
	            break;
	      case 4:h.div();
	            break;
	    }
		h.getdata();
		break;
	 case 2:
			cout<<"enter the no for which you want Scientific Calculation"<<endl;
			cin>>x;
			h.setdata1(x);
			cout<<"--choose from the given option"<<endl;
			cout<<"1.For sine operation"<<endl;
			cout<<"2.For cosine operation"<<endl;
			cout<<"3.For tangent operation"<<endl;
			cin>>ch;
			switch(ch){
				case 1:h.sine();
				       break;
			    case 2:h.cose();
				       break;
			    case 3:h.tane();
				       break;	       
			}
			h.getdata1();
			break;
	}
	return 0;
	
}
