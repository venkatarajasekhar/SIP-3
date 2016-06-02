#ifndef _SIP_URI_HEADER
#define _SIP_URI_HEADER

#include <string>
#include "SipCommon.h"

class CUserInfo
{
private:
	std::string m_strUser;
	std::string m_strPassword;
	std::string m_strToken;
public:
	CUserInfo(std::string user, std::string password, std::string token);
};

class CSipUri
{
private:
	CUserInfo m_clsUserInfo;

	std::string m_strHost;
	int m_iPort;

	SIP_URI_PARAMETERS m_clsUriParameters;
	SIP_HEADER_PARAMETERS m_clsHeaderParameters;

private:
	void setSipUri(CUserInfo & userInfo, std::string & host, std::string & port, SIP_URI_PARAMETERS & uriParams, SIP_HEADER_PARAMETERS & headerParams);

	void convertTelUrlToSipUri();  /* tel url형태를 sip uri형태로 변환 */

public:
	std::string ToString();		/* sip uri를 반환 */

};

#endif