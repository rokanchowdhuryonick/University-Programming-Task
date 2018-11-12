#include<iostream>

using namespace std;

 // Prototype Declaration.......

int Count();
int linsert(int value);
int fdelete();
int ldelete();
int valueByPosition(int position);


class Node
{
public:
    int data;
    Node *next;
    Node *pre;
};


Node *head=NULL;



int finsert(int value)
{
    Node *newNode = new Node;
    newNode->data=value;
    newNode->next=head;
    newNode->pre=NULL;
    head=newNode;
}

int minsert(int position, int value)
{
    Node *newNode = new Node;
    Node *currentNode;
    Node *prev;
    currentNode = head;
    int i;
    int total_node=Count();
    for(i=1; i<position; i++){
            prev=currentNode;
            currentNode=currentNode->next;
    }
    if(position==(total_node+1)){
        linsert(value);
    }else{
        newNode->data=value;
        newNode->pre=prev;
        newNode->next=currentNode;
        currentNode->pre=newNode;
        prev->next=newNode;
    }



}

int linsert(int value)
{
    Node *newNode = new Node;
    Node *currentNode;
    currentNode=head;
    while(currentNode->next!=NULL){
        currentNode=currentNode->next;
    }
    newNode->data=value;
    newNode->pre=currentNode;
    newNode->next=NULL;
    currentNode->next=newNode;
}

int fdelete()
{
    head=head->next;
}
int ldelete()
{
    Node *temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"Deleted Value = "<<temp->data<<endl;
    temp->pre->next=NULL;
    delete temp;
}

int mdelete(int position){
    Node *currentNode;
    Node *prevNode;
    currentNode=head;
    int i;
    int total_node=Count();
    for(i=1;i<position;i++){
        prevNode=currentNode;
        currentNode=currentNode->next;
    }
    if(position==total_node){
        ldelete();
    }else if(position==1){
        fdelete();
    }else{
        currentNode->next->pre=prevNode;
        prevNode->next=currentNode->next;
        delete currentNode;
    }

}

int Display()
{
    Node *temp;
    temp=head;
    while(temp!=NULL){
            cout<<temp->data<<", ";
        temp=temp->next;
    }
    cout<<endl;
}

int Count(){
    Node *temp;

    temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}

int valueByPosition(int position)
{
    Node *temp;
    temp=head;
    int i;
    for(i=1;i<position;i++){
        temp=temp->next;
    }
    return temp->data;
}

int sortData()
{
    Node *temp;
    temp=head;
    int val, val2, t_n, j, i;
    t_n=Count();
    cout<<"Total Node => "<<t_n<<endl;
    for(i=1;i<=t_n;i++){
        val = valueByPosition(i);
        //val2= valueByPosition(i);
       // cout<< val2<<"->";
    }

}


int main(){
    cout<<"Total Node = "<<Count()<<endl;
    finsert(20);
    finsert(180);
    finsert(23);
    finsert(13);
    minsert(5,100);
    minsert(6,6220);
    Display();

    cout<<"Total Node = "<<Count()<<endl;

    fdelete();
    ldelete();
    Display();
    mdelete(3);
    Display();
    sortData();
}
