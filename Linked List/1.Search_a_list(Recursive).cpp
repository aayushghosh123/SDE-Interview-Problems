#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node *start = NULL;

void getdata(int n){
    int data=0;
    cin>>data;
    start = new node();
    start->data = data;
    start->next = NULL;

    node *temp = start;

    for(int i=1;i<n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

node *search_element(node *start,int x){
    if(start==NULL)
    return NULL;

    if(start->data == x)
    return start;
    else
    return(search_element(start->next,x));
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int x=0;
    cin>>x;

    node *f = search_element(start,x);

    if(f)
    cout<<"Element Found";
    else
    cout<<"Not Found";
}