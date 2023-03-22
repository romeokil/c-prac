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

void login(){
	
	int count;
	string userid,password,id,pass;
	system("cls");
	cout<<"\t\t\t Please enter the username and password\n";
	cout<<" USERNAME :";
	cin>>username;
	cout<<" PASSWORD";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass){
		
		 if(id=userid && pass=password)
		 {
		 	count=1;
		 	system("cls");
		 }
	  }
	  input.close();
	  
	  if(count==1)
	  {
	  	cout<<userid<<"\n Your login is successful\n Thanks for logging in\n";
	  	main();
	  }
	  else {
	  	cout<<"\n LOGIN ERROR \n Please check your username and password\n";
	  	main();
	  	
	  }
	  
	  }
	void registration()
	{
		string ruserid,rpassword,rid,rpass;
		system("cls");
		cout<<"\t\t\t Enter the username\n";
		cin>>rusername;
		cout<<"\t\t\t Enter your password\n";
		cin>>rpassword;
		
		ofstream f1("records.txt",ios::app);
		f1<<ruserid<<' '<<rpassword<<endl;
		system("cls");
		cout<<"\n\t\t\t Registration is successful! \n ";
		main();
		
	}
    void forgot()
    {
    	int option;
    	system("cls");
    	cout<<"\t\t\t You forgot the password? No worries\n";
    	cout<<"Press 1 to search your id by username"<<endl;
    	cout<<"Press 2 to go back to the main menu"<<endl;
    	cout<<"\t\t\t Enter your choice :";
    	cin>>option;
    	switch(option){
    	     
			 Case 1:
			 {
			 	int count=0;
			 	string suserid,sid,spass;
			 	cout<<"\n\t\tEnter the username you remembered :\n";
			 	cin>>suserid;
			 	
			 	ifstream f2("records.txt");
			 	while(f2>>id>>pass)
			 	{
			 		if(sid==userid){
			 			count=1;
					 }
					 
				 }
				 f2.close();
				 if(count==1)
				 {
				 	cout<<"\n\n Your account is found\n";
				 	cout<<"\n\n Your Password is"<<spass;
				 	main();
				 }
				 else
				 {
				 	cout<<"\n\n Sorry! your account is not found\n";
				 	main();
				 }
				 break;
				
				 }	
				 
			    Case 2:
			    	{
			    		main();
					}
					default:
						cout<<"\t\t\t Wrong choice! Please enter the right choice\n";
						forgot();
    		
		}
	}
