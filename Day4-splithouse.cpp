#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,f=0;            
    string s,p;
    cin>>n>>s;
    p=s;                    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            s[i]='B';      
        }
    }
    x=p.compare(s);      
    for(int j=0;j<n;j++)
        {
            if((s[j]=='H' && s[j+1]=='H'))  
            {
                f=-1;
                break;
            }
        }
    if((f==-1 || x==0 )&& n!=1)   
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<s<<endl;
    }
}