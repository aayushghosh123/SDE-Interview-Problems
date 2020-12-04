#include<bits/stdc++.h>
using namespace std;

static int c=0;

void find_permutation(string s,int l,int r,int arr[],int n){
    if(l==r){
        c++;
        //cout<<"s = "<<s<<" c = "<<c<<" l = "<<l<<" r = "<<r<<endl;
        if(c==2){
        for(int i=0;i<s.size();i++){
            arr[i] = s[i]-'0';
        }

        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    //cout<<endl;
    //cout<<"WE are exiting";
    exit(0);
    }
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            find_permutation(s,l+1,r,arr,n);
            swap(s[l],s[i]);

        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    string s;

    for(int i=0;i<n;i++){
        char x = arr[i] + '0';
        //cout<<"x = "<<x<<endl;
        s = s + x;
    }

    //cout<<"s = "<<s.size()<<endl;

    find_permutation(s,0,s.size()-1,arr,n);
}