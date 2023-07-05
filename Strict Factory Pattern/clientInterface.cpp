#include <iostream>
#include "menu.h"
#include "PizzaFactory.cpp"
using namespace std;

int main()
{
    for (string pizzaName : menu)
    {
        Pizza *pizza = PizzaFactory::makePizza(pizzaName);
        cout << "Current Pizza Name: " << pizza->getName() << endl;
        cout << "Topping: " << pizza->getToppings() << endl;
        cout << endl;
    }

    /*
     ** cannot make pizza without Pizza Factory since the constructor is private **

    Pizza *pizzaCreatedWithoutFactory = new MargheritaPizza;
    */
}