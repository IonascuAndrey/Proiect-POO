#ifndef PBOOK_H_
#define PBOOK_H_
#include <iostream>

#include "Book.h"
#include "enums/category_genre.h"

class ClassicBook : public Book {
private:
    int m_nr_of_pages;
public:
    ClassicBook(int price=0, std::string name="Unspecified", categories category=NO_CATEGORY, genres genre=NO_GENRE, std::string author="Unknown", int m_nr_of_pages=0);

    friend std::ostream& operator<<(std::ostream& os, const ClassicBook& eb);
    friend std::istream& operator>>(std::istream& is, ClassicBook& eb);

    void Afisare(std::ostream& os) override;
    void sellBook() override;
};

#endif /* ABOOK_H_ */