#include<iostream>
using namespace std;
int main(){
	string s="ajclkjslkjsllkfj";
	int x,c=0,count[26]={0};
	while(s[c]!='\0')
	{
		if(s[c]>='a' && s[c]<='z'){
		
		count[s[c]-'a']++;
	}
	c++;
	}
	int max=count[0];
	char ans;
	for(int i=0;i<s.length();i++)
	{
	       if(max<count[i])
		   {
	       	max=count[i];
	       	ans=i+'a';
		   }
    }
    cout<<"Maximum occurence of a character "<<ans<<" is "<<max;
	return 0;
}
