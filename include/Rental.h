#ifndef RENTAL_H_
#define RENTAL_H_
#include <iostream>
#include "Bike.h"

class Rental {
protected:
    static int counter;
private:
    const int m_id;
    Bike& m_rentedBike;
    int m_rentingUser;
    int m_km;
     
public:
    // Constructor cu parametri impliciti 
    Rental(Bike &bike, int km);
    // Getters
    float getId() const;
    int getBike() const;
    int getUser() const;
    // Setters

    //Functionality methods

    // Supraincarcarea operatorului << pentru afisare
    friend std::ostream& operator<<(std::ostream& os, const Rental& r);
    // Supraincarcarea operatorului >> pentru citire
    friend std::istream& operator>>(std::istream& is, Rental& r);
};

#endif /* RENTAL_H_ */