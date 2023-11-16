#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Complex
{
public:
	double a;
	double b;

	Complex()
	{
		a = 0;
		b = 0;
	}
	Complex(double a)
	{
		this->a = a;
		b = 0;
	}
	Complex(double a, double b)
	{
		this->a = a;
		this->b = b;
	}
	int getRealPart() const
	{
		return a;
	}
	int getImaginaryPart() const
	{
		return b;
	}
	Complex add(const Complex& c2) const
	{
		double A = this->a + c2.getRealPart();
		double B = this->b + c2.getImaginaryPart();
		return Complex(A, B);
	}
	Complex subtract(const Complex& c2) const
	{
		int A = this->a - c2.getRealPart();
		int B = this->b - c2.getImaginaryPart();
		return Complex(A, B);
	}
	Complex multiply(const Complex& c2) const
	{
		int A = this->a * c2.getRealPart() - this->b * c2.getImaginaryPart();
		int B = this->b * c2.getRealPart() + this->a * c2.getImaginaryPart();
		return Complex(A, B);
	}
	Complex divide(const Complex& c2) const
	{
		double c = c2.getRealPart();
		double d = c2.getImaginaryPart();

		double A = ((a * c) + (b * d)) / ((c * c) + (d * d));
		double B = ((b * c) - (a * d)) / ((c * c) + (d * d));
		return Complex(A, B);
	}
	double abs() 
	{
		return sqrt((a * a) + (b * b));
	}
	string toString() const
	{
		stringstream ss;
		if (a == 0)
		{
			ss << 0;
			return ss.str();
		}
		else
		{
			ss << a << " + " << b<<"i";
			return ss.str();
		}
		
	}
	
	Complex& operator +=(Complex& c2) 
	{
		*this = add(c2);
		return *this;

	}
	Complex& operator -=(Complex& c2)
	{
		*this = subtract(c2);
		return *this;
	}
	Complex& operator *=(Complex& c2)
	{
		*this = multiply(c2);
		return *this;
	}
	Complex& operator /=(Complex c2)
	{
		*this = divide(c2);
		return *this;
	}
	double& operator[](int i)
	{
		if (i == 0)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	Complex operator+()
	{
		return *this;
	}
	Complex operator-()
	{
		return Complex(-a, -b);
	}
	Complex& operator++()
	{
		a += 1;
		return *this;
	}
	Complex& operator--()
	{
		a -= 1;
		return *this;
	}
	Complex operator++(int d)
	{
		Complex temp(a, b);
		a++;
		return temp;
	}
	Complex operator--(int d)
	{	
		Complex temp(a, b);
		a--;
		return temp;
	}
	friend ostream& operator<<(ostream& out, const Complex& c2)
	{
		if (c2.getImaginaryPart() == 0)
		{
			out << c2.getRealPart();
		}
		else
		{
			out << c2.getRealPart() << " + " << c2.getImaginaryPart() << "i";
		}
		return out;
	}
	/* friend istream operator>>(istream& in, Complex& c2)
	{
		cout << "Enter real: ";
		in >> c2.getRealPart();
		cout << "Enter imaginary: ";
		in >> c2.getImaginaryPart();
		return in;

	}
	*/
	
};	
Complex operator +(const Complex& c1, const Complex& c2) 
{
	return c1.add(c2);
}
Complex operator -(const Complex& c1, const Complex& c2)
{
	return c1.subtract(c2);
}
Complex operator *(const Complex& c1, const Complex& c2)
{
	return c1.multiply(c2);
}
Complex operator /(const Complex& c1, const Complex& c2)
{
	return c1.divide(c2);
}

int main()
{
	//test constructors
	Complex x;
	cout << x.toString() << " its real part is = " << x.getRealPart() << " its imaginary part = " << x.getImaginaryPart() << " its abs value = " << x.abs() << endl;
	Complex y(3);
	cout << y.toString() << " its real part is = " << y.getRealPart() << " its imaginary part = " << y.getImaginaryPart() << " its abs value = " << y.abs() << endl;

	Complex z(3, 4);
	cout << z.toString() << " its real part is = " << z.getRealPart() << " its imaginary part = " << z.getImaginaryPart() << " its abs value = " << z.abs() << endl;
	//testing overloaded stream insertion 

	cout << z << endl;;
	Complex i(5, 6);
	cout << i << endl;;

	//test overloaded arithmetic operators 
	
	cout << (z + i).toString() << endl;
	cout << (z - i).toString() << endl;
	cout << (z * i).toString() << endl;
	cout << (z / i).toString() << endl;

	//test overloaded augmented arithmetic operators
	i += z;
	cout << i.toString() << endl;
	i -= z;
	cout << i.toString() << endl;
	i *= z;
	cout << i.toString() << endl;
	i /= z;
	cout << i.toString() << endl;

	//test overloaded unary operators
	
	cout <<  (+z).toString() << endl;
	cout << (-z).toString() << endl;
	z = -z;
	//test overloaded prefixes
	cout << (++z).toString() << endl;
	cout << (--z).toString() << endl;

	//test overloaded postfixes
	cout << (z++).toString() << endl;
	cout << (z--).toString() << endl;
	
	//test overloaded subscript operator
	cout << z[0] << endl;
	cout << z[1] << endl;
	
	//test implicit conversion from double to complex
	cout << (3 + i).toString() << endl;
	cout << (3.4 + i).toString()<<endl;
}