#include "../include/Book.h"

int Book::book_counter = 0;

Book::Book(int price, std::string name, categories category, genres genre, std::string author):
    m_price{price}, m_name{name}, m_category{category}, m_genre{genre}, m_id{Book::book_counter++}, m_author{author} {
};

int Book::getId() const
{
    return this->m_id;
}
int Book::getPrice() const
{
    return this->m_price;
}
std::string Book::getProductName() const {
    return this->m_name;
}
void Book::changePrice(int x) {
    this->m_price = x;
}

void Book::changeCategory(categories NewCategory) {
    //TODO verificare input, momentan avem incredere
    this->m_category=NewCategory;
}
void Book::changeGenre(genres NewGenre){
    //TODO verificare input, momentan avem incredere
    this->m_genre=NewGenre;
}

void Book::DisplayBookCounter()
{
    std::cout<<Book::book_counter;
}
void Book::sellBook()
{
    this->sold = true;
    std::cout<<"Book with the id " << this->m_id <<" has been sold!"<<std::endl;
}

//Constructor de copiere
Book::Book(const Book& toCopy):m_id{toCopy.m_id}
{
    m_price = toCopy.m_price;
    m_name = toCopy.m_name;
    m_category = toCopy.m_category;
    m_genre = toCopy.m_genre;
    m_author = toCopy.m_author;
    nr_of_readers=toCopy.nr_of_readers;
    if(nr_of_readers != 0)
    {
        readers=new std::string[nr_of_readers];
        for(int i = 0; i < nr_of_readers; i++)
            readers[i] = toCopy.readers[i];
    }
}
// operator= atribuire prin copiere
Book& Book::operator=(const Book& toCopy)
{
    if(this != &toCopy)
    {
        m_price = toCopy.m_price;
        m_name = toCopy.m_name;
        m_category = toCopy.m_category;
        m_genre = toCopy.m_genre;
        m_author = toCopy.m_author;
        nr_of_readers=toCopy.nr_of_readers;
        if(nr_of_readers != 0)
        {
            delete[] readers;
            readers = new std::string[nr_of_readers];
            for(int i = 0; i < nr_of_readers; i++)
                readers[i] = toCopy.readers[i];
        }
    }
    return *this;
}

// constructor de mutare
Book::Book(Book&& toCopy) : m_price{toCopy.m_price}, m_name{toCopy.m_name}, m_category{toCopy.m_category}, m_genre{toCopy.m_genre}, m_id{toCopy.m_id}, m_author{toCopy.m_author}, nr_of_readers{toCopy.nr_of_readers}, readers{toCopy.readers}
{
    toCopy.m_price = 0;
    toCopy.m_name = "";
    toCopy.m_category = NO_CATEGORY;
    toCopy.m_genre = NO_GENRE;
    toCopy.m_author = "";
    toCopy.nr_of_readers = -1;
    toCopy.readers = nullptr;
}

// operator= atribuire prin mutare
Book& Book::operator=(Book&& toCopy)
{
    if(this != &toCopy)
    {
        m_price=toCopy.m_price;
        m_name=toCopy.m_name;
        m_category=toCopy.m_category;
        m_genre=toCopy.m_genre;
        m_author=toCopy.m_author;
        nr_of_readers = toCopy.nr_of_readers;
        readers = toCopy.readers;

        toCopy.m_price = 0;
        toCopy.m_name = "";
        toCopy.m_category = NO_CATEGORY;
        toCopy.m_genre = NO_GENRE;
        toCopy.m_author = "";
        toCopy.nr_of_readers = -1;
        toCopy.readers = nullptr;
    }
    return *this;
}

Book::~Book()
{
    std::cout << "~Book()\n";
    delete[] readers;
}