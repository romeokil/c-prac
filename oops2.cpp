#include<iostream>
using namespace std;
class binary{
	string s;
	public:
		void read();
		void check_bin();
		void ones_comp();
		void display();
};
void binary::read(){
	cout<<"enter the binary no";
	cin>>s;
}
void binary::check_bin(){
    for(int i=0;i<s.length();i++){
    	if(s[i]!='0' && s[i]!='1'){
    		cout<<"\nIncorrect binary format";
        	exit(0);	
		}
	}
}
void binary::ones_comp(){
	cout<<"\nOnes compliment for the given no is"<<endl;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			s[i]='1';
		}
		else{
			s[i]='0';
		}
	}
}
void binary::display(){
//	for(int i=0;i<s.length();i++){
//		cout<<s[i];
//	}
//	cout<<endl;
   cout<<s;
}		
int main(){
	binary b;
	b.read();
	b.check_bin();
	b.display();
	b.ones_comp();
	b.display();
	return 0;
}
