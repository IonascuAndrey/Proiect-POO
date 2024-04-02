#include "../include/E_Bike.h"

E_Bike::E_Bike(std::string manufacturer, std::string model_name, float km, float weight, int fmaterial, bool availability, int consum, int battery_percentage) : Bike(km, weight, manufacturer, model_name, fmaterial, availability), m_consum{consum}, m_battery_percentage{battery_percentage}
{
 //Constructor body   
}

void E_Bike::Afisare(std::ostream& os)
{
    os << *this;
}

std::ostream& operator<<(std::ostream& os, const E_Bike& eb) {
    os << "Bike: " <<eb.m_id<<" Type: "<< eb.type<<"\t"<< "Manufacturer = " << eb.m_manufacturer<< "\t" << "Model= "<<eb.m_model_name<< "\t" <<"Frame Material= "<<eb.m_fmaterial<<"\t"<< "Availability= "<<eb.m_availability<<std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, E_Bike& eb)
{
    is >> eb.m_manufacturer;
    is >> eb.m_model_name;
    is >> eb.m_km;
    is >> eb.m_weight;
    is >> eb.m_fmaterial;
    is >> eb.m_availability;
    is >> eb.m_consum;
    is >> eb.m_battery_percentage;
    return is;
}