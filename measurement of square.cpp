#include <iostream>
using namespace std;
class polygon{
protected:
    float area;
    float perimeter;
public:
    polygon(){}
    ~polygon() {}
    void printArea();
    void printPerimeter();
};
void polygon:: printArea(){
    cout<<"\n THE AREA IS: "<<area;
}
void polygon::printPerimeter(){
    cout<<"\n THE PERIMETER IS:"<<perimeter;
}
class square:public polygon{
private:
    int side;
    void calArea();
    void calPerimeter();
public:
    square(float x);
};
square::square(float x){
    side=x;
    calPerimeter();
    calArea();
}
void square::calArea(){
    area=side*side;
}
void square::calPerimeter(){
    perimeter=4*side;
}

int main(){
    square s(5.0);
    s.printPerimeter();
    s.printArea();
return 0;
}
