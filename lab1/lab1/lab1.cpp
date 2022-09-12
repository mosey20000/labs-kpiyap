#include <iostream>
#include <conio.h>

#include "classes.h"

int main()
{
    int detailsNumber = 0;
    while (true)
    {
        std::cout << "Please, enter number of the details: ";
        fflush(stdin);
        std::cin >> detailsNumber;
        if (detailsNumber > 0)
            break;
    }


    product* prods = new product[detailsNumber];
    int id = 0;
    for (int i = 0; i < detailsNumber; i++)
    {
        std::string name;
        prods[i].set_id(id++);
        std::cout << id - 1 << ". Enter name of the product: ";
        fflush(stdin);
        std::cin >> name;
        prods[i].set_name(name);
        fflush(stdin);
        double cost;
        std::cout << "Enter cost of the product:";
        std::cin >> cost;
        prods[i].set_cost(cost);
    }
    std::cout << std::endl;

    for (int i = 0; i < detailsNumber; i++)
    {
        prods[i].put_data();
    }
    std::cout << std::endl;

    std::cout << "Do you want to change price of any details? Press 'N' to exit." << std::endl;
    if (_getch() == 'n') return 0;
    else
    {
        salesman man;
        int num;
        while (true)
        {
            std::cout << "Enter ID of detail that you want to edit : ";
            fflush(stdin);
            std::cin >> num;
            if (num >= 0) break;
        }

        double cost;
        while (true)
        {
            std::cout << "Enter price of the product: ";
            std::cin >> cost;
            fflush(stdin);
            if (cost < 0)
                std::cout << "Error data. Try again." << std::endl;
            else
                break;
        }

        man.change_cost(prods[num], cost);
    }

    for (int i = 0; i < detailsNumber; i++)
    {
        prods[i].put_data();
    }
    std::cout << std::endl;

    delete[] prods;
    _getch();

    return 0;
}
