#include <string>
#include <map>

class CZoomAPI
{
private :
	std::string m_apiKey;
	std::string m_apiSecret;
	std::string m_dataType;		/* xml or json */

public:
	CZoomAPI(std::string dataType);
	std::string createAUser(std::map<std::string, std::string>params);
    std::string autoCreateAUser(std::map<std::string, std::string>params);
    std::string custCreateAUser(std::map<std::string, std::string>params);
    std::string preProvisioningSSOUser(std::map<std::string, std::string>params);
    std::string deleteAUser(std::map<std::string, std::string>params);
    std::string listUsers(std::map<std::string, std::string>params);
    std::string listPendingUsers(std::map<std::string, std::string>params);
    std::string getUserInfo(std::map<std::string, std::string>params);
    std::string getUserInfoByEmailAddressAndLogintType(std::map<std::string, std::string>params);
    std::string updateUserInfo(std::map<std::string, std::string>params);
    std::string updateUserPassword(std::map<std::string, std::string>params);
    std::string setUserAssistant(std::map<std::string, std::string>params);
    std::string deleteUserAssistant(std::map<std::string, std::string>params);
    std::string revokeSSOToken(std::map<std::string, std::string>params);
    std::string deleteUserPermanently(std::map<std::string, std::string>params);
    std::string uploadUserPicture(std::map<std::string, std::string>params);
    std::string checkUserEmail(std::map<std::string, std::string>params);
};