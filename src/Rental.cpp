#include "../include/Rental.h"

int Rental::counter=0;

Rental::Rental(Bike& bike, int km): m_rentedBike{bike}, m_km{km}, m_id{Rental::counter++} {};

