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
