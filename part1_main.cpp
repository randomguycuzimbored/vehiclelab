// Classes Lab, Part 1: Vehicle
// Save this file as main.cpp next to your Vehicle.h and Vehicle.cpp.
// Build:  g++ -std=c++20 -Wall -Wextra -Werror main.cpp Vehicle.cpp -o part1
// Run it, then type a test number (1-5) and press Enter.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Vehicle.h"

int main()
{
    // Set the precision for showing prices with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    int input;
    std::cin >> input;

    if (input == 1)
    {
        Vehicle defaultVehicle;
        defaultVehicle.Display();
    }
    else if (input == 2)
    {
        Vehicle customVehicle1("Tesla", "Model S", 2019, 46122, 42);
        customVehicle1.Display();
        Vehicle customVehicle2("Chrysler", "New Yorker", 1984, 2000, 100423);
        customVehicle2.Display();
    }
    else if (input == 3)
    {
        Vehicle customVehicle1("Chrysler", "New Yorker", 1984, 2000, 100423);
        Vehicle customVehicle2("COP3504C", "Moped", 2019, 2200, 45);
        std::cout << "Price of the vehicles: $"
                  << customVehicle1.GetPrice() + customVehicle2.GetPrice() << std::endl;
    }
    else if (input == 4)
    {
        Vehicle customVehicle1("Razor", "Scooter", 2019, 39, 950);
        std::cout << customVehicle1.GetYearMakeModel() << std::endl;
    }
    else if (input == 5)
    {
        Vehicle muscleCar("Ford", "Mustang", 1968, 82550, 71000);
        Vehicle electric("Toyota", "Prius", 2014, 27377, 12);
        Vehicle suv("Mazda", "CX5", 2018, 28449, 11047);

        std::vector<Vehicle> vehicles;

        // TODO: Add the three Vehicle objects to the vector using the push_back() function
        vehicles.push_back(muscleCar);
        vehicles.push_back(electric);
        vehicles.push_back(suv);
        // TODO: Print out each Vehicle by looping through the vector and calling the Display() function for each Vehicle object
        for(std::size_t i=0; i<vehicles.size(); i++){
            vehicles.at(i).Display();
        }
    }

    return 0;
}
