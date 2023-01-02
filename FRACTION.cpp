#include <iostream>
using namespace std;
class fraction{
    private:
        int numerator;
        int denominator;
    public:
        void store(int num,int den);
        void print() const;
};
void fraction::store(int num,int den){
numerator=num;
denominator=den;
}
void fraction::print() const{
cout<<numerator<<"/"<<denominator;
}

int main(){
fraction f;
f.store(2,3);
f.print();
return 0;
}
