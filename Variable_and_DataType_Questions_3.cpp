// Question3:Build a Simple Interest Calculator.
// Input:principal(P),rate(R),time(T)
// Output:(P*R*T)/100

#include<iostream>
using namespace std;

int main(){
  float P;
  float R;
  float T;
 
  cout<<"Principle = ";
  cin>>P;

  cout<<"Rate = ";
  cin>>R;

  cout<<"Time = ";
  cin>>T;
   
   float Interest = (P*R*T)/100;

  cout<<"Interest = "<<Interest;

  return 0;

}