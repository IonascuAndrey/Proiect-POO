#ifndef EBOOK_H_
#define EBOOK_H_
#include <iostream>

#include "Book.h"
#include "enums/category_genre.h"
//TODO Rule of 5, exceptii
class EBook : public Book {
private:
    int m_size;
public:
//Constructir
    EBook(int price=0, std::string name="Unspecified", categories category=NO_CATEGORY, genres genre=NO_GENRE, std::string author="Unknown", int size=0);
    //Constructor copiere
    EBook(const EBook& toCopy);
    // operator= atribuire prin copiere
    EBook& operator=(const EBook& toCopy);
    // constructor de mutare
    EBook(EBook&& other);
    // operator= atribuire prin mutare
    EBook& operator=(EBook&& other);
    //Destructor
    ~EBook();
    //The rule of 5

    friend std::ostream& operator<<(std::ostream& os, const EBook& eb);
    friend std::istream& operator>>(std::istream& is, EBook& eb);

    void Afisare(std::ostream& os) override;

    void sellBook() override;
};

#endif /* EBOOK_H_ */