#include <iostream>
using namespace std;
int main()
{
    int i,j,n,key;
    int a[100];
    cout<<"how many numbers"<<endl;
    cin>>n;
    cout<<"enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && key>a[i])
        {
            a[i+1]=a[i];
            i=i-1;
            a[i+1]=key;
        }
    }
    cout<<"insertion sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
