#include <iostream>
#include "include/E_Bike.h"
#include "include/User.h"
#include "include/Rental.h"
#include "include/Parking.h" 

// class Student {
// private:
//     int numarMatricol;
//     std::string nume;
//     int nota;
// public:
//     Student(int numarMatricol = -1, std::string nume = "", int nota = -1)
//     {
//         this->numarMatricol = numarMatricol;
//         this->nume = nume;
//         this->nota = nota;
//     }
//     //Constructor de copiere
//     Student(const Student& other)
//     {
//         this->numarMatricol = other.numarMatricol;
//         this->nume = other.nume;
//         this->nota = other.nota;
//     }
//     Student& operator=(const Student& other) {
//         if(this==&other)
//             return *this;
        
//         this->numarMatricol = other.numarMatricol;
//         this->nume = other.nume;
//         this->nota = other.nota;
//         return *this;
//     }
//     int GetNota(void) const;
//     ///TODO celelalte getere

//     friend std::ostream& operator<<(std::ostream& os, const Student& student);
//     friend std::istream& operator>>(std::istream& is, Student& student);
//     //Destructor
//     // ~Student()
//     // {
//     //     std::cout << "~Student\n";
//     // }

// private:
//     //metode private
// };


// int Student::GetNota(void) const
// {
//     return nota;
// }

// std::ostream& operator<<(std::ostream& os, const Student& s) {
//     os << "Student: "<< "nrMat = " << s.numarMatricol<< "\t" << "nume= "<<s.nume<< "\t" <<"Nota= "<<s.nota<<std::endl;
//     return os;
// }

// std::istream& operator>>(std::istream& is, Student& s)
// {
//     is >> s.numarMatricol;
//     is >> s.nume;
//     is >> s.nota;

//     return is;
// }

// // =====================================

// class Curs {
// private:
//     std::list<Student> studenti;
//     std::string numeCurs;

// public:
//     Curs(std::list<Student> studenti, std::string numeCurs)
//     {
//         this->studenti = studenti;
//         this->numeCurs = numeCurs;
//     }
//     Curs(const Curs& other)
//     {
//         this->studenti = other.studenti;
//         this->numeCurs = other.numeCurs;
//     }

//     Curs& operator=(const Curs& other) {
//         if(this==&other)
//             return *this;
        
//         this->studenti = other.studenti;
//         this->numeCurs = other.numeCurs;
//         return *this;
//     }

//     std::string getNumeCurs(void) const {
//         return numeCurs;
//     }

//     void InscrieStudent(const Student& student) {
//         studenti.push_back(student);
//     }

//     std::vector<Student> getStudentiPromovati(void) const {
//         std::vector<Student> studentiPromovati;

//         for(auto it = studenti.begin(); it != studenti.end(); it++) 
//         {
//             Student crt = *it;
//             if(crt.GetNota()>= 5) {
//                 studentiPromovati.push_back(crt);
//             }
//         }


//         return studentiPromovati;
//     }

//     friend std::ostream& operator<<(std::ostream& os, const Curs& curs);
// };

// std::ostream& operator<<(std::ostream& os, const Curs& curs) 
// {
//     int cnt = 0;
//     os << "Afisam studentii la cursul " << ":" <<curs.numeCurs<<std::endl;
//     for(auto it=curs.studenti.begin(); it != curs.studenti.end(); it++)
//     {
//         const Student& student = *it;
//         os << student;
//     }
//     os << "----\n";
//     return os;
// }

int main() {
    E_Bike bike = E_Bike();
    return 0;
}