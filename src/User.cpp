#include "../include/User.h"

int User::counter = 0;

User::User(float cnp, std::string email, std::string username, std::string password, std::string phone): m_cnp{cnp}, m_email{email}, m_username{username}, m_password{password}, m_phone{phone}, m_id{User::counter++} {};

void User::rentBike(Bike& bike, int km) {
    Rental rental = Rental(bike, km);
    this->m_rentals.push_back(rental);
    bike.addKm(km);
}