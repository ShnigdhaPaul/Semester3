#include <iostream>
using namespace std;

void LinearSearch(int a[], int n,int item)
{
    int i,c=0,index;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            c=1;
            index=i;
            break;
        }
    }
    if(c==1)
    {
        cout<<"Found in index "<<index<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}

int main()
{
    int i,n,item;

    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];

    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Printing..."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter item to search for: ";
    cin>>item;
    LinearSearch(a,n,item);

}
