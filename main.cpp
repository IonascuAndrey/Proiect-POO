#include <iostream>
#include <list>
#include <vector>


#include "include/Magazine.h"
#include "include/EBook.h"
#include "include/AudioBook.h" 
#include "include/ClassicBook.h" 



int main() {
    std::vector<Object*> objects;
    objects.push_back(new Magazine());
    objects.push_back(new EBook());
    objects.push_back(new AudioBook());
    objects.push_back(new ClassicBook());
    for(Object *object:objects) {
        object->Afisare(std::cout);
    }
    return 0;
}