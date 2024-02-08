#include <set>
#include "Server.hpp"
#include "UserDB.hpp"
#include "ChannelDB.hpp"
#include "Message.hpp"
#include <string>

enum {

    ERR_NEEDMOREPARAMS = 461,
    ERR_ALREADYREGISTERED = 462,
    ERR_PASSWDMISMATCH = 464

};

void	HookFunctionPass(const Message& message)
{
	Server&			server = Server::GetInstance();
	UserDB&			userDB = UserDB::GetInstance();
	int				userId = message.GetUserId();

	if (message.GetParameters().size() == 0)
	{
		userDB.SendErrorMessageToUser(":Not enough parameters", userId, ERR_NEEDMOREPARAMS);
		return ;
	}
	if (userDB.GetLoginStatus(userId))
	{
		userDB.SendErrorMessageToUser(":Already registered", userId, ERR_ALREADYREGISTERED);
		return ;
	}

	const std::string&	inputPassword = message.GetParameters().at(0);

	if (server.GetServerPassword() != inputPassword)
	{
		userDB.SendErrorMessageToUser(":Wrong password", userId, ERR_PASSWDMISMATCH);
		return ;
	}

	userDB.SetLoginStatus(userId, true);
}
