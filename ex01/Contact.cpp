/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:28:57 by mawako            #+#    #+#             */
/*   Updated: 2025/08/17 14:16:11 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

bool	Contact::setFirstName(const std::string& fn)
{
	if (fn.empty())
		return (false);
	_firstName = fn;
	return (true);
}

bool	Contact::setLastName(const std::string& ln)
{
	if (ln.empty())
		return (false);
	_lastName = ln;
	return (true);
}

bool	Contact::setNickName(const std::string& nn)
{
	if (nn.empty())
		return (false);
	_nickName = nn;
	return (true);
}

bool	Contact::setPhone(const std::string& ph)
{
	if (ph.empty())
		return (false);
	_phone = ph;
	return (true);
}

bool	Contact::setSecret(const std::string& sec)
{
	if (sec.empty())
		return (false);
	_secret = sec;
	return (true);
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
