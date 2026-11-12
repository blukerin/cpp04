#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("None") {
  std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const  WrongAnimal &other) {
  std::cout << "Copy WrongAnimal constructor called" << std::endl;
  *this = other;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other) {
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return (this->_type);
}

void  WrongAnimal::makeSound(void) const {
  std::cout << "** FAKE WRONGANIMAL SOUNDS**" << std::endl;
}