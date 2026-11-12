#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
  this->_type = "Cat";
  this->_brain = new Brain();
  std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  *this = other;
  std::cout << "Copy cat constructor called animal" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    Animal::operator=(other);
    this->_brain = other._brain;
  }
  return (*this);
}

Cat::~Cat() {
  delete(this->_brain);
  std::cout << "Cat destructor called" << std::endl;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow!" << std::endl;
}