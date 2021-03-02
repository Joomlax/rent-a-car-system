#pragma once
#include <string>
class Vehicle {
private:
    
public:    
    virtual void SetSeatCount(int count) = 0;
    virtual void SetFuelType(std::string type) = 0;
    virtual void SetYear(int year) = 0;
    virtual void SetModel(std::string model) = 0;
    virtual void SetBrand(std::string brand) = 0;
    virtual void SetModelType(std::string type) = 0;
    virtual void SetPrice(int price) = 0;
    
    
    
    virtual int GetSeatCount() const = 0;
    virtual std::string GetFuelType() const = 0;
    virtual int GetYear() const = 0;
    virtual std::string GetModel() const = 0;
    virtual std::string GetBrand() const = 0;
    virtual std::string GetModelType() const = 0;
    virtual int GetPrice() const = 0;
    
    
};    

