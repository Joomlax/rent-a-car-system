#include "../Headers/Motorcycle.h"
#include<iostream>
#include<string>

 /*Set Functions*/
    void Motorcycle::SetSeatCount(int count) {
       this->seatCount = count;
    }
    
    void Motorcycle::SetFuelType(std::string type) {
       this->fuelType = type;
    } 
    void Motorcycle::SetYear(int year) {
       this->year = year;
    }
    void Motorcycle::SetModel (std::string model) {
       this->model = model;
    }
    void Motorcycle::SetBrand(std::string brand) {
       this->brand = brand;
    }
    void Motorcycle::SetModelType(std::string type){
       this->modelType = type;
    }
    void Motorcycle::SetPrice(int price) {
        this->price = price;
    }
    
    
    /*Get Functions*/
    int Motorcycle::GetSeatCount() const {
        return this->seatCount;
    }
    std::string Motorcycle::GetFuelType() const {
        return this->fuelType;
    }
    int Motorcycle::GetYear() const {
        return this->year;
    }
    std::string Motorcycle::GetModel() const{
        return this->model;
    }
    std::string Motorcycle::GetBrand() const {
        return this->brand;
    }
    std::string Motorcycle::GetModelType() const {
        return this->modelType;
    }
    int Motorcycle::GetPrice() const{
        return this->price;
    }
    
