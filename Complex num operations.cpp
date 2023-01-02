#include <iostream>
using namespace std;
class complex
{
    private:
        float imag;
        float real;
        static float CountObject;
    public:
        complex()   //Default constructor
        {
            CountObject++;
            real=0;
            imag=0;
        }
        complex(complex& Object)       //Copy constructor
        {
            CountObject++;
            real=Object.real;
            imag=Object.imag;
        }
        complex(float R)             //parameterized for real numbers
        {
            CountObject++;
            real=R;
            imag=0;
        }
        complex(float R,float IMG)         //parameterized for both
        {
            CountObject++;
            real=R;
            imag=IMG;
        }
        ~complex(){}                         //Destructor
            void setReal(float R);
            void setImag(float IMG);
            float getReal(complex& Object);
            float getImag(complex& Object);
            void setValue(float real,float imag);
            void setValue(float real);
            void setValue();
            void printComplex() const;
            bool isImaginary(complex& Object);
            bool isReal(complex& Object);
            void add(complex& Object);
            void addReturn(complex& Object);
            static void countObject();
        complex operator*(complex& Object);
        complex operator*=(complex& Object);
        complex operator-(complex& Object);
        complex operator==(complex& Object);
};
float complex::CountObject=0;


void complex::countObject()
{
    cout<<CountObject<<endl;
}


void complex::setReal(float R)
{
    real=R;
}


void complex::setImag(float IMG)
{
    imag=IMG;
}


float complex::getReal(complex& Object)
{
    *this=complex(real,imag);
    cout<<real<<endl;
    return real;
}


float complex::getImag(complex& Object)
{
    *this=complex(real,imag);
    cout<<imag<<endl;
    return imag;
}


void complex::setValue(float real,float imag)
{
    *this=complex(real,imag);
}


void complex::setValue(float real)
{
    *this=complex(real);
}


void complex::setValue()
{
    *this=complex();
}


void complex::printComplex()const
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}


bool complex::isImaginary(complex& Object)
{
    *this=complex(real,imag);
bool isImaginary;
if(imag!=0)
{
    isImaginary=true;
}
else
{
    isImaginary=false;
}
    cout<<isImaginary<<endl;
    return isImaginary;
}


bool complex::isReal(complex& Object)
{
    *this=complex(real,imag);
bool isReal;
if(imag==0)
{
    isReal=true;
}
else
{
    isReal=false;
}
    cout<<isReal<<endl;
}


void complex::add(complex& Object)
{
    real=real+Object.real;
    imag=imag+Object.imag;
    *this=complex(real,imag);
    cout<<real<<"+"<<imag<<"i"<<endl;
}


void complex::addReturn(complex& Object)
{
    float R_Value=real+Object.real;
    float IMG_Value=imag+Object.imag;
    *this=complex(real,imag);
    cout<<R_Value<<"+"<<IMG_Value<<"i"<<endl;
}


complex complex::operator*(complex& Object)
{
    complex multiply;
    multiply.real=real*Object.real;
    multiply.imag=imag*Object.imag;
    return multiply;
}


complex complex::operator*=(complex& Object)
{
    real=real*Object.real;
    imag=imag*Object.imag;
    *this=complex(real,imag);
    return *this;
}


complex complex::operator-(complex& Object)
{
    complex subtract;
    subtract.real=real-Object.real;
    subtract.imag=imag-Object.imag;
    return subtract;
}


complex complex::operator==(complex& Object)
{
bool equality;
if(real==Object.real && imag==Object.imag)
{
    equality=true;
}
else
{
    equality=false;
}
cout<<equality<<endl;
return *this;
}


using namespace std;
int main(){
complex Object1;
Object1.printComplex();               //ans=0+0i

complex Object2(0,2);
Object2.printComplex();               //ans=0+2i
Object2.isReal(Object2);              //ans=0
Object2.isImaginary(Object2);         //ans=1

complex Object3(23,45);
Object3.add(Object2);                //ans=23+47i

complex Object4;
Object4.setValue(9,2);
Object4.printComplex();              //ans=9+2i
Object4.setValue(7);
Object4.printComplex();             //ans=7+0i

complex Object5(Object4);
Object5.printComplex();             //ans=7+0i
Object5.isReal(Object5);            //ans=1
Object5.isImaginary(Object5);       //ans=0

complex Object6(4,3);
Object6.printComplex();           //ans=4+3i
Object6.setReal(-1);
Object6.printComplex();           //ans=-1+3i
Object6.setImag(9);
Object6.printComplex();          //ans=-1+9i
Object6.getReal(Object6);        //ans= -1
Object6.getImag(Object6);        //ans=9

complex Object7(34,78);
Object7.addReturn(Object6);       //ans=33+87i

complex Object8;
Object8=Object1*Object7;
Object8.printComplex();          //ans=0+0i

complex Object9(47,65);
Object9*=Object2;               //ans=0+130i
Object9.printComplex();

complex Object10(56,67);
Object10=Object10-Object5;
Object10.printComplex();         //ans=49+67i
Object10==Object9;               //ans=0

complex Object11;
Object11.countObject();          //ans=26
return 0;
}
