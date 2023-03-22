#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int nums1[6]={1,2,3};
	int nums2[]={2,5,6};
	int m=sizeof(nums1)/sizeof(nums1[0]);
	int n=sizeof(nums2)/sizeof(nums2[0]);
	cout<<"The size of the first array is "<<m<<endl;
	cout<<"The size of the second arrray is "<<n<<endl;
	int i=0,j=0;
	while(i<3 && j<n)
	{
		if(nums1[i]<nums2[j]){
		   i++;	
		}
		else if(nums1[i]==nums2[j]){
			i++;
		}
		else{
			nums1[i+1]=nums1[i];
			nums1[i]=nums2[j];
			i++;
			j++;
		}
	}
	do{
		nums1[++i]=nums2[j];
		i++;
		j++;	
	}
	while(j<n);
	cout<<"The merged array is "<<endl;
	for(int i=0;i<m;i++){
		cout<<nums1[i]<<" ";
	}
	return 0;
}
