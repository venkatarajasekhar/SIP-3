#include <string>
#include <list>
#include <map>

typedef std::list<CUriParameters> SIP_URI_PARAMETERS;
typedef std::list<CHeaderParameters> SIP_HEADER_PARAMETERS;

class CUriParameters
{
private:

	std::map<std::string, std::string> m_mapUriParams;
public:

};

class CHeaderParameters
{
private:
	std::string m_strName;
	std::string m_strValue;

public:

};
