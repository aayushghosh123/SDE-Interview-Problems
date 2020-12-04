#include<bits/stdc++.h>
using namespace std;


void matrix_zeroes(int n,int m){
    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    vector<int>rows;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                rows.push_back(j);
                rows.push_back(i);
            }
        }
    }

    for(int i=0;i<rows.size();i++){
        int x = rows[i];
        i++;
        int y = rows[i];

        for(int i=0;i<n;i++)
        arr[i][x]=0;

        for(int i=0;i<n;i++)
        arr[y][i]=0;
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n=0;
    cin>>n;

   int m=0;
   cin>>m;

   matrix_zeroes(n,m);
}