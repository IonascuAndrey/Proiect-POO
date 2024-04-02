//Parent class for all the types of bikes

#ifndef BIKE_H_
#define BIKE_H_
#include <iostream>
#include <string>

class Bike {
protected:
    static int counter;
    const int m_id;
    float m_km;
    /* const */ float m_weight;
    /* const */ std::string m_manufacturer;
    /* const */ std::string m_model_name;
    /* const */ int m_fmaterial; // 1 for iron, 2 for Aluminum, 3 for Carbom, 0 for Unknown
    bool m_availability;
    //Daca mai am timp sa implementez
    //double m_rentalFee = 0;
    //Vector de rentals ale acestei biciclete
    
public:
    // Constructor cu parametri impliciti 
    Bike(float km = 0, float weight = -1, std::string manufacturer = "Unknown", std::string model_name = "Unknown", int fmaterial = 0, bool m_availability=true);
    // Getters

    int getId() const { return m_id;}
    float getKm() const { return m_km;}
    float getWeight() const { return m_weight;}
    std::string getManufacturer() const { return m_manufacturer;}
    std::string getModelName() const { return m_model_name;}
    int getFMaterial() const { return m_fmaterial;}
    // Setters
    void addKm(float x) { this->m_km=this->m_km+x; };

    //Functionality methods
    bool chechAvailability(void) {
        return m_availability;
    }
    virtual void rentBike(void);
    virtual void returnBike(void);
    virtual void Afisare(std::ostream& os) = 0;

    friend std::ostream& operator<<(std::ostream& os, Bike& bike);
};

#endif /* BIKE_H_ */