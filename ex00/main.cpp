/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:50:16 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 19:04:24 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap hassan("Hassan");
	ClapTrap saim("Saim");
	hassan.setAttackDamage(54);
	hassan.setHitPoints(100);
	saim.setAttackDamage(10);
	saim.setHitPoints(300);
	hassan.attack("Saim");
	saim.takeDamage(54);
	saim.attack("Hassan");
	hassan.takeDamage(10);
	hassan.beRepaired(100);
}