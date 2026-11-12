#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() {
  std::cout << "Creating the animals\n" << std::endl;
  const Animal* animals[10];

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }
  std::cout << "\nDestroying animals" << std::endl;
  for (int i = 0; i < 10; i++) {
    delete (animals[i]);
  }
  return (0);
}