// Figura 12.9: fig12_09.cpp
// Testando a classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// defini��o da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

int main()
{
   // instancia o objeto BasePlusCommissionEmployee
	BasePlusCommissionEmployee
    	employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

   // configura a formata��o de sa�da de ponto flutuante
   cout << fixed << setprecision( 2 );

 // obt�m os dados do empregado comissionado
   cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << employee.getBaseSalary() << endl;

	employee.setBaseSalary( 1000 ); // configura o sal�rio-base

	cout << "\nUpdated employee information output by print function: \n"
    	<< endl;
	employee.print(); // exibe as novas informa��es do empregado

 // exibe os rendimentos do empregado
	cout << "\n\nEmployee�s earnings: $" << employee.earnings() << endl;

	return 0;
} // fim de main
