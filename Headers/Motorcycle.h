#pragma once
#include "Vehicle.h"
#include <map>
class Motorcycle : public Vehicle{
private:
    int seatCount = 0;
    std::string fuelType = "";
    int year = 0;
    std::string model = "";
    std::string brand = "";
    std::string modelType = "";
    int price = 0;
    int dayCount =0;

public:
    virtual void SetSeatCount(int count) override ;
    virtual void SetFuelType(std::string type) override;
    virtual void SetYear(int year) override;
    virtual void SetModel (std::string model) override;
    virtual void SetBrand(std::string brand) override;
    virtual void SetModelType(std::string type) override;
    virtual void SetPrice(int price) override;
   
    
    int GetSeatCount() const override;
    std::string GetFuelType() const override;
    int GetYear() const override;
    std::string GetModel() const override;
    std::string GetBrand() const override;
    std::string GetModelType() const override;
    int GetPrice() const override;
   
};
