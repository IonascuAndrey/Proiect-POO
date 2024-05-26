#ifndef ABOOK_H_
#define ABOOK_H_
#include <iostream>

#include "Book.h"
#include "enums/category_genre.h"

class AudioBook : public Book {
private:
    int m_length;
public:
    AudioBook(int price=0, std::string name="Unspecified", categories category=NO_CATEGORY, genres genre=NO_GENRE, std::string author="Unknown", int length=0);

    friend std::ostream& operator<<(std::ostream& os, const AudioBook& eb);
    friend std::istream& operator>>(std::istream& is, AudioBook& eb);

    void Afisare(std::ostream& os) override;
    void sellBook() override;
};

#endif /* ABOOK_H_ */