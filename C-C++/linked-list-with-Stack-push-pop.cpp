#include<iostream>
using namespace std;


class Node{
public:
    int value;
    Node *next;

};

Node *head=NULL;
Node *top=NULL;

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

void EraseFirst()
{
    Node *n=new Node;
    n=head;
    head=head->next;
    delete n;

}
void EraseAt(int pos)
{

    Node *currentNode=new Node;
    Node *prev=new Node;
    currentNode=head;
    for(int i=1;i<pos;i++)
    {
      prev=currentNode;
      currentNode=currentNode->next;
    }
    prev->next=currentNode->next;

}
void EraseLast()
{
    Node *currentNode=new Node;
    Node *prev=new Node;
     currentNode=head;

     while(currentNode->next!=NULL){
            prev=currentNode;
            currentNode=currentNode->next;

     }

     cout<<"Last Value:"<<currentNode->value<<"\n";
     prev->next=NULL;
}
int Count(){
    Node *currentNode=new Node;

   int i = 0;
    currentNode=head;
    while(currentNode!=NULL)
    {
        i++;
        currentNode=currentNode->next;
    }
   // cout<<"\n Now Total Node : "<< i<<endl;
    return i;
}


void Remove(int val){
   Node *currentNode=new Node;
   Node *prev=new Node;
     currentNode=head;
    while(currentNode->value != val) {
            prev = currentNode;
            currentNode = currentNode->next;

    }
        prev->next = currentNode->next;
        delete currentNode;

}
void Push(int val){
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

void Pop(){
    int i= Count();
    if(i==0){
        cout<<"Stack is already empty..!!"<<endl;
    }else{
        Node *currentNode=new Node;
    Node *prev=new Node;
    currentNode=head;
    while(currentNode->next!=NULL){
            prev=currentNode;
            currentNode=currentNode->next;
     }
    cout<<"Last Value:"<<currentNode->value<<"\n";
     prev->next=NULL;
    }



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
    insertAtFirst(10);//insertAtFirst(1222);insertAtFirst(9);insertAtFirst(6);
printList();
    //insertAtMiddle(2, 17);
//printList();
 //   insertAtEnd(606);
  // printList();
   Push(1166);
   printList();
   Pop();
    EraseFirst();
   // Pop();
  //  Pop();

   printList();
cout<<"Total Node "<< Count()<<endl;
Pop();
/*   cout<<"\t\tRemove First"<<endl;
            EraseFirst();
printList();
cout<<"\t\tRemove Middle"<<endl;
EraseAt(3);
printList();
cout<<"\t\tRemove Last"<<endl;
EraseLast();
printList();
cout<<"\t\tRemove By Value"<<endl;
Remove(9);
printList();
Count();
insertAtFirst(156);
printList();
EraseAt(2);
printList();*/
    return 0;
}
