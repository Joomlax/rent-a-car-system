#include "../Headers/Customer.h"
#include<iostream>




void Customer::SetLicenseNumber(int number) {
    this->licenseNumber = number;
}


void Customer::SetName(std::string name) {
    this->name = name;
}

void Customer::SetSurname(std::string name) {
    this->surname = name;
}

int Customer::GetLicenseNumber() {
    return this->licenseNumber;

}

std::string Customer::GetName() {
    return this->name;
}

std::string Customer::GetSurname() {
    return this->surname;
}
