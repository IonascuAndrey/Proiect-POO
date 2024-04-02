#ifndef E_BIKE_H_
#define E_BIKE_H_
#include <iostream>
#include <string>
#include "Bike.h"

class E_Bike: public Bike {
private:
    const std::string type = "E_Bike";
    int m_consum;
    int m_battery_percentage;
public:
    // Constructor cu parametri impliciti 
    E_Bike(std::string manufacturer = "Unknown",std::string model_name = "Unknown", float km = 0, float weight = -1, int fmaterial = 0, bool m_availability=true, int consum=0, int battery_percentage=100);

    // Supraincarcarea operatorului << pentru afisare
    friend std::ostream& operator<<(std::ostream& os, const E_Bike& eb);
    // Supraincarcarea operatorului >> pentru citire
    friend std::istream& operator>>(std::istream& is, E_Bike& eb);

    void Afisare(std::ostream& os) override;
    
};

#endif /* E_BIKE_H_ */