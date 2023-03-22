#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("akul");
    q.push("uyr");
    cout<<"Size of an queue before popping"<<q.size()<<endl;
    cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	cout<<"Size of an queue after popping"<<q.size()<<endl;
	
	
	return 0;
}
