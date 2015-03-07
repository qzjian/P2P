#ifndef __Exception__
#define __Exception__

#define EXCEPTION_MESSAGE_MAXLEN 256
#include "string.h"

class Exception
{
private:
	char m_ExceptionMessage[EXCEPTION_MESSAGE_MAXLEN];
public:
	Exception(char *msg)
	{
		strncpy(m_ExceptionMessage, msg, EXCEPTION_MESSAGE_MAXLEN);
	}
	
	char *GetMessage()
	{
		return m_ExceptionMessage;
	}
};

#endif