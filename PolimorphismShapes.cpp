#include <iostream>
#include <string>
#include <vector>

class Shape
{
public:
	virtual std::string GetName() = 0;
	virtual std::string GetLengths() = 0;
	virtual std::string GetPerimiter() = 0;
};

class CIRCLE : public Shape
{

public:
	CIRCLE(double);
	std::string GetName() override;
	std::string GetLengths() override;
	std::string GetPerimiter() override;

private:
	std::string m_name = "CIRCLE";
	double m_r;
};

class TRIANGLE : public Shape
{

public:
	TRIANGLE(double, double, double);
	std::string GetName() override;
	std::string GetLengths() override;
	std::string GetPerimiter() override;

private:
	std::string m_name = "TRIANGLE";
	double m_a;
	double m_b;
	double m_c;
};

class RECTANGLE : public Shape 
{

public:
	RECTANGLE(double, double);
	std::string GetName() override;
	std::string GetLengths() override;
	std::string GetPerimiter() override;

private:
	std::string m_name = "RECTANGLE";
	double m_a;
	double m_b;

};

CIRCLE::CIRCLE(double r) 
{
	m_r = r;
}

std::string CIRCLE::GetName() 
{
	return m_name;
}

std::string CIRCLE::GetLengths()
{
	std::string s;
	s = "r=" + std::to_string(m_r);
	return s;
}

std::string CIRCLE::GetPerimiter()
{
	std::string s;
	double x = 2 * m_r * 3.14;
	s = "p = " + std::to_string(x);
	return s;
}



TRIANGLE::TRIANGLE(double a, double b, double c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}

std::string TRIANGLE::GetName()
{
	return m_name;
}

std::string TRIANGLE::GetLengths()
{
	std::string s;
	s = "a = " + std::to_string(m_a) + "b = " + std::to_string(m_b) + "c =" + std::to_string(m_c);
	return s;
}

std::string TRIANGLE::GetPerimiter()
{
	std::string s;
	s = "p = " + std::to_string(m_a + m_b + m_c);
	return s;
}




RECTANGLE::RECTANGLE(double a, double b)
{
	m_a = a;
	m_b = b;
}

std::string RECTANGLE::GetName()
{
	return m_name;
}

std::string RECTANGLE::GetLengths()
{
	std::string s;
	s = "a = " + std::to_string(m_a) + "b = " + std::to_string(m_b);
	return s;
}

std::string RECTANGLE::GetPerimiter()
{
	std::string s;
	s = "p = " + std::to_string(m_a + m_b);
	return s;
}




int main() 
{
/*
	Shape* c = new CIRCLE(5);
	Shape* r = new RECTANGLE(2,5);
	Shape* t = new TRIANGLE(2, 3, 4);

	std::vector<Shape*> shapes;
	shapes.push_back(c);
	shapes.push_back(r);
	shapes.push_back(t);

	for (auto a : shapes)
	{
		std::cout << a->GetName() << " " << a->GetLengths() << " " << a->GetPerimiter() << std::endl;
	}
*/

	std::vector<std::shared_ptr<Shape>> shapes;
	

	std::shared_ptr<CIRCLE> c(new CIRCLE(5));
	std::shared_ptr<RECTANGLE> r(new RECTANGLE(2,5));
	std::shared_ptr<TRIANGLE> t(new TRIANGLE(2,3,5));

	std::shared_ptr<Shape> b_c = c;
	std::shared_ptr<Shape> b_r = r;
	std::shared_ptr<Shape> b_t = t;

	shapes.push_back(b_c);
	shapes.push_back(b_r);
	shapes.push_back(b_t);


	for (auto a : shapes)
	{
		std::cout << a->GetName() << " " << a->GetLengths() << " " << a->GetPerimiter() << std::endl;
	}

}