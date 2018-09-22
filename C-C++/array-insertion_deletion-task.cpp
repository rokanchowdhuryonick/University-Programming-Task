#include<iostream>
#include<string>
#include<stdio.h>
#include<windows.h>

using namespace std;

int maximum(int arr[], int N);
int minimum(int arr[], int N);
int total_elements(int arr[], int N);
void insertion(int arr[], int N);
void deletion(int arr[],int N);
void custom_m(int arr[],int N);

int main(){
    int N=20, arr[N]={10,12,13,14,15};
 custom_m(arr,N);

}



void custom_m(int arr[], int N)
{
    int element_count=0;

	char choice;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n\n"<<endl;
  cout<<"\t\t                          ~~~Options~~~         "<<endl;
  cout<<"\t\t               [A] Total Elements of The Array"<<endl;
  cout<<"\t\t               [B] Maximum Number of The Array"<<endl;
  cout<<"\t\t               [C] Minimum Number of The Array"<<endl;
  cout<<"\t\t               [D] Insert Any number in this Array "<<endl;
  cout<<"\t\t               [E] Delete Any number from this array "<<endl;
  cout<<"\t\t               [F] Exit"<<endl;
  cout<<"\n\tNow Enter your option : ";
  cin>>choice;
  system("cls");

		if (toupper(choice) == 'A' ){
                total_elements( arr, N);
		}else if (toupper(choice) == 'B'){
		 	  maximum(arr,N);
		}else if (toupper(choice) == 'C'){
               minimum(arr,N);
        }else if (toupper(choice) == 'D'){
              insertion(arr,N);
        }else if (toupper(choice) == 'E'){
               deletion(arr, N);
        }else if (toupper(choice) == 'F'){
            string ex_mgs1="Thank You For Visit Here!";
            string ex_mgs2="This Program is created by Rokan Chowdhury Onick";
            string ex_mgs3="Search 'Rokan Chowdhury Onick' in Google to find My All Cyber Profile";
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n\n"<<endl;
  cout<<"\t\t                                         About"<<endl;
  cout<<"\t\t                                     ------------\n\n"<<endl;
            cout<<"\n\t\t\t\t    ";
            for(int m=0;ex_mgs2[m]!='\0';m++){
                cout<<ex_mgs2[m];
                Sleep(65);
            }
            cout<<"\n\t\t\t ";
            for(int m=0;ex_mgs3[m]!='\0';m++){
                cout<<ex_mgs3[m];
                Sleep(55);
            }
            cout<<"\n\n\n\t\t\t\t\t\t";
            for(int m=0;ex_mgs1[m]!='\0';m++){
                cout<<ex_mgs1[m];
                Sleep(80);
            }
            Sleep(2000);
            cout<<endl;
              exit(0);

        }else if (toupper(choice) != 'A' , 'B' , 'C' , 'D', 'E', 'F'){
              custom_m(arr,N);
        }


}

                                     //part of total elements
                           //***Onno kono way ace kina medam ke ask kra lagbe...***

int total_elements(int arr[], int N){

  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n\n"<<endl;

int i,element_count=0;
char toexit='\n';

    for(i=0;arr[i]!=0;i++){
            element_count++;
        }
    cout<<endl;
    cout<<"\t\t\t\t\tTotal '"<<element_count<<"' Numbers stored in current array....!"<<endl;

cout<<"\n\tTo Go back from here, Please white any character and press Enter : ";
cin>>toexit;
            if (toexit != '.' ){
                system("cls");
                custom_m(arr,N);
            }else{
                system("cls");
                custom_m(arr,N);
            }


}

                            //part of maximum number

int maximum( int arr[], int N)
{
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n\n"<<endl;


  int i,maxNum = arr[0];
  char toexit='\n';
    for(i=0;i<N;i++){
        if(arr[i]>maxNum){
            maxNum=arr[i];
        }
    }

cout<< "\t\t\t\t\tThe Maximum Number in this array is : "<<maxNum<<endl;

cout<<"\n\tTo Go back from here, Please white any character and press Enter : ";
cin>>toexit;
            if (toexit != '.' ){
                system("cls");
                custom_m(arr,N);
            }else{
                system("cls");
                custom_m(arr,N);
            }

  }



                              //part of Minimum number

