#include "../Headers/Car.h"
#include<iostream>
#include<string>

    /*Set Functions*/
    void Car::SetSeatCount(int count) {
       this->seatCount = count;
    }
    
    void Car::SetFuelType(std::string type) {
       this->fuelType = type;
    } 
    void Car::SetYear(int year) {
       this->year = year;
    }
    void Car::SetModel (std::string model) {
       this->model = model;
    }
    void Car::SetBrand(std::string brand) {
       this->brand = brand;
    }
    void Car::SetModelType(std::string type){
       this->modelType = type;
    }
    void Car::SetPrice(int price) {
        this->price = price;
    }
    
    
    
    /*Get Functions*/
    int Car::GetSeatCount() const {
        return this->seatCount;
    }
    std::string Car::GetFuelType() const {
        return this->fuelType;
    }
    int Car::GetYear() const {
        return this->year;
    }
    std::string Car::GetModel() const{
        return this->model;
    }
    std::string Car::GetBrand() const {
        return this->brand;
    }
    std::string Car::GetModelType() const {
        return this->modelType;
    }
    int Car::GetPrice() const {
        return this->price;
    }
    
