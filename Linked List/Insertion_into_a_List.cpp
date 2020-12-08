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

void print_LL(node *start){
    node *temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insert_node(int x,int data){
    node *temp = start;
    node *temp2 = start->next;

    for(int i=1;i<x;i++){
        temp = temp->next;
        temp2 = temp2->next;
    }

    node *newdata = new node();
    newdata->data = data;
    newdata->next = NULL;
    temp->next = newdata;
    newdata->next = temp2;

    print_LL(start);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int x=0,data=0;
    cin>>x;
    cin>>data;

    insert_node(x,data);
}