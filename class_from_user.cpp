//Sharvari Murade
//23070123088
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car company: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
