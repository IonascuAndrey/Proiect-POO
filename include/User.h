#ifndef USER_H_
#define USER_H_
#include <iostream>
#include <list>
#include "Rental.h"
#include "Bike.h"

class User {
protected:
    static int counter;
private:
    const int m_id;
    float m_cnp;
    const std::string m_email;
    const std::string m_username;
    const std::string m_password;
    const std::string m_phone;
    std::list<Rental> m_rentals; 
    //Daca mai am timp sa implementez
    //double m_rentalFee = 0;
    //Vector de rentals ale acestei biciclete
    
public:
    // Constructor cu parametri impliciti 
    User(float cnp = 0, std::string m_email = "Unknown", std::string m_username = "Unknown", std::string m_password = "Unknown", std::string m_phone = "Unknown");
    // Getters
    float getId() const;
    float getKm() const;
    float getWeight() const;
    float getManufacturer() const;
    float getModelName() const;
    float getFMaterial() const;
    // Setters

    //Functionality methods
    void rentBike(Bike& bike, int km = 0);

    // Supraincarcarea operatorului << pentru afisare
    friend std::ostream& operator<<(std::ostream& os, const User& v);
    // Supraincarcarea operatorului >> pentru citire
    friend std::istream& operator>>(std::istream& is, User& v);
};

#endif /* USER_H_ */