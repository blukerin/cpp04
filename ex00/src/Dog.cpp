#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
  this->_type = "Dog";
  std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
  *this = other;
  std::cout << "Copy dog constructor called animal" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  return (*this);
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}

void  Dog::makeSound(void) const {
  std::cout << "Bark!" << std::endl;
}