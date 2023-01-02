#include <iostream>
using namespace std;
class triangle{
    private:
    int s1,s2,s3;
    public:
    void input(int side1,int side2,int side3){
    s1=side1;
    s2=side2;
    s3=side3;
    }
int perimeter(){
return s1+s2+s3;
}
};

int main(){
triangle t;
t.input(9,6,4);
cout<<"perimeter of the triangle: "<<t.perimeter()<<endl;
}
