#include<iostream>
using namespace std;

void CREATE(int *arr,int *n);
void DISPLAY(int *arr,int *n);
void countSort(int arr[],int n,int k);

int main(void)
{
    int arr[100],size,k;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    cout<<endl;
    cout<<"ENTER THE RANGE==>";
    cin>>k;
    CREATE(arr,&size);
    cout<<"INITILLY YOUR ARRAY IS\n";
    DISPLAY(arr,&size);
    countSort(arr,size,k);
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

void countSort(int arr[], int n, int k) 
{ 
    int count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
        
    for(int i=1;i<k;i++)
        count[i]=count[i-1]+count[i];
    
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];
    
}
