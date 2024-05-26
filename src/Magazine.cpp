#include "../include/Magazine.h"

int Magazine::counter = 0;

Magazine::Magazine(int price, std::string name, categories category, genres genre, std::string publisher):
    m_price{price}, m_name{name}, m_category{category}, m_genre{genre}, m_id{Magazine::counter++}, m_publisher{publisher} {
};

void Magazine::sellMagazine() {
    this->sold = 1;
    std::cout<<"Magazine with the id " << this->m_id <<" has been sold!"<<std::endl;
}

int Magazine::getId() const
{
    return this->m_id;
}
int Magazine::getPrice() const
{
    return this->m_price;
}
std::string Magazine::getProductName() const {
    return this->m_name;
}
void Magazine::changePrice(int x) {
    this->m_price = x;
}

void Magazine::changeCategory(categories NewCategory) {
    //TODO verificare input, momentan avem incredere
    this->m_category=NewCategory;
}
void Magazine::changeGenre(genres NewGenre){
    //TODO verificare input, momentan avem incredere
    this->m_genre=NewGenre;
}
void Afisare(std::ostream& os);

std::ostream& operator<<(std::ostream& os, Object& Object);

void Magazine::Afisare(std::ostream& os)
{
    os << *this;
}
void Magazine::DisplayMagazineCounter()
{
    std::cout<<Magazine::counter;
}

std::ostream& operator<<(std::ostream& os, const Magazine& magazine) {
    os << "Magazine: " <<magazine.m_id<<" Price: "<< magazine.m_price<<"\t"<< "Name = " << magazine.m_name<< "\t" << "Category= "<<magazine.m_category<< "\t" <<"Genre= "<<magazine.m_genre<<"\t"<< "Publisher= "<<magazine.m_publisher<<"\t"<<"Sold="<< (magazine.sold?"True":"False")<<std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, Magazine& magazine)
{
    is >> magazine.m_price;
    is >> magazine.m_name;
    std::string aux;
    is >> aux;
    if (aux=="NO_CATEGORY")
        magazine.m_category=NO_CATEGORY;
    else if (aux=="SALE")
        magazine.m_category=SALE;
    else if (aux=="NEW")
        magazine.m_category=NEW;
    else if (aux=="BESTSELLERS")
        magazine.m_category=BESTSELLERS;
    else if (aux=="RECOMMENDATION")
        magazine.m_category=RECOMMENDATION;
    else if (aux=="AUTHORS_CHOICE")
        magazine.m_category=AUTHORS_CHOICE;
    is>>aux;
    if (aux=="NO_GENRE")
        magazine.m_genre=NO_GENRE;
    else if (aux=="FASHION")
        magazine.m_genre=FASHION;
    else if (aux=="SCIENCE")
        magazine.m_genre=SCIENCE;
    else if (aux=="FICTION")
        magazine.m_genre=FICTION;
    else if (aux=="BUSINESS")
        magazine.m_genre=BUSINESS;
    else if (aux=="FINANCIAL")
        magazine.m_genre=FINANCIAL;
    is >> magazine.m_publisher;
    return is;
}