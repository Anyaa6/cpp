class Awesome
{
public:
	Awesome():_n(0) {};
	Awesome(int n):_n(n) {};
	int _n;

	bool operator >(Awesome const &rhs) const
	{
		return (this->_n > rhs._n);
	}
	bool operator <(Awesome const &rhs) const
	{
		return (this->_n < rhs._n);
	}
	bool operator >=(Awesome const &rhs) const
	{
		return (this->_n >= rhs._n);
	}
	bool operator <=(Awesome const &rhs) const
	{
		return (this->_n <= rhs._n);
	}
};

std::ostream & operator << (std::ostream &o, const Awesome &a)
{
	o << a._n;
	return o;
}

int main()
{
	Awesome c(2), d(4);
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	swap(c, d);

	return 0;
}