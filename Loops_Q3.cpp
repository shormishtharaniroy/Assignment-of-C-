#include<iostream>
using namespace std;

int main(){
  int b,c,s=0;
  cout<<"Input a number: ";
  cin>>b;
  int rev=b;
 while(b!=0){
  c = b%10;
  b=b/10;
   s=s+c*c*c;
  }
  if(s==rev){
    cout<<rev<<" is an Armstrong number.";
  }else{
    cout<<rev<<" is not an Armstrong number.";
  }
}