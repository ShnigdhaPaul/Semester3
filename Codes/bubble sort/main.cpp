#include <iostream>
using namespace std;
int main()
{
    int i,j,n,temp;
    int a[100];
    cout<<"How many numbers"<<endl;
    cin>>n;
     cout<<"Enter the numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
