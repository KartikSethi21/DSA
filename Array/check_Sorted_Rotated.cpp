#include<bits/stdc++.h>
using namespace std;


bool isSorted(vector<int> arr){
    int n =arr.size();
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1] > arr[0]) count++;

    return count==1;
}
int main(){
    vector<int> arr={4,5,1,2,3};
    if(isSorted(arr)){
        cout<<"Array is Sorted and rotated"<<endl;
    }else{
        cout<<"Array is not Sorted and rotated"<<endl;
    }
    
}