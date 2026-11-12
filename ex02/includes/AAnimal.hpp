#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
  protected:
    std::string _type;

  public:
    AAnimal();
    AAnimal(const AAnimal &other);
    AAnimal  &operator=(const AAnimal &other);
    virtual ~AAnimal();
    
    std::string getType(void) const;
    virtual void  makeSound(void) const = 0;
};

#endif