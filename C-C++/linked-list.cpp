#include<iostream>
using namespace std;


class Node{
public:
    int value;
    Node *next;
};

Node *head=NULL;

void insertAtFirst(int val){
    Node *n=new Node;
    n->value=val;
    n->next=head;
    head = n;
}

void insertAtMiddle(int position, int val)
{
    Node *prev=new Node;
    Node *currentNode=new Node;
    Node *temp=new Node;
    currentNode=head;
    for(int i=1;i<position;i++)
    {
      prev=currentNode;
      currentNode=currentNode->next;
    }
    temp->value=val;
    prev->next=temp;
    temp->next=currentNode;

}

void insertAtEnd(int val)
{
     Node *currentNode=new Node;
     currentNode=head;

     while(currentNode->next!=NULL){
        currentNode=currentNode->next;
     }
     Node *n=new Node;
     n->value=val;
     n->next = NULL;
     currentNode->next=n;
}

void removeFirst()
{
    Node *n=new Node;
    n=head;
    head=head->next;
    delete n;

}
void removeAtMiddle(int val)
{/*
    Node *n=new Node;
    Node *currentNode=new Node;
    currentNode=head;
    while(currentNode->next!=NULL){
            if(n->value==val){
                delete n;
            }
        currentNode=currentNode->next;
     }


 delete currentNode;*/
}
void removeLast()
{
    Node *currentNode=new Node;
    Node *n=new Node;
     currentNode=head;

     while(currentNode->next!=NULL){
        currentNode=currentNode->next;

cout<<currentNode->value<< "-";
     }
   //  next=NULL;
     cout<<currentNode->value;
     // n=currentNode;
    /* if(currentNode->next==NULL){
        n=currentNode->next;
     }*/
   delete currentNode;
}

void printList(){
    Node *currentNode=head;
    while(currentNode!=NULL){
        cout<<currentNode->value <<", ";
        currentNode=currentNode->next;
    }
    cout << endl;
}


int main()
{
    insertAtFirst(10);
    insertAtFirst(1222);
    insertAtFirst(9);
    insertAtFirst(6);
printList();
    insertAtMiddle(2, 17);
printList();
    insertAtEnd(606);
   printList();
removeFirst();
printList();
removeLast();
cout<<"\t\tRemove middle"<<endl;
printList();
    return 0;
}
