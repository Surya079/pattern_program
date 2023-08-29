#include<iostream>>
using namespace std;

pattern(int n)
{
    if(n<3)
    {
        cout<<" Please enter the valid Number for pramid... ";
    }
    else
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
         int m=1;
        for(int k=1;k<=i;k++)
        {
            cout<<m++;
        }
          m=m-2;
        for(int l=1;l<i;l++)
        {
            cout<<m--;
        }
        cout<<"\n";
    }
  }
}
int main()
{
   int n;
   cout<<"Enter the Number :";
   cin>>n;
   pattern(n);
}
