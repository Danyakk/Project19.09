#pragma once
#include <string>
using namespace std;
class Products
{
	string name;
	string category;
	double price;
	double weight;
public:
	Products();
	Products(string n, string cat, double pr, double w);
	void Print();
	void Init(string n, string cat, double pr, double w);
	void Input();

	void SetName(string n)
	{
		name = n;
	}
	string GetName()
	{
		return name;
	}

	void SetCategory(string cat)
	{
		category = cat;
	}
	string GetCategory()
	{
		return category;
	}

	void SetPrice(double pr)
	{
		price = pr;
	}
	double GetPrice()
	{
		return price;
	}

	void SetWeight(double w)
	{
		weight = w;
	}
	double GetWeight()
	{
		return weight;
	}

};

