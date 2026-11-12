#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal() {
  this->_type = "Dog";
  this->_brain = new Brain();
  std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) {
  *this = other;
  std::cout << "Copy dog constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    AAnimal::operator=(other);
    this->_brain = other._brain;
  }
  return (*this);
}

Dog::~Dog() {
  delete(this->_brain);
  std::cout << "Dog destructor called" << std::endl;
}

void  Dog::makeSound(void) const {
  std::cout << "Bark!" << std::endl;
}