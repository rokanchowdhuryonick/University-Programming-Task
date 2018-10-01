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

void insertAtEnd(int value)
{

}
void removeFirst()
{

}
void removeAtMiddle(int value)
{

}
void removeLast()
{

}

void printList(){
    Node *currentNode=head;
    while(currentNode!=NULL){
        cout << currentNode->value <<", ";
        currentNode=currentNode->next;

    }
    cout << endl;
}


int main()
{
    insertAtFirst(10);
    insertAtFirst(12);
    insertAtFirst(9);
    insertAtFirst(6);

    insertAtMiddle(2, 17);
   printList();

    return 0;
}
