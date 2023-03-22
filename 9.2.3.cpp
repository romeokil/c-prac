 #include<iostream>
 using namespace std;
 
 int main(){
 	int n,m;
 	cout<<"enter the rows and column of the matrix\n";
 	cin>>n>>m;
 	int a[n][m];
 	for(int i=0;i<n;i++){
 		for(int j=0;j<m;j++){
 			cin>>a[i][j];
		 }
	 }
	 int target;
	 cout<<"enter the target";
	 cin>>target;
	 int flag=0;
	 int r=0,c=m-1;
	 while(r<n && c>=0){
	 	if( a[r][c] == target )
	 		flag=1;
		 else if(a[r][c]<target)
		 	r++;
		 	else
		 	c--;	
	 }
	 if(flag==0)
	 	cout<<"element not found";
	 else
	    cout<<"element found";
	 
 	
 	
 	
 	return 0;
 }
