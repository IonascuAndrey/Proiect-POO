#include "../include/Bike.h"

int Bike::counter=0;

Bike::Bike(float km, float weight, std::string manufacturer, std::string model_name, int fmaterial) : 
    m_km{km}, m_weight{weight}, m_manufacturer{manufacturer}, m_model_name{model_name}, m_fmaterial{fmaterial}, m_id{Bike::counter++} {
}