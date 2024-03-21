#include "../include/E_Bike.h"

E_Bike::E_Bike(float km = 0, std::string consum = "", int battery_percentage = 100) : m_id(E_Bike::counter), m_km(km), m_consum(consum), m_battery_percentage(battery_percentage) 
{
    
}