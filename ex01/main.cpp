/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:50:16 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 20:33:10 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap upgradedHassan("Hassan");
	ScavTrap upgradedAmmar("Ammar");

	upgradedAmmar.attack("Hassan");
	upgradedHassan.takeDamage(upgradedAmmar.getAttackDamage());
	upgradedHassan.attack("Ammar");
	upgradedAmmar.takeDamage(upgradedHassan.getAttackDamage());
}