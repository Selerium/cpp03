/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:37:56 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 14:41:09 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	std::string Name;
	
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap &c);
		DiamondTrap(std::string name);
		DiamondTrap &operator = (const DiamondTrap &c);
		~DiamondTrap();

		void attack(const std::string &target);
		void whoAmI();
};

#endif