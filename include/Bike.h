//Parent class for all the types of bikes

#ifndef BIKE_H_
#define BIKE_H_
#include <iostream>
#include <string>

class Bike {
private:
    static int counter;
    const int m_id;
    float m_km;
    float m_weight;
    std::string m_manufacturer;
    std::string m_model_name;
    int m_fmaterial;
    
public:
    // Constructor cu parametri impliciti 
    Bike(float km = 0, std::string consum = "", int battery_percentage = 100);
    
};

#endif /* BIKE_H_ */