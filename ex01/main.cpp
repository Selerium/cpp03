/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:50:16 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 19:36:45 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap hassan("Hassan");
	ClapTrap saim("Saim");

	hassan.setAttackDamage(54);
	hassan.setHitPoints(100);
	saim.setAttackDamage(10);
	saim.setHitPoints(300);

	hassan.attack("Saim");
	saim.takeDamage(hassan.getAttackDamage());
	saim.attack("Hassan");
	hassan.takeDamage(saim.getAttackDamage());
	hassan.beRepaired(100);

	ScavTrap upgradedHassan("Hassan");
	ScavTrap upgradedAmmar("Ammar");

	upgradedAmmar.attack("Hassan");
	upgradedHassan.takeDamage(upgradedAmmar.getAttackDamage());
	upgradedHassan.attack("Ammar");
	upgradedAmmar.takeDamage(upgradedHassan.getAttackDamage());
}