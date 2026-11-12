#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  this->_type = "WrongCat";
  std::cout << "Default Wrongcat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  *this = other;
  std::cout << "Copy WrongCat constructor called animal" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  if (this != &other) {
    WrongAnimal::operator=(other);
  }
    return (*this);
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

void  WrongCat::makeSound(void) const {
  std::cout << "**Meow**" << std::endl;
}