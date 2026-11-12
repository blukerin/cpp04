#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main() {
  std::cout << "Creating the animals\n" << std::endl;
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
   
  std::cout << "\nType of animals" << std::endl;
  std::cout << "j is a " << j->getType() << std::endl;
  std::cout << "i is a " << i->getType() << std::endl;
  std::cout << "meta is a " << meta->getType() << std::endl;

  std::cout << "\nSounds" << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  std::cout << "\nDestroying animals" << std::endl;
  delete (meta);
  delete (j);
  delete (i);

  std::cout << "\n\nWrong animals" << std::endl;
  const WrongAnimal* wrong_meta = new WrongAnimal();
  const WrongAnimal* wrong_i = new WrongCat();

  std::cout << "\nTipos de animales creados:" << std::endl;
  std::cout << "wrong_meta is a " << wrong_meta->getType()  << std::endl;
  std::cout << "wrong_i is a " << wrong_i->getType() << std::endl;

  std::cout << "\nSounds" << std::endl;
  wrong_i->makeSound();
  wrong_meta->makeSound();

  std::cout << "\nDestroying animals" << std::endl;
  delete (wrong_meta);
  delete (wrong_i);
  return (0);
}