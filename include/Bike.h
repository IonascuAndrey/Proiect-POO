//Parent class for all the types of bikes

#ifndef BIKE_H_
#define BIKE_H_
#include <iostream>
#include <string>

class Bike {
protected:
    static int counter;
private:
    int m_id;
    float m_km;
    float m_weight;
    std::string m_manufacturer;
    std::string m_model_name;
    int m_fmaterial; // 1 for iron, 2 for Aluminum, 3 for Carbom, 0 for Unknown
    
public:
    // Constructor cu parametri impliciti 
    Bike::Bike(float km = 0, float weight = -1, std::string manufacturer = "Unknown", std::string model_name = "Unknown", int fmaterial = 0);
    // Getters
    float getId() const;
    float getKm() const;
    float getWeight() const;
    float getManufacturer() const;
    float getModelName() const;
    float getFMaterial() const;
    // Setters
    void setX(float x);
    void setY(float y);

    // Supraincarcarea operatorului << pentru afisare
    friend std::ostream& operator<<(std::ostream& os, const Bike& v);
    // Supraincarcarea operatorului >> pentru citire
    friend std::istream& operator>>(std::istream& is, Bike& v);
};

#endif /* BIKE_H_ */