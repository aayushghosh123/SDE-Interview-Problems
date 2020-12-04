#include<bits/stdc++.h>
using namespace std;

void find_duplicate(int arr[],int n){
    unordered_map<int,int>m1;

    for(int i=0;i<=n;i++){
        m1[arr[i]]++;
    }

    unordered_map<int,int>::iterator it;

    for(it=m1.begin();it!=m1.end();it++){
        if(it->second>1){
            cout<<it->first<<" ";
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n+1]={0};

    for(int i=0;i<=n;i++)
    cin>>arr[i];

    find_duplicate(arr,n);
}