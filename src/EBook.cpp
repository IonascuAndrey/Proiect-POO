#include "../include/EBook.h"

EBook::EBook(int price, std::string name, categories category, genres genre, std::string author, int size):
    Book(price, name, category, genre, author), m_size{size} {
};

std::ostream& operator<<(std::ostream& os, const EBook& eb) {
    os << "EBook: " <<eb.m_id<<" Price: "<< eb.m_price<<"\t"<< "Name = " << eb.m_name<< "\t" << "Category= "<<eb.m_category<< "\t" <<"Genre= "<<eb.m_genre<<"\t"<< "Publisher= "<<eb.m_author<<"\t"<<"Size in KB="<< eb.m_size<<"\t"<<"Sold="<< (eb.sold?"True":"False")<<std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, EBook& eb)
{
    is >> eb.m_price;
    is >> eb.m_name;
    std::string aux;
    is >> aux;
    if (aux=="NO_CATEGORY")
        eb.m_category=NO_CATEGORY;
    else if (aux=="SALE")
        eb.m_category=SALE;
    else if (aux=="NEW")
        eb.m_category=NEW;
    else if (aux=="BESTSELLERS")
        eb.m_category=BESTSELLERS;
    else if (aux=="RECOMMENDATION")
        eb.m_category=RECOMMENDATION;
    else if (aux=="AUTHORS_CHOICE")
        eb.m_category=AUTHORS_CHOICE;
    is>>aux;
    if (aux=="NO_GENRE")
        eb.m_genre=NO_GENRE;
    else if (aux=="FASHION")
        eb.m_genre=FASHION;
    else if (aux=="SCIENCE")
        eb.m_genre=SCIENCE;
    else if (aux=="FICTION")
        eb.m_genre=FICTION;
    else if (aux=="BUSINESS")
        eb.m_genre=BUSINESS;
    else if (aux=="FINANCIAL")
        eb.m_genre=FINANCIAL;
    is >> eb.m_author;
    is >> eb.m_size;
    return is;
}

void EBook::Afisare(std::ostream& os)
{
    os << *this;
}
void EBook::sellBook()
{
    this->sold = true;
    std::cout<<"EBook with the id " << this->m_id <<" has been sold!"<<std::endl;
}

//Implementare rule of 5
EBook::EBook(const EBook& toCopy) : Book(toCopy)
{
    m_size = toCopy.m_size;
}