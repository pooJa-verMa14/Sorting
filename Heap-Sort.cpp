#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
void buildHeap(int *arr,int *n);
void maxHeap(int *arr,int *n,int i);
void heapSort(int *arr,int *n);

int main(void)
{
    int arr[100],size;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);
    cout<<"INITTIALLY YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
    heapSort(arr,&size);
    cout<<"AFTER SORTING YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
}


void CREATE(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"ENTER THE VALUE AT INDEX "<<i<<" ==>";
        cin>>arr[i];
    }
    cout<<endl;
}

void DISPLAY(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}

void buildHeap(int *arr,int *n)
{
    for(int i=(*n-2)/2;i>=0;i--)
    {
        maxHeap(arr,n,i);
    }
}

void maxHeap(int *arr,int *n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<*n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<*n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        maxHeap(arr,n,largest);
    }
}

void heapSort(int *arr,int *n)
{
    buildHeap(arr,n);
    for(int i=*n-1;i>=1;i--)
    {
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        maxHeap(arr,&i,0);
    }
}



