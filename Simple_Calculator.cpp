#include<iostream>
using namespace std;

int main(){
  int a,b;
  char op;

  cout<<"Enter a : ";
  cin>>a;
  cout<<"Enter b : ";
  cin>>b;
  cout<<"Enter Operator : ";
  cin>>op;

  // if(op=='+'){
  //   cout<<"a + b = "<<(a+b)<<endl;
  // }else if(op == '-'){
  //   cout<<"a - b = "<<(a-b)<<"\n";
  // }else if(op == '/'){
  //   cout<<"a / b = "<<(float)a/b<<endl;
  // }else if(op == '*'){
  //   cout<<"a * b = "<<a*b<<endl;
  // }else{
  //   cout<<"Invalid Operator";
  // }

  switch (op){
    case '+' : cout<<"a + b = "<<(a+b)<<endl;
    break;

    case '-' : cout<<"a - b = "<<(a-b)<<"\n";
    break;
    case '/' : cout<<"a / b = "<<(float)a/b<<endl;
    break;
    case '*' : cout<<"a * b = "<<a*b<<endl;
  default: cout<<"Invalid Operator";
    break;
  }
  return 0;
}