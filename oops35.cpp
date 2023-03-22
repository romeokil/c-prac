#include<iostream>
using namespace std;
template<class T>
class vector{
	public:
		T *arr;
		int size;
		vector(int m){
			size=m;
			arr=new T[size];
		}
		T dotproduct(vector &v){
			T d=0;
			for(int i=0;i<size;i++){
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main(){
	vector <int>v1(3);
	v1.arr[0]=1;
	v1.arr[1]=2;
	v1.arr[2]=3;
	vector <int> v2(3);
	v2.arr[0]=0;
	v2.arr[1]=1;
	v2.arr[2]=1;
	int a=v1.dotproduct(v2);
	cout<<"The dot product of these two int vectors are "<<a<<endl;	
	
	vector <float>v3(3);
	v3.arr[0]=1.1;
	v3.arr[1]=2.3;
	v3.arr[2]=3.45;
	vector <float>v4(3);
	v4.arr[0]=0.2;
	v4.arr[1]=1.5;
	v4.arr[2]=1.7;
	float b=v3.dotproduct(v4);
	cout<<"The dot product of these two float vectors are "<<b<<endl;	
	return 0;
}
