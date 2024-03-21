#ifndef E_BIKE_H_
#define E_BIKE_H_
#include <iostream>
#include <string>

class E_Bike {
private:
    static int counter;
    const int m_id;
    float m_km;
    const std::string m_consum;
    int m_battery_percentage;
public:
    // Constructor cu parametri impliciti 
    E_Bike(float km = 0, std::string consum = "", int battery_percentage = 100);
    
};

#endif /* E_BIKE_H_ */