/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:12:54 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 19:31:10 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and destructors:
ClapTrap::ClapTrap() : Name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap " << this->Name << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &c) : Name(c.Name), HitPoints(c.HitPoints), EnergyPoints(c.EnergyPoints), AttackDamage(c.AttackDamage) {
	std::cout << "ClapTrap copy created!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &c) {
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	if (this != &c) {
		this->Name = c.Name;
		this->AttackDamage = c.AttackDamage;
		this->EnergyPoints = c.EnergyPoints;
		this->HitPoints = c.HitPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	if (this->getName().length() == 0)
		std::cout << "ClapTrap destroyed!" << std::endl;
	else
		std::cout << "ClapTrap " << this->getName() << " destroyed!" << std::endl;
}

//---------------------------------------------------------------------------------------------------------------------------------------------
// Member function definitions:

void ClapTrap::attack(const std::string &target) {
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName()
			<< " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap " << this->getName()
			<< " takes " << amount
			<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->setHitPoints(this->getHitPoints() + amount);
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName()
			<< " repairs itself for " << amount
			<< " hitpoints!" << std::endl;
}

//---------------------------------------------------------------------------------------------------------------------------------------------
// Accessors:

std::string ClapTrap::getName() const {
	return (this->Name);
}

int ClapTrap::getAttackDamage() const {
	return (this->AttackDamage);
}

int ClapTrap::getHitPoints() const {
	return (this->HitPoints);
}

int ClapTrap::getEnergyPoints() const {
	return (this->EnergyPoints);
}

void ClapTrap::setName(std::string Name) {
	this->Name = Name;
}

void ClapTrap::setAttackDamage(int n) {
	this->AttackDamage = n;
}

void ClapTrap::setEnergyPoints(int n) {
	this->EnergyPoints = n;
}

void ClapTrap::setHitPoints(int n) {
	this->HitPoints = n;
}