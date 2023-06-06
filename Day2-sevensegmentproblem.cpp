#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 int T;
 cin >> T;
 while(T--){
  char arr[100];
  cin >> arr;
  int sticks = 0;
  for(int i=0; i<strlen(arr); i++){
  if(arr[i] == '0' || arr[i] == '6' || arr[i] == '9')
  sticks += 6;
    else if(arr[i] == '1')
    sticks += 2;
   else if(arr[i] == '2' || arr[i] == '3' || arr[i] == '5')
    sticks += 5;
   else if(arr[i] == '4')
    sticks += 4;
   else if(arr[i] == '7')
    sticks += 3;
   else if(arr[i] == '8')
    sticks += 7;
  }
  if(sticks % 2 == 0){
   sticks = sticks / 2;
   while(sticks--){
    cout << "1";
   }
   cout << endl;
  }
  else{
   sticks = sticks / 2;
   sticks--;
   cout << "7";
   while(sticks--){
    cout << "1";
   }
   cout << endl;
  }
 }
 return 0;
}