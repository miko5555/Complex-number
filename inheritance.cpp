#include <iostream>
using namespace std;

class Erankjun
{
private:



};

class Qarakusi
{

protected:
	int m_nErkarutjun;
public:
	Qarakusi(int koxm )
	:m_nErkarutjun(0)
	{
	m_nErkarutjun = koxm;
	cout<<"Qarakusu makeres " << makeres()<<endl;
	cout<<"Qarakusu paragic " << paragic()<<endl;
	}
	int paragic()
	{
	return m_nErkarutjun * 4;
	}
	int makeres()
	{
	return m_nErkarutjun * m_nErkarutjun;
	}
};

class Uxankjun: public Qarakusi

{

public:
	int m_nLajnutjun;
public:
	Uxankjun(int erk, int lajn)
	:m_nLajnutjun(0)
	,Qarakusi(3)
	{
	m_nErkarutjun = erk;
	m_nLajnutjun = lajn;
	cout<<"Uxankjan makeres " << makeres()<<endl;
	cout<<"Uxankjan paragic " << paragic()<<endl;
	}

	int paragic()
	{
	return (m_nErkarutjun + m_nLajnutjun) * 2;
	}
	int makeres()
	{
	return m_nErkarutjun * m_nLajnutjun;
	}
	
	

};

class Shrgan
{

private:



};

class Elips
{

private:


};

int main(){

Qarakusi(3);
Uxankjun(3,5);





}



