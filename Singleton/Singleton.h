#pragma once

class Singleton
{
public:
	static Singleton* getInstance();

private:
	Singleton();

private:
	static Singleton* m_pInstance;
};