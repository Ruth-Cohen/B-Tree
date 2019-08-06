#include <iostream>
using namespace std;

class busLine
{
public:

	int line;
	int minutes;
	busLine(){ line = 0; minutes = 0; }
	bool operator==(const busLine& a) const;
	bool operator < (const busLine& a) const;
	bool operator <= (const busLine& a) const;
	bool operator > (const busLine& a) const;
	bool operator >= (const busLine& a) const;
	friend istream& operator  >> (istream& in, busLine& b);
	friend ostream& operator  << (ostream& out, const busLine& b);
	busLine& operator=(const busLine&);
};

bool busLine:: operator==(const busLine& a) const
{
	return (line == a.line);
}

bool busLine:: operator < (const busLine& a) const
{
	return (line < a.line);
}

bool busLine:: operator <= (const busLine& a) const
{
	return (line <= a.line);
}

bool busLine:: operator >(const busLine& a) const
{
	return (line > a.line);
}

bool busLine:: operator >= (const busLine& a) const
{
	return (line >= a.line);
}

istream& operator >> (istream& in, busLine& b)
{
	in >> b.line >> b.minutes;
	return in;
}

ostream& operator << (ostream& out, const busLine& b)
{
	out << b.line <<"  "<< b.minutes<<endl;
	return out;
}

busLine& busLine::operator =(const busLine& num)
{
	line = num.line;
	minutes = num.minutes;
	return *this;
}

