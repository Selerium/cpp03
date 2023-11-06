/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:12:13 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 14:40:22 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &c) : ClapTrap(c) {
	std::cout << "ScavTrap copy created!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &c) {
	if (this != &c) {
		this->setAttackDamage(c.getAttackDamage());
		this->setEnergyPoints(c.getEnergyPoints());
		this->setHitPoints(c.getHitPoints());
		this->setName(c.getName());
	}
	std::cout << "ScavTrap copy assignment invoked!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	if (this->getName().length() == 0)
		std::cout << "ScavTrap destroyed!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->getName().length() == 0)
		std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName()
			<< " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << std::endl;
}