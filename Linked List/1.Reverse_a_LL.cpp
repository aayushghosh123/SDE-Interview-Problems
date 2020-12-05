#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next = NULL;
    }
};

struct node *start;

void getdata(int n){
    int data;

    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    struct node *temp = start;

    for(int i=1;i<n;i++){
        struct node *newdata = new node();
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

void reverse_list(node *start){
    node *before = NULL;
    node *after = NULL;
    node *curr = start;

    while(curr != NULL){
        after = curr->next;
        curr->next = before;
        before = curr;
        curr= after;
    }
    cout<<before->data<<endl;
    start = before;

    print_LL(start);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    reverse_list(start);
}
