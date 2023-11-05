/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:00:51 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 21:37:51 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <ostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name), FragTrap(Name), ScavTrap(Name) {
	this->Name = Name;
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	std::cout << "DiamondTrap " << this->getName() << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &c) : ClapTrap(c), FragTrap(c), ScavTrap(c) {
	this->setName(c.getName());
	this->setAttackDamage(c.getAttackDamage());
	this->setEnergyPoints(c.getEnergyPoints());
	this->setHitPoints(c.getHitPoints());
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &c) {
	if (this != &c) {
		this->setName(c.getName());
		this->setAttackDamage(c.getAttackDamage());
		this->setEnergyPoints(c.getEnergyPoints());
		this->setHitPoints(c.getHitPoints());
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	if (this->getName().length() == 0)
		std::cout << "DiamondTrap destroyed!" << std::endl;
	else
		std::cout << "DiamondTrap " << this->getName() << " destroyed!" << std::endl;

}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << this->getName() << std::endl
			<< "ClapTrap name: " << this->getName() + "_clap_name" << std::endl;
}