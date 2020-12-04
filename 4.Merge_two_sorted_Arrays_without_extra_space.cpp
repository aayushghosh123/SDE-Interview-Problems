#include<bits/stdc++.h>
using namespace std;

void merge_sort(int arr[],int n,int arr2[],int m){
    if(n<m){
        for(int i=0;i<n;i++){
            if(arr2[0+i]<arr[n-1-i]){
                swap(arr2[0+i],arr[n-1-i]);
            }
        }
    }
    else if(n>m){
        for(int i=0;i<m;i++){
            if(arr2[0+i]<arr[n-1-i]){
                swap(arr2[0+i],arr[n-1-i]);
            }
        }
    }

    sort(arr,arr+n);
    sort(arr2,arr2+m);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    for(int i=0;i<m;i++)
    cout<<arr2[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int m=0;
    cin>>m;

    int arr2[m]={0};

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    merge_sort(arr,n,arr2,m);
}