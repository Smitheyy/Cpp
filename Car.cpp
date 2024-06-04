#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int vintage;
    int mileage;

public:
    void Display() {
        std::cout << "\nHere is your car's data:\n" << 
                    "brand: " << brand << '\n' << 
                    "model: " << model << '\n' <<
                    "vintage: " << vintage << '\n' <<
                    "mileage: " << mileage << '\n';

    }

    void Load() {
        std::cout << "\nEnter your car's data:\n";
        std::cout << "brand: ";
        std::cin >> brand;

        std::cout << "\nmodel: ";
        std::cin >> model;

        std::cout << "\nvintage: ";
        std::cin >> vintage;

        std::cout << "\nmileage(in kilometers): ";
        std::cin >> mileage;

    }
};


int main()
{
    Car car1, car2;

    car1.Load();
    car2.Load();

    car1.Display();
    car2.Display();


    return 0;
}