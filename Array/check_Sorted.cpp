#include<bits/stdc++.h>
using namespace std;


bool isSorted_BF(vector<int> arr){
    int n =arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }

    return true;
}

bool isSorted(vector<int> arr){
    int n =arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }

    return true;
}
int main(){
    vector<int> arr={1,2,3,4,4};
    if(isSorted_BF(arr)){
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is not Sorted"<<endl;
    }
    if(isSorted(arr)){
        cout<<"Array is Sorted"<<endl;
    }else{
        cout<<"Array is not Sorted"<<endl;
    }
    
}