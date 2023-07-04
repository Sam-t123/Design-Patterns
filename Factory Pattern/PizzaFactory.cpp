#include <string>
#include "Pizza.cpp"

class PizzaFactory
{
public:
    static Pizza *makePizza(std::string pizzaName)
    {
        if (pizzaName == "Margherita")
            return new MargheritaPizza;
        else if (pizzaName == "Farmhouse")
            return new FarmhousePizza;
        else if (pizzaName == "Pepperoni")
            return new PepperoniPizza;

        return new MargheritaPizza;
    }
};