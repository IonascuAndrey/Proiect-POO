#ifndef BMX_H_
#define BMX_H_
#include <iostream>
#include <string>

class BMX {
private:
    double m_wheelsize;
public:
    // Constructor cu parametri impliciti 
    BMX(std::string name_ = "", int age_ = -1, float wage_ = 0.0f, double m_wheelsize;) : Person(name_, age_), wage{wage_} {}
    
};

#endif /* BMX_H_ */