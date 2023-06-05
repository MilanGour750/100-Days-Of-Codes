#include<bits/stdc++.h> 
using namespace std;
int main()
{
  int num,k,steps=0;
  cin>>num; 
  int i,a[num],b[num];
  for(i=0;i<num;i++)
    cin>>a[i];
  for(i=0;i<num;i++)
    cin>>b[i];
  for(i=0;i<num-1;i++)
  {
    if(a[i]<a[i+1]) 
    {
      k=a[i];
      a[i]=a[i+1];
      a[i+1]=k;
      k=b[i];
      b[i]=b[i+1];
      b[i+1]=k;
    }
  }
  for(i=0;i<num-1;i++)
  {
    while(a[num-1]!=a[i]) 
    {
      if(a[i]<=0)
      {
        cout<<"-1"<<endl;;
        exit(0);
      }
      if(a[num-1]<a[i])
      {
        a[i]=a[i]-b[i];
        steps++;
        }
      if(a[num-1]>a[i])
      {
        a[num-1]=a[num-1]-b[num-1];
        steps++;
      }
    }
 
  }
  cout<<steps;
  return 0;
}