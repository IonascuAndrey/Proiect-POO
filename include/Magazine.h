#ifndef MAGAZINE_H_
#define MAGAZINE_H_

#include "Object.h"

class Magazine : public Object {
private:
    static int counter;
    const int m_id;
    int m_price;
    std::string m_name;
    categories m_category;
    genres m_genre; 
    std::string m_publisher;
    bool sold=false;
public:
    Magazine(int price=0, std::string name="Unspecified", categories category=NO_CATEGORY, genres genre=NO_GENRE, std::string publisher="Unknown");

    void sellMagazine();
    int getId() const override;
    int getPrice() const override;
    std::string getProductName() const override;
    // setter
    void changePrice(int x) override;

    //Functionality methods
    void changeCategory(categories NewCategory) override;
    void changeGenre(genres NewGenre) override;
    friend std::ostream& operator<<(std::ostream& os, const Magazine& magazine);
    // Supraincarcarea operatorului >> pentru citire
    friend std::istream& operator>>(std::istream& is, Magazine& magazine);

    void Afisare(std::ostream& os) override;

    static void DisplayMagazineCounter();
};

#endif /* MAGAZINE_H_ */