#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr){
    int n = arr.size();
    int largest = -1, secondLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int secondLargestRec(vector<int> arr,int n, int i, int largest,int secondLargest){

    if(n == i ) return secondLargest;

    if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest = arr[i];
        }
    
    return secondLargestRec(arr,n,i+1,largest,secondLargest);
}


int secondSmallest(vector<int> arr){
    int n = arr.size();
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]<secondSmallest && arr[i]>smallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int secondSmallestRec(vector<int> arr ,int n, int i, int smallest,int secondSmallest){
    if(i==n) return secondSmallest;
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]<secondSmallest && arr[i]>smallest){
            secondSmallest = arr[i];
        }
    
    return secondSmallestRec(arr,n,i+1,smallest,secondSmallest);
}

int main(){
    vector<int> arr = {1,2,55,76,41,33};
    int secondLargestElement = secondLargest(arr);
    cout<<"Second Largest Element is "<<secondLargestElement<<endl;

    secondLargestElement = secondLargestRec(arr,arr.size(),0,-1,-1);
    cout<<"Second Largest Element is "<<secondLargestElement<<endl;

    int secondSmallestElement = secondSmallest(arr);
    cout<<"Second Largest Element is "<<secondSmallestElement<<endl;

    secondSmallestElement = secondSmallestRec(arr,arr.size(),0,INT_MAX,INT_MAX);
    cout<<"Second Largest Element is "<<secondSmallestElement<<endl;

}