#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
    int f=0,s=0,z=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z++;
        }
        else if(arr[i]==1){
            f++;
        }
        else if(arr[i]==2){
            s++;
        }
    }

    for(int i=0;i<z;i++){
        arr[i]=0;
    }

    for(int i=z;i<z+f;i++){
        arr[i]=1;
    }

    for(int i=z+f;i<z+f+s;i++){
        arr[i]=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort012(arr,n);
}