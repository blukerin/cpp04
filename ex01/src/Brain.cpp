#include "../includes/Brain.hpp"

Brain::Brain() {
  std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
  std::cout << "Copy Brain constructor called" << std::endl;
  *this = other;
}

Brain &Brain::operator=(const Brain &other) {
  if (this != &other) {
    for (int i = 0; i < 100; i++) {
      this->_ideas[i] = other._ideas[i];
    }
  }
  return (*this);
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}