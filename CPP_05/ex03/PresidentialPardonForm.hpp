/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:52 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 00:17:05 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
    std::string Target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
    void execute(Bureaucrat const & executor) const;
};