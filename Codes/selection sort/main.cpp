 #include <iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void SelectionSort(int a[], int n)
{
    int i,j,minIndex;

    for(i=0;i<n;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
        Swap(&a[minIndex],&a[i]);
    }
}

int main()
{
    int i,n;

    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];

    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    SelectionSort(a,n);

    cout<<"After Sorting: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
