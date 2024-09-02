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
