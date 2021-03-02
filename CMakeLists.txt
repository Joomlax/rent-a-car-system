cmake_minimum_required(VERSION 2.6)
project(rentacar)

set( MAIN main.cpp)


add_executable(rentacar ${MAIN}
                        Headers/Vehicle.h
                        Headers/Car.h
                        Headers/Motorcycle.h
                        Headers/Customer.h
                        Implements/Vehicle.cpp
                        Implements/Customer.cpp
                        Implements/Motorcycle.cpp
                        Implements/Car.cpp
                        build/Cars.txt
                        build/Motors.txt
                        )

install(TARGETS rentacar RUNTIME DESTINATION bin)
