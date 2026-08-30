#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter a 3 digit number: ";
  cin>>a;

  int b = a/100;
  int c = (a%100)/10;
  int d = (a%100)%10;
  if((b*b*b + c*c*c + d*d*d)==a){
    cout<<a<<" is a Armstrong number.";
  }else{
    cout<<a<<" is not a Armstrong number.";
  }
return 0;
}