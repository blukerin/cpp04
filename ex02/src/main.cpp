#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() {
  std::cout << "\nCreating animals\n" << std::endl;

  AAnimal* dog = new Dog();
  AAnimal* cat = new Cat();
  //AAnimal* creature = new Animal();

  std::cout << "\nAnimal sounds\n" << std::endl;
  std::cout << "Dog sound: ";
  dog->makeSound();
  std::cout << "Cat sound: ";
  cat->makeSound();

  std::cout << "\nDestroying animals\n" << std::endl;
  delete (dog);
  delete (cat);
  return (0);
}