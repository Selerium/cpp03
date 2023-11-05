/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:08:10 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 18:39:30 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;

	public:
		ClapTrap();
		ClapTrap(ClapTrap &c);
		ClapTrap(std::string name);
		ClapTrap &operator = (const ClapTrap &c);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		int getAttackDamage();
		int getEnergyPoints();
		int getHitPoints();
		void setAttackDamage(int n);
		void setEnergyPoints(int n);
		void setHitPoints(int n);
};

#endif