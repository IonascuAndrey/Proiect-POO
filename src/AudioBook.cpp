#include "../include/AudioBook.h"

AudioBook::AudioBook(int price, std::string name, categories category, genres genre, std::string author, int length):
    Book(price, name, category, genre, author), m_length{length} {
};

std::ostream& operator<<(std::ostream& os, const AudioBook& ab) {
    os << "AudioBook: " <<ab.m_id<<" Price: "<< ab.m_price<<"\t"<< "Name = " << ab.m_name<< "\t" << "Category= "<<ab.m_category<< "\t" <<"Genre= "<<ab.m_genre<<"\t"<< "Publisher= "<<ab.m_author<<"\t"<<"Length in minutes="<< ab.m_length<<"\t"<<"Sold="<< (ab.sold?"True":"False")<<std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, AudioBook& eb)
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
    is >> eb.m_length;
    return is;
}

void AudioBook::Afisare(std::ostream& os)
{
    os << *this;
}

void AudioBook::sellBook()
{
    this->sold = true;
    std::cout<<"AudioBook with the id " << this->m_id <<" has been sold!"<<std::endl;
}