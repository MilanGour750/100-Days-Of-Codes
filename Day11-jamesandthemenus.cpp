#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	long long int nt,nm; 
	cin >> nm>>nt; 
	vector<long long int> v[nm]; 
	vector<long long int> max_price, best_price,avg_price; 
	for(long long int i=0;i<nm;i++){     
		v[i].clear();     
		max_price.push_back(0);     
		best_price.push_back(0);      
		avg_price.push_back(0);      
	}      
	for(long long int i=0;i<nm;i++)      { 
		for(long long int j=0;j<nt;j++){      
			long long int val=0; cin>>val; 
			v[i].push_back(val); 
			avg_price[i]+=val; 
			if(max_price[j]<val){      
				max_price[j]=val; 
			} 
		}         
	} 
	long long int largest=0; 
	for( long long int i=0;i<nm;i++){     
		for (long long int j=0;j<nt;j++){         
			if( max_price[j]== v[i][j]){              
				best_price[i]++;              
			}              
		} 
		if( i>0 && largest<best_price[i]) { 
			largest=best_price[i]; 
		} 
	} 
	long long int highval=0,pos=0;
	for( long long int i=0;i<nm;i++){ 
		if( largest == best_price[i]){ 
			if(highval<avg_price[i]){ 
				highval=avg_price[i]; pos=i+1; 
			} 
		} 
	} 
	cout<<pos<<endl; 
}