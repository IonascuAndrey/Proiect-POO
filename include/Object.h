//Parent class for all the types of bikes

#ifndef OBJECT_H_
#define OBJECT_H_
#include <iostream>
#include <string>
#include "enums/category_genre.h"


class Object {

protected:
    // Constructor cu parametri impliciti 
    // Getters
    virtual int getId() const = 0;
    virtual int getPrice() const = 0;
    virtual std::string getProductName() const = 0;
    // Setters
    virtual void changePrice(int x) = 0;

    //Functionality methods
    virtual void changeCategory(categories NewCategory) = 0;
    virtual void changeGenre(genres NewGenre) = 0;
public:
    virtual void Afisare(std::ostream& os) = 0;
};

#endif /* OBJECT_H_ */