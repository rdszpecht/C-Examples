/*
 * Complex.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: rd.szpecht
 */

#include "Complex.h"

class Complex{
	double Complex::getR(){
		return this->r;
	}
	double Complex::getI(){
		return this->i;
	}
	double Complex::modulus(){
		return (this->getR() + this->getI() / 2);
	}
	bool Complex::equals(Complex c){
		bool toRet = false;

		if(this->getR() == c->getR()){
			if(this->getI() == c->getI()){
				toRet = true;
			}
		}
		return toRet;
	}
	Complex Complex::sum(Complex c){

	}
	std::string Complex::toString(Complex c){

	}


	Complex Complex::subs(Complex c){

	}
	Complex Complex::div(Complex c){

	}
	Complex Complex::mult(Complex c){

	}
}
