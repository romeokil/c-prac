#include<iostream>
using namespace std;
int n,arr[50];
int insert(int n,int arr[]){
cout<<"\n\nenter the elements you want in array"<<endl;
cin>>n;
cout<<"\n\nenter the elments in the array"<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
	 }			
 cout<<"\n\n";
 cout<<n<<" "<<"elements of array successfully created"<<endl;
 return 0;
}
void display(int *n,int *arr[]){
	cout<<"\n\nElements in the array be like\n\n"<<endl;
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
    cout<<endl;
}		
int main(){
	int x;
	m:
	cout<<"\n\n\n\t\t\t\t-----Welcome to Menu Based Program-----"<<endl;
	cout<<"\n\n\t\t\t\tChoose from the below option"<<endl;
	cout<<"\n\n\t\t\t\t1-For creating an array of n integers elements"<<endl;
	cout<<"\n\n\t\t\t\t2-Display of array elements with suitable heading"<<endl;
	cout<<"\n\n\t\t\t\t3-For exit"<<endl;
	cin>>x;
		switch(x){
			case 1:
				insert(n,arr);
			    break;
			case 2:
				display(n,arr);
				break;
			case 3:
				exit(0);
			default:
				cout<<"\nSorry you have entered wrong choice"<<endl;
				cout<<"\nYou have to choose from the following option"<<endl;
		}
		goto m;
}
