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
class kite:public polygon{
private:
    int d1;
    int d2;
    void calArea();
    void calPerimeter();
public:
    kite(float diagonal1,float diagonal2);
};
kite::kite(float diagonal1,float diagonal2)
{
    d1=diagonal1;
    d2=diagonal2;
    calPerimeter();
    calArea();
}
void kite::calArea(){
    area=(d1*d2)*1/2;
}
void kite::calPerimeter(){
    perimeter=2*(d1+d2);
}

int main(){
    kite k(4,8);
    k.printPerimeter();
    k.printArea();
return 0;
}
