#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char arr[n+1];
	cin.getline(arr,n);
    cin.ignore();
    int maxlen=0;
    int i=0,curlen=0;
    
    while(1){
    	
    	if(arr[i]==' ' || arr[i]=='\0')
		{
    		if(curlen>maxlen){
    			maxlen=curlen;
			}
			curlen=0;
		}
		else
		curlen++;
		if(arr[i]='\0'){
			break;
		}
		i++;
	}
	cout<<"maximum length in the string is "<<maxlen;
	return 0;
}
