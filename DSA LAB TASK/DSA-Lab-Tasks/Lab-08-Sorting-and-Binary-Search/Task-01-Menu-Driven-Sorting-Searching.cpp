#include <iostream>
using namespace std;
void display(int a[], int n){for(int i=0;i<n;i++)cout<<a[i]<<' ';cout<<'\n';}
void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){int minIndex=i;for(int j=i+1;j<n;j++)if(a[j]<a[minIndex])minIndex=j;swap(a[i],a[minIndex]);}
}
void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){bool changed=false;for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){swap(a[j],a[j+1]);changed=true;}if(!changed)break;}
}
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){int key=a[i],j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}
}
int binarySearch(int a[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){int mid=low+(high-low)/2;if(a[mid]==target)return mid;if(a[mid]<target)low=mid+1;else high=mid-1;}
    return -1;
}
int main(){
    const int N=10;int original[N],a[N];
    cout<<"Enter 10 integers:\n";for(int i=0;i<N;i++)cin>>original[i];
    int choice;
    do{
        cout<<"\n1. Selection Sort\n2. Bubble Sort\n3. Insertion Sort\n4. Binary Search\n5. Display Original Array\n6. Exit\nChoice: ";
        cin>>choice;
        if(choice>=1&&choice<=3){
            for(int i=0;i<N;i++)a[i]=original[i];
            if(choice==1)selectionSort(a,N);
            else if(choice==2)bubbleSort(a,N);
            else insertionSort(a,N);
            cout<<"Sorted array: ";display(a,N);
        }else if(choice==4){
            for(int i=0;i<N;i++)a[i]=original[i];
            insertionSort(a,N);int target;cout<<"Value to search: ";cin>>target;
            int index=binarySearch(a,N,target);
            if(index!=-1)cout<<"Found at sorted-array index "<<index<<'\n';else cout<<"Value not found\n";
        }else if(choice==5){cout<<"Original array: ";display(original,N);}
        else if(choice!=6)cout<<"Invalid choice\n";
    }while(choice!=6);
}
