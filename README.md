# Experiment-10
## AIM-
To learn about object oriented programing using class and methods.
### SOFTWARE USED-
VS Code
### PROLEM STATEMENTS-
1.) Write a c++ program to show car details using class.

2.) Write a c++ program to make a class by using function.

3.) Write a c++ program to calculate are of rectangle using class.

4.) Write a c++ program to make a class by taking inputs from user.
## THEORY-
Object-Oriented Programming (OOP):

Object-oriented programming models real-world concepts using objects. It combines data and functions, limiting access to data for enhanced security and organization.

Class:

A class is a template for creating objects, defining a new type that includes both data and functions. In C++, a class encapsulates data members (attributes) and member functions (methods).

Class Methods:

Methods are functions within a class that operate on the class's data and define the behavior of its objects.

Public and Private Members:

Public members are accessible from outside the class, allowing interaction with the data. Private members are restricted to the class itself, safeguarding data and promoting encapsulation.

A class acts as a blueprint for objects, defining their data and behaviors. Methods are the functions that manipulate this data, with access controls ensuring secure and organized code management.

### CODES-
1)CAR DETAILS:-
```javascript
//Sharvari Murade
//23070123088
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "Kia";
    string model = "Seltos";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;

}
```

2)FUNCTION CLASS-
```javascript
//Sharvari Murade
//23070123088
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "s2s";
    string sport = "Dance";
    string captain = "Sharvari";
    int year = 2021;
    

    void displayInfo(){
cout<< "Dance Group Details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Sport: "<< sport<<endl;
 cout <<"Captain: "<< captain<<endl;
 cout <<"Formed: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }
```

3)CALCULATE AREA USING CLASS(public private variable)-
```javascript
//Sharvari Murade
//23070123088
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(7.0, 16.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}
```

4)CLASS USING USER INPUT-
```javascript
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
```
### OUTPUTS-
1)-<img width="293" alt="Screenshot 2024-09-02 at 11 39 07 AM" src="https://github.com/user-attachments/assets/9827d4b8-2215-4d66-89b5-083505c6910b">

2)-<img width="315" alt="Screenshot 2024-09-02 at 11 40 56 AM" src="https://github.com/user-attachments/assets/0a90c6f2-ea42-4a00-9b16-be171c943171">

3)-<img width="311" alt="Screenshot 2024-09-02 at 11 42 50 AM" src="https://github.com/user-attachments/assets/d93268b9-99c2-43d4-9e02-a6656cbe8919">

4)-<img width="314" alt="Screenshot 2024-09-02 at 11 45 32 AM" src="https://github.com/user-attachments/assets/2cd12f7c-e19b-4d2b-9157-bdb9e9da07af">

## CONCLUSION-
Object-Oriented Programming (OOP) structures data and functions within classes, which act as templates for creating objects. This method enhances data protection and code clarity by using public and private access controls, leading to more organized and maintainable code.





