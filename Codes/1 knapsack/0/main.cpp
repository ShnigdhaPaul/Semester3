#include <iostream>
using namespace std;
int w[10];
int p[10];
int benefit[15][15];
int n=5;
int c=8;
knapsack(int n , int c)
{
    if(n==0 || c==0 || benefit[n][c]==0)

   return 0;

    if(benefit[n][c]==benefit[n-1][c])

       knapsack(n-1,c);

    else
    cout<<w[n]<<" "<<p[n]<<endl;
    knapsack(n-1,c-w[n]);

    return 0;
}
 int getMax(int i, int y)
    {
  if(i > y)
    {
    return i;
  }
  else
    {
    return y;
  }
}

int main()
{

int y;
int i;

    for(i=1;i<=n;i++)
    {
        cout<<"weight"<<endl;
        cin>>w[i];
        cout<<"price"<<endl;
        cin>>p[i];
    }


for(i=1;i<=n;i++)
        benefit[i][0]=0;
    for(y=1;y<=c;y++)
    benefit[0][y]=0;
for(i=1;i<=n;i++)
{
    for(y=1;y<=c;y++)
    {
        if(y<w[i])
     {

          benefit[i][y]=benefit[i-1][y];
    }
    else
    {
        benefit[i][y]= getMax(benefit[i-1][y],(benefit[i-1][y-w[i]])+p[i]);
    }
    }
}
cout<<benefit[n][c]<<endl;
knapsack(n,c);

    return 0;
}
