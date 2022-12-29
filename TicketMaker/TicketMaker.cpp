#include "TicketMaker.h"

TicketMaker* TicketMaker::m_pInstance = nullptr;

TicketMaker* TicketMaker::getInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new TicketMaker();
	}
	return m_pInstance;
}

int TicketMaker::getNextYicketNumber()
{
	++m_nTicket;

	return m_nTicket;
}

TicketMaker::TicketMaker()
	: m_nTicket(1000)
{

}
