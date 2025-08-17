/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:29:31 by mawako            #+#    #+#             */
/*   Updated: 2025/08/17 14:16:15 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string _firstName, _lastName, _nickName, _phone, _secret;
	public:
		Contact();
		bool	setFirstName(const std::string& fn);
		bool	setLastName(const std::string& ln);
		bool	setNickName(const std::string& nn);
		bool	setPhone(const std::string& ph);
		bool	setSecret(const std::string& sec);
		const std::string&	firstName()	const;
		const std::string&	lastName()	const;
		const std::string&	nickName()	const;
		const std::string&	phone()		const;
		const std::string&	secret()	const;
};

#endif
