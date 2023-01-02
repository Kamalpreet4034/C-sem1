#include <iostream>
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
		int gcd(int n1, int n2);
	public:
		Fraction();			//default constructor
		Fraction(int num);		//parameterized constructor
		Fraction(int num, int den);
		Fraction(const Fraction& fr); 	//copy constructor
		//destructor
		~Fraction() {                //destructor
			cout<<"ending"; }

		void store(int num, int den);
		void print() const; 		//accessor function
};
Fraction::Fraction(){
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int num){
	numerator = num;
	denominator = 1;
}

Fraction::Fraction(int num, int den){
	if(den == 0){
		cout<<"Divide by zero error\n";
		exit(100);
	}
	else if(den < 0){
		numerator = -num;
		denominator = -den;
	}
	else{
		int res = gcd(num, den);
		num = num/res;
		den = den/res;

		numerator = num;
		denominator = den;
	}
}

Fraction::Fraction(const Fraction& fr){
	numerator = fr.numerator;
	denominator = fr.denominator;
}

void Fraction::store(int num, int den){
	*this = Fraction(num, den);
}

void Fraction::print() const{
	cout<<endl;
	cout<<numerator<<"/"<<denominator;
}
//recursive approach
int Fraction::gcd(int n1, int n2){
	if(n2==0)
		return n1; //base case
	else
		return gcd(n2, n1%n2);
}


int main(){
	//object creation using a default constructor
	Fraction fr1;
	fr1.print(); //----- 0/1

	//object creation using using default constructor and using store function

	//using a parameterized constructor with one parameter
	Fraction fr3(3);
	fr3.print(); // ---- 3/1

	//using a parameterized constructor with two parameters
	Fraction fr4(4,5);
	fr4.print(); // ---- 4/5
	Fraction fr2; // -- 0/1
	fr2.store(2,3); // --- 2/3
	fr2.print(); // --- 2/3

	//using a parameterized constructor with two parameters & that normalises the fraction
	Fraction fr5(10,15);
	fr5.print(); // ---- 2/3

	//using a parameterized constructor with one Fraction type parameter
	Fraction fr6(fr3);
	fr6.print(); // ---- 3/1

	return 0;
}
