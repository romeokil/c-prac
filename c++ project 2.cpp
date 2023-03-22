#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void login();
void registration();
void forgot();

int main(){
	
	int c;
	cout<<"\t\t\t_______________________________________________________________________\n\n\n";
	cout<<"\t\t\t                        Welcome to login Page                          \n\n\n";
	cout<<"\t\t\t______________________     MENU    __________________________\n\n";
	cout<<"                                                                    \n\n";
	cout<<"\t| Press 1 to LOGIN                       |";
	cout<<"\t| Press 2 to REGISTER                    |";
    cout<<"\t| Press 3 if you forgot your PASSWORD    |";
	cout<<"\t| Press 4 to EXIT                        |"; 
	cout<<"\t| Enter the choice from the above option :";
	cin>>c;
	cout<<"\n";
	
	switch(c){
		
		Case 1:
			login();
			break;
		
		Case 2:
		    registration();
		    break;
		
		Case 3:
			forgot();
			break;
		
		Case 4:
			cout<<"\t\t\t    Thank You    \n\n";
			
		default:
		   system(cls);
		   cout<<"\t\t\t Please Select from the option given above  \n\n";
		   main();	
				
	}	
	
	
}

void 
