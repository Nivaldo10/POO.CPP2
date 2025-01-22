// Figura 12.7: BasePlusCommissionEmployee.h
// Defini��o da classe BasePlusCommissionEmployee representa um empregado
// que recebe um sal�rio-base al�m da comiss�o.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padr�o C++
using std::string;

class BasePlusCommissionEmployee
{
public:
	BasePlusCommissionEmployee( const string &, const string &,
	    const string &, double = 0.0, double = 0.0, double = 0.0 );
		 
   void setFirstName( const string & ); // configura o nome
   string getFirstName() const; // retorna o nome

   void setLastName( const string & ); // configura o sobrenome
   string getLastName() const; // retorna o sobrenome

   void setSocialSecurityNumber( const string & ); // configura o SSN
   string getSocialSecurityNumber() const; // retorna o SSN

   void setGrossSales( double ); // configura a quantidade de vendas brutas
   double getGrossSales() const; // retorna a quantidade de vendas brutas
 
	void setCommissionRate( double ); // configura a taxa de comiss�o
	double getCommissionRate() const; // retorna a taxa de comiss�o
	
	void setBaseSalary( double ); // configura o sal�rio-base 
	double getBaseSalary() const; // retorna o sal�rio-base 
	
	double earnings() const; // calcula os rendimentos
	void print() const; // imprime o objeto BasePlusCommissionEmployee
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales; // vendas brutas semanais
	double commissionRate; // porcentagem da comiss�o
	double baseSalary; // sal�rio-base
}; // fim da classe BasePlusCommissionEmployee

#endif


