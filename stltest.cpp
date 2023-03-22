#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    double long x;
    cin>>n;
    vector<double long>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(double long i:v){
        cout<<i<<" ";
    } 
    return 0;
}

