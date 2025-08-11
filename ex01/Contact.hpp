/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:29:31 by mawako            #+#    #+#             */
/*   Updated: 2025/08/11 18:57:52 by mawako           ###   ########.fr       */
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
		void set(const std::string& fn, const std::string& ln,
				const std::string& nn, const std::string& ph,
				const std::string& sec);
		const std::string&	firstName()	const;
		const std::string&	lastName()	const;
		const std::string&	nickName()	const;
		const std::string&	phone()		const;
		const std::string&	secret()	const;
		bool			isEmpty()	const;
};

#endif
