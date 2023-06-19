#include<stdio.h>
 int main()
 {
    int t,n,g,p,a[10][2],sum1,sum2,ans;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum1=sum2=0;
        scanf("%d%d",&g,&p);
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<2;k++)
              scanf("%d",&a[j][k]);
        }
        for(int j=0;j<n;j++)
        {
                if(a[j][0]==1)
                 sum1=sum1+g;
                if(a[j][1]==1)
                 sum1=sum1+p;
        }
        for(int j=0;j<n;j++)
        {
                if(a[j][0]==1)
                 sum2=sum2+p;
                if(a[j][1]==1)
                 sum2=sum2+g;
        }
        ans=sum1>sum2?sum2:sum1;
        printf("%d\n",ans);
    }
 }
