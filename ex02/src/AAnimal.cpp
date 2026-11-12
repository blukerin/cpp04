#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : _type("None") {
  std::cout << "Default Aanimal constructor called" << std::endl;
}

AAnimal::AAnimal(const  AAnimal &other) {
  std::cout << "Copy Aanimal constructor called" << std::endl;
  *this = other;
}

AAnimal  &AAnimal::operator=(const AAnimal &other) {
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

AAnimal::~AAnimal() {
  std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const {
  return (this->_type);
}

