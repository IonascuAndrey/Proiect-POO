#include "../include/Bike.h"

int Bike::counter=0;

Bike::Bike(float km, float weight, std::string manufacturer, std::string model_name, int fmaterial, bool availability) : 
    m_km{km}, m_weight{weight}, m_manufacturer{manufacturer}, m_model_name{model_name}, m_fmaterial{fmaterial}, m_id{Bike::counter++}, m_availability{availability} {
};

void Bike::rentBike(void) {
    if(this->m_availability = false) {
        std::cout << "Bike " << this->m_id << " is not available for rent." << std::endl;
    } else {
        std::cout << "Bike " << this->m_id << " has been rented." << std::endl;
        this->m_availability = false;
    }
}
void Bike::returnBike(void) {
    if(this->m_availability = false) {
        std::cout << "Bike " << this->m_id << " has been returned" << std::endl;
        this->m_availability = true;
    } else {
        std::cout << "Bike " << this->m_id << " was not rented." << std::endl;
    }
}
std::ostream &operator<<(std::ostream &os, Bike &bike)
{
    bike.Afisare(os);
    return os;
}
