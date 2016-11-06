#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

// defines Account class
class Account{
	private:
		string nickName;
	public:
		// default constructor
		Account()
		{
			nickName = "";
		}
		// constructor 2
		Account(string nick)
		{
			nickName = nick;
		}
		// set nickName
		void setNickName(string nickName)
		{
			this->nickName = nickName;
		}
		// get the nickName
		string getNickName() const
		{
			return nickName;
		}
};

#endif
