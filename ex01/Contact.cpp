/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:28:57 by mawako            #+#    #+#             */
/*   Updated: 2025/08/12 16:36:51 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void	Contact::set(const std::string& fn, const std::string& ln,
			const std::string& nn, const std::string& ph,
			const std::string& sec)
{
	_firstName = fn;
	_lastName = ln,
	_nickName = nn;
	_phone = ph;
	_secret = sec;
}

const std::string&	Contact::firstName() const
{
	return (_firstName);
}

const std::string&	Contact::lastName() const
{
	return (_lastName);
}

const std::string&	Contact::nickName() const
{
	return (_nickName);
}

const std::string&	Contact::phone() const
{
	return (_phone);
}

const std::string&	Contact::secret() const
{
	return (_secret);
}

bool			Contact::isEmpty() const
{
	return (_firstName.empty() && _lastName.empty() && _nickName.empty()
		&& _phone.empty() && _secret.empty());
}
