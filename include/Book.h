#ifndef BOOK_H_
#define BOOK_H_

#include "Object.h"
class Book : public Object {
public:
    static int book_counter;
    const int m_id;
    int m_price;
    std::string m_name;
    categories m_category;
    genres m_genre; 
    std::string m_author;
    bool sold=false;
    int nr_of_readers;
    std::string *readers; // Date alocate dinamic
    //Constructor
    Book(int price=0, std::string name="Unspecified", categories category=NO_CATEGORY, genres genre=NO_GENRE, std::string author="Unknown");

    //Constructor copiere
    Book(const Book& toCopy);
    // operator= atribuire prin copiere
    Book& operator=(const Book& toCopy);
    // constructor de mutare
    Book(Book&& toCopy);
    // operator= atribuire prin mutare
    Book& operator=(Book&& toCopy);
    //Destructor
    ~Book();
    virtual void sellBook()=0;
    int getId() const override;
    int getPrice() const override;
    std::string getProductName() const override;
    // setter
    void changePrice(int x) override;

    //Functionality methods
    void changeCategory(categories NewCategory) override;
    void changeGenre(genres NewGenre) override;
    static void DisplayBookCounter();
};

#endif /* BOOK_H_ */