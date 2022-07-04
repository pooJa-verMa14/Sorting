#include<iostream>
using namespace std;

void selectSort(int *arr,int *n);
void create(int *arr,int *n);
void display(int *arr,int *n);

int main(void)
{
    int arr[100],size;
    cout<<"ENTER THE SIZE OF YOUR ARRAY==>";
    cin>>size;
    cout<<endl;
    create(arr,&size);
    cout<<"INITIALLY YOUR ARRAY IS\n";
    display(arr,&size);
    selectSort(arr,&size);
    cout<<"YOUR ARRAY AFTER SELECTION SORT IS\n";
    display(arr,&size);
}

void create(int *arr,int *n)
{
    for(int i=0;i<*n;i++)
    {
        cout<<"ENTER THE "<<i<<" VALUE==> ";
        cin>>arr[i];
        cout<<endl;

    }
}

void display(int *arr,int *n)
{
    
    for(int i = 0 ; i<*n;i++)
    {
        
        cout<<"\n Value at index <" << i <<"> is :"<<arr[i];
    }
    cout<<endl;
}

void selectSort(int *arr,int *n)
{
    int min_ind,max_ind;
    for(int i=0;i<*n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;j<*n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        int temp=arr[min_ind];
        arr[min_ind]=arr[i];
        arr[i]=temp;

    }
}
