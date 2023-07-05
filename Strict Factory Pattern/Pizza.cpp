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
    friend class PizzaFactory;

public:
    std::string getToppings()
    {
        return toppings;
    }

protected:
    void cookPizza()
    {
        std::cout << "making Margherita Pizza" << std::endl;
        toppings = "loads of cheese";
    }

private:
    MargheritaPizza()
    {
        name = "Margherita";
        cookPizza();
    }
};

class FarmhousePizza : public Pizza
{
    friend class PizzaFactory;

public:
    std::string getToppings()
    {
        return toppings;
    }

protected:
    void cookPizza()
    {
        std::cout << "making Farmhouse Pizza" << std::endl;
        toppings = "loads of cheese and lot of veggies";
    }

private:
    FarmhousePizza()
    {
        name = "Farmhouse";
        cookPizza();
    }
};

class PepperoniPizza : public Pizza
{
    friend class PizzaFactory;

public:
    std::string getToppings()
    {
        return toppings;
    }

protected:
    void cookPizza()
    {
        std::cout << "making Pepperoni Pizza" << std::endl;
        toppings = "loads of cheese and yummy pepperoni";
    }

private:
    PepperoniPizza()
    {
        name = "Pepperoni";
        cookPizza();
    }
};