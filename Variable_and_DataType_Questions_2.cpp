// Question2:Enter cost of 3 items from the user(using float datatype)-a pencil ,apen and an eraser.You have to output the total cost of the items back to the user as their bill.
// (Add on:You can also try adding 18% GST tax to the items in the bill as an advanced problem)
#include<iostream>
using namespace std;

int main(){
  float pen;
  float pencil;
  float eraser;

  cout<<"Enter the price of Pen: ";
  cin>>pen;
  cout<<"Enter the price of Pencil: ";
  cin>>pencil;
  cout<<"Enter the price of Eraser: ";
  cin>>eraser;

  float Total = pen + pencil + eraser;
  float Tax = Total*0.18;
  float Bill = Total + Tax;

  cout<<"Total cost of items: "<<Bill;

  return 0;


}