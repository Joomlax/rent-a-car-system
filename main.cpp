#include <iostream>
#include "Headers/Vehicle.h"
#include "Headers/Car.h"
#include "Headers/Motorcycle.h"
#include "Headers/Customer.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
int main() {
    Customer cust;
    Car car1;
    Motorcycle moto1;
    
    std::string name, attribute,searching;
    int number;
    
    
    std::cout<<"Welcome to rent a car system."<<std::endl;
    std::cout<<"You are a owner of the rent a car shop."<<std::endl;
    
    
    std::cout<<"Please enter your name:";
    std::cin>>name;
    cust.SetName(name);
    std::cout<<"Please enter your name:";
    std::cin>>name;
    cust.SetSurname(name);
    std::cout<<"Please enter license number:";
    std::cin>>number;
    cust.SetLicenseNumber(number);
    //STL
    std::cout<<"Press 1 for the generate easiest password (Not Functional) or any number to continue";
    std::cin>>number;
    
    //Customer Entry
    if(number==1) {
        const char alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        std::vector<char> pass(20);
        std::generate(pass.begin(),pass.end(), [alphabet](){
            return alphabet[std::rand()%32];
        });
        
        std::sort(pass.begin(),pass.end());
        std::reverse(pass.begin(), pass.end()+number/2);
        for(auto x : pass) {
            std::cout<<x;
        }
    }
    
    int a = 123;
    while(a!=9) {
        std::cout<<"\n----------"<<std::endl;
        std::cout<<"Please enter what you will enter the system:"<<std::endl;
        std::cout<<"1---> Car"<<std::endl;
        std::cout<<"2---> Motorcycle"<<std::endl;
        std::cout<<"9---> Exit"<<std::endl;
        std::cin>>a;
        
        
        //CARS
        if(a==1) {
            
            
            
            std::cout<<"Here is default cars:"<<std::endl;
            //STL
            //Reading
            std::ifstream dbCars2;
            dbCars2.open("Cars.txt");
            std::string CarsTxt;
            
            if(dbCars2.is_open()) {
                while (getline(dbCars2, CarsTxt)) {
                    std::cout<<CarsTxt<<std::endl<<std::endl;
                    
                }
                //STL
                std::copy(CarsTxt.begin(),CarsTxt.end(),searching.begin());
            }
            
            dbCars2.close();
            //Reading
            
            std::cout<<"Press 1 to add new car: "<<std::endl;
            std::cout<<"Press 2 to return menu: "<<std::endl;
            std::cout<<"Press 3 to search car model: "<<std::endl;
            
            std::cin>>number;
            if(number==1) {
                std::cout<<"Enter seat count:";
                std::cin>>number;
                car1.SetSeatCount(number);
                
                std::cout<<"Enter fuel type:";
                std::cin>>attribute;
                car1.SetFuelType(attribute);;
                
                std::cout<<"Enter Year:";
                std::cin>>number;
                car1.SetYear(number);
                
                std::cout<<"Enter Model:";
                std::cin>>attribute;
                car1.SetModel(attribute);
                
                std::cout<<"Enter Brand:";
                std::cin>>attribute;
                car1.SetBrand(attribute);
                
                std::cout<<"Enter Model Type:";
                std::cin>>attribute;
                car1.SetModelType(attribute);
                
                std::cout<<"Enter Price Per Day:";
                std::cin>>number;
                car1.SetPrice(number);
                
                //Writing
                
                std::ofstream dbCars;
                dbCars.open("Cars.txt", std::ios::app); 
                dbCars << "Seat Count: "<<car1.GetSeatCount()<<" ";
                dbCars << "Fuel Type: "<<car1.GetFuelType()<<" ";
                dbCars << "YEAR: "<<car1.GetYear()<<" ";
                dbCars << "MODEL: "<<car1.GetModel()<<" ";
                dbCars << "BRAND: "<<car1.GetBrand()<<" ";
                dbCars << "MODEL TYPE: "<<car1.GetModelType()<<" ";
                dbCars << "PRICE: "<<car1.GetPrice()<<"$"<<" ";
                dbCars << "-------------"<<" ";
                dbCars.close();
                //Writing
                std::cout<<car1.GetBrand()<<" Added!"<<std::endl;
            }else if(number==3){
                //STL
                 std::cout<<"Please enter car model for search:";
                std::cin>>name;
                std::size_t found = searching.find_first_of(name);
                if(found){
                    std::cout<<"Yes you have "<<name<<" model car in your shop.";
                }else{
                    std::cout<<"No you do not have "<<name<<" model car in your shop.";
                }
                
            }
             
            
            
            //Motors
        }else if(a==2) {
            
            std::cout<<"Here is default motorcycles:"<<std::endl;
            
            
            
            
            //Reading
            std::ifstream dbMotors2;
            dbMotors2.open("Motors.txt");
            std::string MotorsTxt;
            if(dbMotors2.is_open()) {
                while(!(dbMotors2.eof())) {
                    
                    dbMotors2>>MotorsTxt;
                    std::cout<<MotorsTxt<<" ";    
                    
                }
            }
            dbMotors2.close();
            //Reading
            
            
            
            
            std::cout<<"Press 1 to add new motorcycle: "<<std::endl;
            std::cout<<"Press 2 to return menu: "<<std::endl;
            
            std::cin>>number;
            if(number==1) {
                std::cout<<"Enter seat count:";
                std::cin>>number;
                moto1.SetSeatCount(number);
                
                std::cout<<"Enter fuel type:";
                std::cin>>attribute;
                moto1.SetFuelType(attribute);;
                
                std::cout<<"Enter Year:";
                std::cin>>number;
                moto1.SetYear(number);
                
                std::cout<<"Enter Model:";
                std::cin>>attribute;
                moto1.SetModel(attribute);
                
                std::cout<<"Enter Brand:";
                std::cin>>attribute;
                moto1.SetBrand(attribute);
                
                std::cout<<"Enter Model Type:";
                std::cin>>attribute;
                moto1.SetModelType(attribute);
                
                std::cout<<"Enter Price Per Day:";
                std::cin>>number;
                moto1.SetPrice(number);
                
                //Writing
                
                std::ofstream dbMotors;
                dbMotors.open("Motors.txt", std::ios::app); 
                dbMotors << "Seat Count: "<<moto1.GetSeatCount()<<" ";
                dbMotors << "Fuel Type: "<<moto1.GetFuelType()<<" ";
                dbMotors << "YEAR: "<<moto1.GetYear()<<" ";
                dbMotors << "MODEL: "<<moto1.GetModel()<<" ";
                dbMotors << "BRAND: "<<moto1.GetBrand()<<" ";
                dbMotors << "MODEL TYPE: "<<moto1.GetModelType()<<" ";
                dbMotors << "PRICE: "<<moto1.GetPrice()<<"$"<<" ";
                dbMotors << "-------------"<<" ";
                dbMotors.close();
                //Writing
                std::cout<<moto1.GetBrand()<<" Added!"<<std::endl;
            }
             
        //SEARCH
        }
    }
    
    
    return 0;
}
