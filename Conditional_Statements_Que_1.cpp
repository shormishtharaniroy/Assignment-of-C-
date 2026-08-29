#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter a number: ";
  cin>>a;

  if(a==0){
    cout<<a<<" is a zero.";
  }else if(a>0){
    cout<<a<<" is a positive number.";
  }else{
    cout<<a<<" is a negative number.";
  }
  return 0;
}