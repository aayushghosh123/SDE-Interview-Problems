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

struct node *start;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    node *temp = start;

    for(int i=1;i<n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = start;
        temp = temp->next;
    }
}

void delete_node(int key){
    node *temp = start;
    cout<<"Here done"<<endl;
    while(temp != NULL){
        if(temp->data==key)
        break;
        temp = temp->next;
    }

    cout<<temp->data<<endl;

    if(temp->next == NULL){
        temp = NULL;
    }
    else{
        while(temp->next != NULL){
            temp->data = temp->next->data;
            temp = temp->next;
        }
        temp = NULL;
    }
    cout<<"Done"<<endl;
    node *temp2 = start;
    while(temp2 != NULL){
        cout<<temp2->data<<" ";
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int key = 0;
    cin>>key;

    delete_node(key);
}