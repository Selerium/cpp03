/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:05:50 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/06 14:40:26 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(ScavTrap &c);
		ScavTrap(std::string name);
		ScavTrap &operator = (const ScavTrap &c);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &target);
};

#endif