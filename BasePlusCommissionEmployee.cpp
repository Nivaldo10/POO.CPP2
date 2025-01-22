// Figura 12.8: BasePlusCommissionEmployee.cpp
// Defini��es de fun��o-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// defini��o da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
{
   firstName = first; // deve validar
   lastName = last; // deve validar
   socialSecurityNumber = ssn; // deve validar
   setGrossSales( sales ); // valida e armazena as vendas brutas
   setCommissionRate( rate ); // valida e armazena a taxa de comiss�o
   setBaseSalary( salary ); // valida e armazena sal�rio-base
} // fim do construtor BasePlusCommissionEmployee

// configura o nome
void BasePlusCommissionEmployee::setFirstName( const string &first )
{
   firstName = first; // deve validar
} // fim da fun��o setFirstName

// retorna o nome
string BasePlusCommissionEmployee::getFirstName() const
{
   return firstName;
} // fim da fun��o getFirstName

// configura o sobrenome
void BasePlusCommissionEmployee::setLastName( const string &last )
{
   lastName = last; // deve validar
} // fim da fun��o setLastName

// retorna o sobrenome
string BasePlusCommissionEmployee::getLastName() const
{
   return lastName;
} // fim da fun��o getLastName

// configura o SSN
void BasePlusCommissionEmployee::setSocialSecurityNumber(
   const string &ssn )
{
   socialSecurityNumber = ssn; // deve validar
} // fim da fun��o setSocialSecurityNumber

// retorna o SSN
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
} // fim da fun��o getSocialSecurityNumber

// configura a quantidade de vendas brutas
void BasePlusCommissionEmployee::setGrossSales( double sales )
{
   grossSales = ( sales < 0.0 ) ? 0.0 : sales;
} // fim da fun��o setGrossSales

// retorna a quantidade de vendas brutas
double BasePlusCommissionEmployee::getGrossSales() const
{
   return grossSales;
} // fim da fun��o getGrossSales

// configura a taxa de comiss�o
void BasePlusCommissionEmployee::setCommissionRate( double rate )
{
   commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
} // fim da fun��o setCommissionRate

// retorna a taxa de comiss�o
double BasePlusCommissionEmployee::getCommissionRate() const
{
   return commissionRate;
} // fim da fun��o getCommissionRate

// configura o sal�rio-base 
void BasePlusCommissionEmployee::setBaseSalary( double salary ) 
{ 
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary; 
} // fim da fun��o setBaseSalary 

// retorna o sal�rio-base 
double BasePlusCommissionEmployee::getBaseSalary() const 
{ 
   return baseSalary; 
} // fim da fun��o getBaseSalary 

// calcula os rendimentos 
double BasePlusCommissionEmployee::earnings() const 
{ 
   return baseSalary + ( commissionRate * grossSales ); 
} // fim da fun��o earnings 

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried commission employee: " << firstName << ' '
    	<< lastName << "\nsocial security number: " << socialSecurityNumber
    	<< "\ngross sales: " << grossSales
    	<< "\ncommission rate: " << commissionRate
      	<< "\nbase salary: " << baseSalary;
} // fim da fun��o prin
