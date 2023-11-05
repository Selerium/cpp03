/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:29:04 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 20:35:42 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &c) : ClapTrap(c) {
	std::cout << "FragTrap copy created!" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &c) {
	if (this != &c) {
		this->setAttackDamage(c.getAttackDamage());
		this->setEnergyPoints(c.getEnergyPoints());
		this->setHitPoints(c.getHitPoints());
		this->setName(c.getName());
	}
	std::cout << "FragTrap copy assignment invoked!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	if (this->getName().length() == 0)
		std::cout << "FragTrap destroyed!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap has positively requested high fives!" << std::endl;
}