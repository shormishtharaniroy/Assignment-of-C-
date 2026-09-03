#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value: ";
  cin>>n;
  int s=0;
  int c=0;
  int i=0;
  int j =1;
  cout<<i<<","<<j;
  while(c<n){
    s=i+j;
    c++;
    cout<<","<<s;
    i=j;
    j=s;
}}