/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:50:19 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/07 14:14:56 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;
		Weapon();
	public:
		void setType(const std::string& type);
		std::string getType(void);
		Weapon(const std::string& type);
		~Weapon();
};

#endif
