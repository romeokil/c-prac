#include<iostream>//Implementation of Circular Queue.(esme ye hota hai ki arr khtm hone ke baaad
using namespace std;//ye wapas suru se start ho jaaata hai.chahe enqueue krna ho ya phir dequeue.
class circularQueue{
	public:
	int size;
	int *arr;
	int front;
	int rear;
	circularQueue(int size){
		this->size=size;
//		size=100001;
		arr=new int[size];
		front=-1;
		rear=-1;
	}
	void push(int element){    //Push is also called enqueue.
		if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
			cout<<"Circular Queue is overflow can't insert element"<<endl;
		}  
		else if(front==-1){   //no element is present and pushing at first index.
			front=rear=0;
			arr[rear]=element;
		}
		else if(rear==size-1 && front!=0){ //when your rear will reach last index
			rear=0;
			arr[rear]=element;
		} 
		else{                          //normal case
			rear++;
			arr[rear]=element;
		}
	}
	//Basically hmlog jo bhi operation enqueue/push ke liye hai whi sb esme bhi kr rhe hai.
	void pop(){				    //Pop is called dequeue.
		if(front==-1){          //Jb queue ekdm khaali rhega.
			cout<<"Circular is underflow can't delete element"<<endl;
		}
		else if(front==rear){   //Jb queue me single element.
			front=rear=-1;
		}
		else if(front==size-1){   //Jb pop krte krte wo last index me pahuch gy hoga.
			front=0;
		}
		else{                   //normal case.
			front++;
		}
	}
	void display(){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
};
int main()
{	
	circularQueue c(5);
	c.push(1);
	c.push(2);
	c.push(3);
	c.push(4);
	c.push(5);	
	c.display();
	c.push(6);
	c.pop();
	c.push(7);
	return 0;
}
