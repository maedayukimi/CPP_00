/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:28:51 by mawako            #+#    #+#             */
/*   Updated: 2025/08/11 18:26:12 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
	private:
		Contact _data[8];
		int			_size;
		int			_next;
		static std::string	adjust(const std::string& s);
	public:
		PhoneBook();
		void		add(const Contact& c);
		int		size() const;
		const Contact*	get(int idx) const;
		void		printTable() const;
};

#endif