int minimum( int arr[], int N)
{

  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n\n"<<endl;

  int l,element_count=0;
  int i,minNum = arr[0];
  char toexit='\n';

    for(l=0;arr[l]!=0;l++){
            element_count++;
        }

    for(i=0;i<element_count;i++){
        if(arr[i]<minNum){
            minNum=arr[i];
        }
    }

cout<< "\t\t\t\t\tThe Minimum Number in this array is : "<<minNum<<endl;

cout<<"\n\tTo Go back from here, Please white any character and press Enter : ";
cin>>toexit;
            if (toexit != '.' ){
                system("cls");
                custom_m(arr,N);
            }else{
                system("cls");
                custom_m(arr,N);
            }

  }


                    //************************************************************
                                    //part of Insertion

void insertion(int arr[], int N)
{
  int l, again, op, k, i, z,element_count=0;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n"<<endl;
  cout<<"\t\t                                       Insertion Part"<<endl;
  cout<<"\t\t                                   ---------------------\n"<<endl;

cout << "\n\t\t\tThis is the place to insert any number to any position of the following Array"<<endl;
    cout <<"\n\nThe Current Array is ->"<<endl;
    for(l=0;arr[l]!=0;l++){
            element_count++;
          //  cout<<"array["<<l<<"]=>"<<arr[l];
              cout<<"No["<<l+1<<"]=>"<<arr[l];
            cout<<", ";
        }
        cout<<endl;

    cout <<"\nIn Which position you want to add a number...?  Write Here: ";
    cin >> k;
    for(i=element_count;i>=k;i--){
    arr[i]=arr[i-1];
    cout<<"index["<<i<<"] : "<< arr[i]<<endl;
    Sleep(300);
    }
    cout <<"\n\nInput the value Without Zero which you want to Add (Must Avoid Zero): ";
    cin >> arr[k-1];


    cout <<"\n\nNow The Array is : "<<endl;
    for(z=0;arr[z]!=0;z++){
                element_count=element_count+1;
                cout<<"index["<<z<<"]=>"<<arr[z];
                cout<<", ";
            }

    cout <<"\n\n To continue write 1 otherwise write 2 to go main menu : ";
    cin>>again;
        if(again==1){
                system("cls");
                insertion(arr,N);
        }else if(again==2){
            system("cls");
            custom_m(arr,N);
        }else if(again!=1,2 ){
            system("cls");
            cout<<"\t\t\t\t\tInvalid Key!"<<endl;
            insertion(arr,N);
        }


}


                    ////////////////////////         Part of Deletion

void deletion(int arr[], int N){
      int l, again, op, k, i, z,element_count=0;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +##                    A Multi Functions Program                  ##+"<<endl;
  cout<<"\t\t            +##                 Created By Rokan Chowdhury Onick              ##+"<<endl;
  cout<<"\t\t            +###################################################################+"<<endl;
  cout<<"\t\t            +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n"<<endl;
  cout<<"\t\t                                        Deletion Part"<<endl;
  cout<<"\t\t                                    --------------------\n"<<endl;

cout << "\n\t\t\tThis is the place to Delete any number from any position of the following Array"<<endl;
    cout <<"\n\nThe Current Array is ->"<<endl;
    for(l=0;arr[l]!=0;l++){
            element_count++;
            //
            cout<<"No["<<l+1<<"]=>"<<arr[l];
            cout<<", ";
        }
        cout<<endl;

    cout <<"\nFrom Which position you want to delete a number...?  Write Here: ";
    cin >> k;

    cout<<"\n\nindex["<<k-1<<"] = "<< arr[k-1];

    for(i=k-1;i<element_count;i++){
    arr[i]=arr[i+1];

    }
    cout<<" is deleted successfully.! "<<endl;

    cout <<"\n\nNow The Array is : "<<endl;
    for(z=0;arr[z]!=0;z++){
                element_count=element_count+1;
                cout<<"index["<<z<<"]=>"<<arr[z];
                cout<<", ";
            }

    cout <<"\n\n To continue this deletion write 1 otherwise write 2 to go main menu : ";
    cin>>again;
        if(again==1){
                system("cls");
                deletion(arr,N);
        }else if(again==2){
            system("cls");
            custom_m(arr,N);
        }else if(again!=1,2 ){
            system("cls");
            cout<<"\t\t\t\tInvalid Key!"<<endl;
            deletion(arr,N);
        }


}
