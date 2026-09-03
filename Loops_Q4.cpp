#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int j =2;j<=n;j++){
  
  int c=0;
  for( int i = 1;i<=j;i++){
    if(j%i==0){
      c++;
    }
  }
  if(c<=2){
    cout<<j<<endl;
  }
  }
}