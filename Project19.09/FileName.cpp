
#include <iostream>
#include "Products.h"
using namespace std;

int main() 
{
	Products a("Laptop", "Electronics", 999.99, 2.5);
	a.Print();
	a.Init("Tablet", "Electronics", 499.99, 1.0);
	a.Print();

	a.SetName("Smartphone");
	a.GetName();

	a.SetCategory("Gadgets");
	a.GetCategory();

	a.SetPrice(699.99);
	a.GetPrice();

	a.SetWeight(0.3);
	a.GetWeight();
	a.Print();
}