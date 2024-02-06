#pragma once

enum Numeric
{
    ERR_NEEDMOREPARAMS = 461,
    ERR_ALREADYREGISTERED = 462,
    ERR_PASSWDMISMATCH = 464,

    ERR_NONICKNAMEGIVEN = 431,
    ERR_ERRONEUSNICKNAME = 432,
    ERR_NICKNAMEINUSE = 433,
    ERR_NICKCOLLISION = 436,

    ERR_NOORIGIN = 409,

    ERR_NOSUCHSERVER = 402,

    ERR_NOOPERHOST = 491,
    RPL_YOUREOPER = 381, 

    ERR_NOSUCHCHANNEL = 403,
    ERR_TOOMANYCHANNELS = 405,
    ERR_BADCHANNELKEY = 475,
    ERR_BANNEDFROMCHAN = 474,
    ERR_CHANNELISFULL = 471,
    ERR_INVITEONLYCHAN = 473,
    ERR_BADCHANMASK = 476,
    RPL_TOPIC = 332,
    RPL_TOPICWHOTIME = 333,
    RPL_NAMREPLY = 353,
    RPL_ENDOFNAMES = 366,

    ERR_NOTONCHANNEL = 442,
    ERR_CHANOPRIVSNEEDED = 482,
    RPL_NOTOPIC = 331,
    RPL_TOPIC = 332,
    RPL_TOPICWHOTIME = 333,

    RPL_INVITING = 341,
    ERR_NEEDMOREPARAMS = 461,
    ERR_NOSUCHCHANNEL = 403,
    ERR_NOTONCHANNEL = 442,
    ERR_USERONCHANNEL = 443,

    ERR_USERNOTINCHANNEL = 441,

    ERR_BADCHANMASK = 476,

//connect
    ERR_NOSUCHSERVER = 402,
    ERR_NEEDMOREPARAMS = 461,
    ERR_NOPRIVILEGES = 481,
    ERR_NOPRIVS = 723,

//privmsg
    ERR_NOSUCHNICK = 401,
    ERR_NOSUCHSERVER = 402,
    ERR_CANNOTSENDTOCHAN = 404,
    ERR_TOOMANYTARGETS = 407,
    ERR_NORECIPIENT = 411,
    ERR_NOTEXTTOSEND = 412,
    ERR_NOTOPLEVEL = 413,
    ERR_WILDTOPLEVEL = 414,
    RPL_AWAY = 301,


//WhoIS
    ERR_NOSUCHNICK = 401,
    ERR_NOSUCHSERVER = 402,
    ERR_NONICKNAMEGIVEN = 431,
    RPL_ENDOFWHOIS = 318,

    RPL_WHOISCERTFP = 276,
    RPL_WHOISREGNICK = 307,
    RPL_WHOISUSER = 311,
    RPL_WHOISSERVER = 312,
    RPL_WHOISOPERATOR = 313,
    RPL_WHOISIDLE = 317,
    RPL_WHOISCHANNELS = 319,
    RPL_WHOISSPECIAL = 320,
    RPL_WHOISACCOUNT = 330,
    RPL_WHOISACTUALLY = 338,
    RPL_WHOISHOST = 378,
    RPL_WHOISMODES = 379,
    RPL_WHOISSECURE = 671,
    RPL_AWAY = 301,

    RPL_WELCOME = 001,
    RPL_YOURHOST = 002,
    RPL_CREATED = 003,
    RPL_MYINFO = 004,
    RPL_ISUPPORT = 005
}

