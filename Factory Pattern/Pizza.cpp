#include <string>
#include <iostream>

class Pizza
{
protected:
    std::string toppings;
    std::string name;
    virtual void cookPizza() = 0;

public:
    virtual std::string getToppings() = 0;
    virtual std::string getName()
    {
        return name;
    };
};

class MargheritaPizza : public Pizza
{
public:
    MargheritaPizza()
    {
        name = "Margherita";
        cookPizza();
    }

    std::string getToppings()
    {
        return toppings;
    }

private:
    void cookPizza()
    {
        std::cout << "making Margherita Pizza" << std::endl;
        toppings = "loads of cheese";
    }
};

class FarmhousePizza : public Pizza
{
public:
    FarmhousePizza()
    {
        name = "Farmhouse";
        cookPizza();
    }

    std::string getToppings()
    {
        return toppings;
    }

private:
    void cookPizza()
    {
        std::cout << "making Farmhouse Pizza" << std::endl;
        toppings = "loads of cheese and lot of veggies";
    }
};

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza()
    {
        name = "Pepperoni";
        cookPizza();
    }

    std::string getToppings()
    {
        return toppings;
    }

private:
    void cookPizza()
    {
        std::cout << "making Pepperoni Pizza" << std::endl;
        toppings = "loads of cheese and yummy pepperoni";
    }
};