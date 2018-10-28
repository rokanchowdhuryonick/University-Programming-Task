#include<iostream>
using namespace std;
class Node
{
public:
   int value;
    Node *next;
};
Node *front = NULL;
Node *rear = NULL;

void enque(int val)
{
    Node *n= new Node;
   n->value = val;
   n-> next = NULL;
   if(front == NULL){
    front = rear = n;
   }
   else{
      rear -> next = n;
      rear = n;
   }

}
void deque()
{
   if(front == NULL){
    cout<<"Queue is already Empty...!!"<<endl;
   }
   else{
       Node *temp = front;
      front = front->next;
      cout<<"\nDeleted value is:"<< temp->value<<endl;
   }
}


void Display()
{
   if(front == NULL){
    cout<<"\nThere is no value to show..!! Please Enque Some value first..!!!"<<endl;
   }
   else{
     Node *currentNode=front;
    while(currentNode!=NULL){
        cout<<currentNode->value <<", ";
        currentNode=currentNode->next;
    }
    cout << endl;

   }
}


int main()
{
    enque(10);
    enque(166);
    enque(6068);
    Display();
    deque();
    Display();
    enque(6000896);
      enque(956);
    Display();


}


