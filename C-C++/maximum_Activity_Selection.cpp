
#include<iostream>

using namespace std;


class Activity
{
public:
    int startT;
    int finishT;
    void maxActivity(Activity Act[], int n);
    int setActData();

};

Activity :: setActData()
{
    cout<<"Start Time: ";
    cin>>startT;
    cout<<"Finish Time: ";
    cin>>finishT;
}

void SWAP( Activity *p, Activity *q)
{
    Activity temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void Activity :: maxActivity(Activity Act[], int n)
{
    int i, j;
    i=0;
    cout<<Act[0].startT<<" "<<Act[0].finishT<<endl;
    for(j=i; j<n; j++)
    {
        if(Act[j].startT>=Act[i].finishT)
        {
            cout<<Act[j].startT<<" "<<Act[j].finishT<<endl;
            i=j;
        }
    }
}

void bubbleSort(Activity Act[], int n){
    int i, pass;
    for(pass=0; pass<n; pass++)
    {
        for(i=0; i<n; i++)
        {
            if(Act[i].finishT>Act[i+1].finishT)
            {
                SWAP(&Act[i], &Act[i+1]);
            }
        }
    }

}


int main()
{
    int n;
    cout<<"Enter Number of Activities: ";
    cin>>n;

    Activity Act[n];
    int i, st, ft;
    for(i=0; i<n; i++){
        Act[i].setActData();
    }
    bubbleSort(Act,n);

    cout<<"After Sorting:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Act[i].startT<<"\t"<<Act[i].finishT<<endl;
    }
    cout<<endl;
    cout<< "After Max Select"<<endl;
    Act->maxActivity(Act, n);

}
