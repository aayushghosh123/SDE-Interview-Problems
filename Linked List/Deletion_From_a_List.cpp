#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
};

struct node *start = NULL;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    node *temp = start;

    for(int i=1;i<n;i++){
        cin>>data;
        node *newdata = new node();
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void delete_node(int data){
    node *temp = NULL;
    node *temp2 = start;

    while(temp2 != NULL){
        if(temp2->data == data){
            cout<<"Element Found"<<endl;
            break;
        }
        else{
            temp = temp2;
            temp2 = temp2->next;
        }
    }

    if(temp2==NULL){
        cout<<"Element not Found"<<endl;
        exit(0);
    }
    else if(temp2->data == start->data){
        start = start->next;
        temp2 = NULL;
    }
    else if(temp2->next == NULL){
        temp->next = NULL;
    }
    else{
        temp2 = temp2->next;
        temp->next = temp2;
    }

    temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int data=0;
    cin>>data;

    delete_node(data);
}