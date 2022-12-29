#include <iostream>

#include "Singleton.h"

Singleton* Singleton::m_pInstance = nullptr;

Singleton* Singleton::getInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new Singleton();
	}
	return m_pInstance;
}

Singleton::Singleton()
{
	std::cout << "This is a singleton instance\n";
}