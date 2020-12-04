#include<bits/stdc++.h>
using namespace std;

void find_missing_and_repeative(int arr[],int n){
    int max=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    //cout<<"Max = "<<max<<endl;

    int arr2[max+1]={0};

    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }

    for(int i=1;i<max+1;i++){
        if(arr2[i]==0){
            cout<<"Missing = "<<i<<" ";
        }
        else if(arr2[i]>1){
            cout<<"Repeated = "<<i<<" ";
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    find_missing_and_repeative(arr,n);
}