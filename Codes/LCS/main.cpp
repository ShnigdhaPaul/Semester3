#include <iostream>

using namespace std;
int i,j,n=7,m=7;
int c[10][10];
int b[10][10];
char x[]={'a','b','b','c','a','a','c'};
char y[]={'a','c','c','b','c','c','a'};

int main()
{
    for(i=0;i<=n;i++)
    {
        c[i][0]=0;
    }
    for(j=0;j<=n;j++)
    {
        c[0][j]=0;
    }


for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(x[i-1]!=y[j-1])
        {
            if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]=1;
                }

         else

{


            c[i][j]=c[i][j-1];
            b[i][j]=2;
}
        }
        else
{
            c[i][j]=c[i-1][j-1]+1;
            b[i][j]=3;


    }
        }
    }

  i=n;
  j=m;
while(i>0 && j>0)
{
    if(b[i][j]==3)
    {
        cout<<x[i-1]<<endl;
        i=i-1;
        j=j-1;
    }
    else if(b[i][j]==2)
    {
        j=j-1;
    }
    else
    {
        i=i-1;
    }
}
    return 0;
}

