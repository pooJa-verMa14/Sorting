#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
void insertionSort(int *arr,int *n);

int main(void)
{
    int arr[100],size;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    cout<<endl;
    CREATE(arr,&size);
    cout<<"INITILLY YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
    insertionSort(arr,&size);
    cout<<"AFTER INSERTION SORT YOUR ARRAY IS\n";
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

void insertionSort(int *arr,int *n)
{
    for(int i=1;i<*n;i++)
    {
        int key=arr[i];
        for(int j=i-1;j>=0 && arr[j]>key ;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}
