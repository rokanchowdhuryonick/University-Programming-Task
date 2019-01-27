#include<iostream>
#include<dos.h>
#include<windows.h>




using namespace std;

int swapf(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void normalPrint(int arr[], int N){
    int i;
    for(i=0; i<N; i++){
        cout<<arr[i]<<", ";
    }
}

void print(int arr[], int N){
    int i;
    for(i=0; i<N; i++){
        Sleep(400);
        cout<<arr[i]<<", ";
    }
}

int bubble_sort(int arr[], int N){
    int i;
    for(int j=0; j<N-1; j++){
        for(i=0; i<N-j-1; i++){
            if(arr[i]>arr[i+1]){
                    swapf(&arr[i], &arr[i+1]);

            }
        }
    }

}


int selection_sort(int arr[], int N){
    int i, j, minIndex;

    for(i=0; i<N-1; i++){
        minIndex = i;
        for(j=i+1; j<N; j++){
            if(arr[j]<arr[minIndex]){
                    minIndex =j;
            }
            swapf(&arr[j], &arr[minIndex]);
        }

    }
}

int insertion_sort(int arr[], int N){
    int i,j, key;
    for(i=1; i<N-1; i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[i]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main(){
    int N = 10, i, choise;
    int arr[N] = {20,60,2,7,6,1,8,9,10,40};
    normalPrint(arr, N);
    cout<<"\n"<<endl;
    cout<<"\t\t\t1. Bubble Sort. \t2. Selection Sort. \t3. Insertion Sort. \t4. Exit"<<endl;
    cin>> choise;

    switch(choise){
        case 1: cout<< "After Bubble Sort"<<endl;
        bubble_sort(arr, N);
        print(arr, N);
        cout<<endl;
        break;
        case 2: cout<< "After Selection Sort"<< endl;
        selection_sort(arr, N);
        normalPrint(arr, N);
        cout<<endl;
        break;
        case 3: cout<< "After Insertion Sort"<< endl;
        insertion_sort(arr, N);
        normalPrint(arr, N);
        cout<<endl;
        break;
        case 4:
            system("cls");
            cout<< "\t\t\t\t Programmed by Rokan chowdhury Onick"<< endl;
            Sleep(2000);
        cout<<endl;
        break;
        default:
            cout<<"\n\t\t\t\tInvalid keyword"<<endl;

    }



}
