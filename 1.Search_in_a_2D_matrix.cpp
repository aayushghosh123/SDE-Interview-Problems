//Search a Element in 2D

#include<bits/stdc++.h>
using namespace std;

void search_in_array(int n,int key){
    int arr[n][n]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    if(n==0){
        cout<<"No Matrix";
    }
    else{
        int largest = arr[n-1][n-1];
        int smallest = arr[0][0];

        if(key<smallest || key>largest){
            cout<<"No";
            exit(0);
        }

        for(int i=0;i<n-1;i++){
        if(arr[0][n-1-i]<=key){
            int y = n-1-i;
            for(int i=0;i<n-1;i++){
                if(arr[i][y]==key){
                    cout<<"Element Found";
                    exit(0);
                }
            }
        }
        }

        cout<<"Element Not Found in 2D Array";
    }
}

int main(){
    int n=0;
    cin>>n;

    int key=0;
    cin>>key;

    search_in_array(n,key);
}