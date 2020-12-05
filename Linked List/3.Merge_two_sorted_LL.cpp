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
struct node *start2;
struct node *start3 = NULL;

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
        temp->next = newdata;
        temp = temp->next;
    }
}

void getdata2(int n){
    int data=0;
    start2 = new node();
    cin>>data;
    start2->data = data;
    start2->next = NULL;

    node *temp = start2;

    for(int i=1;i<n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

// void print_LL(node *start3){
//     node *temp  = start3;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

void merge_two_LL(node *start,node *start2){
    node *temp = start;
    node *temp2 = start2;
    node *temp3;

    while(temp != NULL || temp2 != NULL){
        if(start3 == NULL){
            if(temp->data < temp2->data){
                start3 = new node();
                start3->data = temp->data;
                temp = temp->next;
                //cout<<start3->data<<endl;
            }
            else{
                start3 = new node();
                start3->data = temp2->data;
                temp2 = temp2->next;
                //cout<<start3->data<<endl;
            }
            temp3 = start;
            //cout<<temp3->data;
        }
        else{
            if(temp->data < temp2->data){
                struct node *newdata = new node();
                newdata->data = temp->data;
                newdata->next = NULL;
                temp3->next = newdata;
                temp3 = temp3->next;
                temp = temp->next;
                //cout<<"Temp 1 data = "<<temp3->data<<endl;
            }
            else{
                struct node *newdata = new node();
                newdata->data = temp2->data;
                newdata->next = NULL;
                temp3->next = newdata;
                temp3 = temp3->next;
                temp2 = temp2->next;
                //cout<<"Temp 2 data = "<<temp3->data<<endl;
            }
        }
    }

    cout<<temp->data<<" "<<temp2->data<<endl;

    while(temp != NULL){
        struct node *newdata = new node();
        newdata->data = temp->data;
        newdata->next = NULL;
        temp3->next = newdata;
        temp3 = temp3->next;
        temp = temp->next;
        //cout<<"Temp 1 data = "<<newdata->data<<endl;
    }

    while(temp2 != NULL){
        struct node *newdata = new node();
        newdata->data = temp2->data;
        newdata->next = NULL;
        temp3->next = newdata;
        temp3 = temp3->next;
        temp2 = temp2->next;
        //cout<<"Temp 2 data = "<<newdata->data<<endl;
    }

    //print_LL(start3);

    temp = start3;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int m=0;
    cin>>m;

    getdata2(m);

    merge_two_LL(start,start2);
}