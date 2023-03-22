#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n=end(nums)-begin(nums);
       int  i=0;
       for(int j=0;j<n;j++){
       	if(nums[j]!=0){
       		swap(nums[i],nums[j]);
       		i++;
		   }
	   }
        
    }
int main(){
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(12);
	moveallzeroes(v);
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;
}
