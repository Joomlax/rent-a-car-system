#pragma once
#include "Car.h"
#include "Motorcycle.h"
#include <string>
class Customer : public Car, public Motorcycle{
   
private:
    std::string name, surname;
    int licenseNumber;
    
public:
    
    void SetLicenseNumber(int number);
    int GetLicenseNumber();
    
    void SetName(std::string names);
    std::string GetName();
    
    void SetSurname(std::string names);
    std::string GetSurname();
};
