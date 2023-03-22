#include<iostream>
using namespace std;
int main(){
	

int quant,choice;
//quantity of food items
int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0;
//quantity of food items sold
int srooms=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;
//total price of items
int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

cout<<"\n\t\tQuantity of items we have";
cout<<"\n Rooms available";
cin>>qrooms;
cout<<"\n Quantity of Pasta";
cin>>qpasta;
cout<<"\n Quantity of Burger";
cin>>qburger;
cout<<"\n Quantity of Noodles";
cin>>qnoodles;
cout<<"\n Quantity of Shake";
cin>>qshake;
cout<<"\n Quantity of Chicken-Roll";
cin>>qchicken;

m:
cout<<"\n\t\tPlease select from the option menu";
cout<<"\n\n1:- Rooms";
cout<<"\n\n2:- Pasta";
cout<<"\n\n3:- Burger";
cout<<"\n\n4:- Noodles";
cout<<"\n\n5:- Shake";
cout<<"\n\n6:- Chicken-Roll";
cout<<"\n\n7:- Information regarding sales and collection";
cout<<"\n\n8:- Exit";

cout<<"\n\nEnter the choice ";
cin>>choice;

switch(choice){
	    
	    case 1:
	    	cout<<"\n\t\t Enter the no of rooms you want";
	    	
			cin>>quant;
			if(qrooms-srooms>=quant)
			{
			  srooms=srooms+quant;
			  total_rooms=total_rooms+1200*quant;	
			cout<<"\n\n\t\t"<<quant<<" Room/Rooms have been alloted to you!";  
			}
			
			else{
				cout<<"\n\tOnly"<<qrooms-srooms<<" Room/Rooms remaining in hotel";
			    }
			    
				break;
		 case 2:
	    	cout<<"\n\t\t Quantity of pasta you want";
	    	
			cin>>quant;
			if(qpasta-spasta>=quant)
			{
			  spasta=spasta+quant;
			  total_pasta=total_pasta+250*quant;
			  cout<<"\n\n\t\t"<<quant<<" Pasta ordered!";	
			}
			
			else{
			
				cout<<"\n\tOnly"<<qpasta-spasta<<" Pasta remaining in hotel";
				}
				break;
			
		case 3:
	    	cout<<"\n\t\t Quantity of burger you want";
	    	
			cin>>quant;
			if(qburger-sburger>=quant)
			{
			  sburger=sburger+quant;
			  total_burger=total_burger+120*quant;
			  cout<<"\n\n\t\t"<<quant<<" Burger ordered!";	
			}
			
			else{
				cout<<"\n\tOnly"<<qburger-sburger<<" Burger remaining in hotel";
				}
				break;
			
		case 4:
	    	cout<<"\n\t\t Quantity of noodles you want";
	    	
			cin>>quant;
			if(qnoodles-snoodles>=quant)
			{
			  snoodles=snoodles+quant;
			  total_noodles=total_noodles+140*quant;	
			cout<<"\n\n\t\t"<<quant<<" Noodles ordered!";
			}
			
			else{
				cout<<"\n\tOnly"<<qnoodles-snoodles<<" Noodles remaining in hotel";
				}
				break;
			
		case 5:
	    	cout<<"\n\t\t Quantity of shake you want";
	    	
			cin>>quant;
			if(qshake-sshake>=quant)
			{
			  sshake=sshake+quant;
			  total_shake=total_shake+120*quant;	
			cout<<"\n\n\t\t"<<quant<<" Shake ordered!";
			}
			
			else{
				cout<<"\n\tOnly"<<qshake-sshake<<" Shake remaining in hotel";
				}
				break;
			
		case 6:
	    	cout<<"\n\t\t Quantity of chicken you want";
	    	
			cin>>quant;
			if(qchicken-schicken>=quant)
			{
			  schicken=schicken+quant;
			  total_chicken=total_chicken+150*quant;	
			cout<<"\n\n\t\t"<<quant<<" Chicken-Roll ordered!";

			}
						else{
				cout<<"\n\tOnly"<<qchicken-schicken<<" Chicken-Roll remaining in hotel";
				}
				break;
		case 7:
		    
			  cout<<"\n\t\t Details of sales and collection";
			  cout<<"\n\n\t Quantity of rooms we have- "<<qrooms;
			  cout<<"\n\n\t Quantity of rooms we have gave for rent- "<<srooms;
			  cout<<"\n\n\t Remaining rooms we have in hotel- "<<qrooms-srooms;
			  cout<<"\n\n\t Collection from room rent- "<<total_rooms;	
			  
			  cout<<"\n\n\t Quantity of pasta we have- "<<qpasta;
			  cout<<"\n\n\t Quantity of pasta we have sold- "<<spasta;
			  cout<<"\n\n\t Remaining Pasta we have in stock- "<<qpasta-spasta;
			  cout<<"\n\n\t Collection from Pasta- "<<total_pasta;
			  
			  cout<<"\n\n\t Quantity of Burger we have- "<<qrooms;
			  cout<<"\n\n\t Quantity of Burger we have sold- "<<srooms;
			  cout<<"\n\n\t Remaining Burger we have in stock- "<<qburger-sburger;
			  cout<<"\n\n\t Collection from Burger- "<<total_burger;
		
	          cout<<"\n\n\t Quantity of Noodles we have- "<<qnoodles;
			  cout<<"\n\n\t Quantity of Noodles we have sold- "<<snoodles;
			  cout<<"\n\n\t Remaining Noodles we have in stock- "<<qnoodles-snoodles;
			  cout<<"\n\n\t Collection from Noodles- "<<total_noodles;
			  
			  cout<<"\n\n\t Quantity of Shake we have- "<<qshake;
			  cout<<"\n\n\t Quantity of Shake we have sold- "<<sshake;
			  cout<<"\n\n\t Remaining Shake we have in stock "<<qshake-sshake;
			  cout<<"\n\n\t Collection from Shake"<<total_shake;
			  
			  cout<<"\n\n\t Quantity of Chicken-Roll we have- "<<qchicken;
			  cout<<"\n\n\t Quantity of Chicken-Roll we have sold- "<<schicken;
			  cout<<"\n\n\t Remaining Chicken-Roll we have in stock- "<<qchicken-schicken;
			  cout<<"\n\n\t Collection from Chicken-Roll-"<<total_chicken;	
			  
			  cout<<"\n\n\n Total collection for the day -"<<total_rooms+total_pasta+total_burger+total_noodles+total_shake+total_chicken;
	           
			   break;
			 
	    case 8:
	    	exit(0);
	    default:
	    	
	    	cout<<"You have chose wrong option\n";
	    	cout<<"Please select the option given above!";
	    	
       }
       goto m;
}
