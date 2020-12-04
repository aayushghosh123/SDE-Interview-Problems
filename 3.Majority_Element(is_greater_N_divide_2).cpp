#include<bits/stdc++.h>
using namespace std;

void find_majority(unordered_map<int,int>m1,int n){
    unordered_map<int,int>::iterator it;

    for(it=m1.begin();it!=m1.end();it++){
        if(it->second>n/2){
            cout<<it->first<<" ";
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    unordered_map<int,int>m1;

    for(int i=0;i<n;i++)
    m1[arr[i]]++;

    find_majority(m1,n);
}