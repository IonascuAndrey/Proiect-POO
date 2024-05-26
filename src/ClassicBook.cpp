#include "../include/ClassicBook.h"

ClassicBook::ClassicBook(int price, std::string name, categories category, genres genre, std::string author, int nr_of_pages):
    Book(price, name, category, genre, author), m_nr_of_pages{nr_of_pages} {
};

std::ostream& operator<<(std::ostream& os, const ClassicBook& ab) {
    os << "Clasicbook: " <<ab.m_id<<" Price: "<< ab.m_price<<"\t"<< "Name = " << ab.m_name<< "\t" << "Category= "<<ab.m_category<< "\t" <<"Genre= "<<ab.m_genre<<"\t"<< "Publisher= "<<ab.m_author<<"\t"<<"Number of Pages="<< ab.m_nr_of_pages<<"\t"<<"Sold="<< (ab.sold?"True":"False")<<std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, ClassicBook& cb)
{
    is >> cb.m_price;
    is >> cb.m_name;
    std::string aux;
    is >> aux;
    if (aux=="NO_CATEGORY")
        cb.m_category=NO_CATEGORY;
    else if (aux=="SALE")
        cb.m_category=SALE;
    else if (aux=="NEW")
        cb.m_category=NEW;
    else if (aux=="BESTSELLERS")
        cb.m_category=BESTSELLERS;
    else if (aux=="RECOMMENDATION")
        cb.m_category=RECOMMENDATION;
    else if (aux=="AUTHORS_CHOICE")
        cb.m_category=AUTHORS_CHOICE;
    is>>aux;
    if (aux=="NO_GENRE")
        cb.m_genre=NO_GENRE;
    else if (aux=="FASHION")
        cb.m_genre=FASHION;
    else if (aux=="SCIENCE")
        cb.m_genre=SCIENCE;
    else if (aux=="FICTION")
        cb.m_genre=FICTION;
    else if (aux=="BUSINESS")
        cb.m_genre=BUSINESS;
    else if (aux=="FINANCIAL")
        cb.m_genre=FINANCIAL;
    is >> cb.m_author;
    is >> cb.m_nr_of_pages;
    return is;
}

void ClassicBook::Afisare(std::ostream& os)
{
    os << *this;
}

void ClassicBook::sellBook()
{
    this->sold = 1;
    std::cout<<"ClassicBook with the id " << this->m_id <<" has been sold!"<<std::endl;
}