#include<bits/stdc++.h>
using namespace std;

//T.C ~ O(n)
//S.C ~ O(1)
int maxElement(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

//T.C ~ O(n)
//S.C ~ O(n)
int maxElementRec(int arr[],int n,int i,int maxed){
    if(i==n) return maxed;
    maxed = max(maxed,arr[i]);
    return maxElementRec(arr,n,i+1,maxed);
    
}


int main(){
    int arr[] = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = maxElement(arr,n);
    cout<<"Max Element in array is "<<max<<endl;
    int maxed = maxElementRec(arr,n,0,INT_MIN);
    cout<<"Max Element in array is "<<maxed<<endl;

   

}