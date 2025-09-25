#include "Products.h"
#include <iostream>
using namespace std;

Products::Products()
{
	name = " ";
	category = " ";
	price = 0.0;
	weight = 0.0;
}

Products::Products(string n, string cat, double pr, double w)
{
	name = n;
	category = cat;
	price = pr;
	weight = w;	
}

void Products::Print()
{
	cout << "Product name: " << name << "Category: "<< category << "Price"<< price << "Weight" << weight << endl;
	count++;
}

void Products::Init(string n, string cat, double pr, double w)
{
	name = n;
	category = cat;
	price = pr;
	weight = w;
}

void Products::Input()
{
	char buff[50];
	cout << "Enter product name: ";
	cin.getline(buff,50);
	name= buff;

	cout << "Enter product category: ";
	cin.getline(buff, 50);
	name=buff;

	cout << "Enter product price: ";
	cin >> price;

	cout << "Enter product name: ";
	cin >> weight;
}


void Products::PrintCount()
{
	cout << "Count: " << count << endl;

}

int Products::count = 0;