#pragma once
class TicketMaker
{
public:
	static TicketMaker* getInstance();

	int getNextYicketNumber();

private:
	TicketMaker();

private:
	static TicketMaker* m_pInstance;

	int m_nTicket;
};

