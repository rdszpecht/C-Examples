#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <string>

class Complex {
public:
	Complex();
	Complex(double r, double i);

	double getR()const;
	double getI()const;
	double modulus(Complex x)const;
	bool equals(Complex c)const;
	Complex sum(Complex c)const;
	std::string toString(Complex c)const;
private:
	double r, i;

	Complex subs(Complex c)const;
	Complex div(Complex c)const;
	Complex mult(Complex c)const;
};

#endif /* COMPLEX_H_ */

