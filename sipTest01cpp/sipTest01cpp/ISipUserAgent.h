
class ISipUserAgent
{
public:
	virtual bool RecvRequest() = 0;
	virtual bool RecvResponse() = 0;
};