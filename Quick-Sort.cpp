#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
int Lpartition(int *arr,int start,int end);
void quickSort(int *arr,int start,int end);


int main(void)
{
    int arr[100],size;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);
    cout<<"INITTIALLY YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
    cout<<"AFTER SORTING YOUR ARRAY IS\n";
    quickSort(arr,0,size-1);
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

int Lpartition(int *arr,int start,int end)
{
    int pivot=arr[end];
    int i=start-1;
    for( int j=start;j<end-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp1=arr[end];
    arr[end]=arr[i+1];
    arr[i+1]=temp1;
    return i+1;
}

void quickSort(int *arr,int start,int end)
{
    if(start<end)
    {
        int p=Lpartition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}

