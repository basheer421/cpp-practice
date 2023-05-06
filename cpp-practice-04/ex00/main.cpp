/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 05:52:29 by bammar            #+#    #+#             */
/*   Updated: 2023/04/07 11:50:46 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{	
	std::cout << "Test 1:\n";
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete (meta);
		delete (i);
		delete (j);
	}
	std::cout << "Test 2:\n";
	{
		const Animal *meta = new Animal();
		const Animal *dog=  new Dog();
		const Animal *dog2=  new Dog();
		const Animal *cat = new Cat();

		meta->makeSound();
		dog->makeSound();
		std::cout << dog->getType() << "\n";
		dog->makeSound();
		dog2->makeSound();
		cat->makeSound();
		std::cout << cat->getType() << "\n";
		dog2->makeSound();
		meta->makeSound();
		std::cout << meta->getType() << "\n";
		delete meta;delete dog;delete dog2;delete cat;
	}
	std::cout << "Test 3:\n";
	{
		const WrongAnimal *a = new WrongAnimal();
		const WrongAnimal *c = new WrongCat();

		a->makeSound();
		c->makeSound();
		a->makeSound();
		c->makeSound();
		delete a;delete c;
	}
	return (0);
}
