/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:58 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 11:40:05 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <cstdlib>
#include <time.h>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
    std::string Target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    void execute(Bureaucrat const & executor) const;
};