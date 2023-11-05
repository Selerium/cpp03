/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:50:16 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/05 20:35:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap megaHassan("Hassan");
	FragTrap megaJensen("Jensen");

	megaHassan.getHitPoints();
	megaJensen.getHitPoints();
	megaHassan.getAttackDamage();
	megaJensen.getAttackDamage();
	megaHassan.getEnergyPoints();
	megaJensen.getEnergyPoints();
	megaHassan.highFivesGuys();
	megaJensen.highFivesGuys();
}