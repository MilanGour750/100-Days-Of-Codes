#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
	int m,n,o;     
	cin>>m>>n>>o;     
	vector <int> v;     
	int count=0;     
	for(int i=m; i<=n; i++){         
		cin>>m;         
		v.push_back(i);     
		}     
	for(int i=0; i<v.size(); i++){         
		if(v[i]%o==0){             
			count++;        
		}     
	}     
	
	cout<<count;     
	return 0; 
}
