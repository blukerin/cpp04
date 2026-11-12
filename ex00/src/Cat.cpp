#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
  this->_type = "Cat";
  std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
  *this = other;
  std::cout << "Copy cat constructor called animal" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  return (*this);
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow!" << std::endl;
}