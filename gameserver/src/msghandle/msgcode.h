#ifndef H_GSMSGCODE_H_
#define H_GSMSGCODE_H_

namespace gameserver {
	enum {
		_LOGIN_TO_GAMESERVER_BEGINE			=	10000,

		_ROLE_TO_GAMESERVER_CHAT_BEGIN		=	10100
	};

	enum S_MsgType {
		CS_REQUEST_LOGIN_TO_GAMESERVER			=	_LOGIN_TO_GAMESERVER_BEGINE,	//	请求登陆

		CS_REQUEST_ROLE_INFO,														//	请求角色信息
		CS_REQUEST_FRIENDS_LIST,													//	请求好友列表
		CS_REQUEST_ADD_FRIEND,														//	请求添加好友

		CS_ROLE_TO_GAMESERVER_CHAT_SEND_ROLE	=	_ROLE_TO_GAMESERVER_CHAT_BEGIN,	//	聊天通信
		CS_ROLE_TO_GAMESERVER_CHAT_SEND_GUILD,
		CS_ROLE_TO_GAMESERVER_CHAT_SEND_WORLD,
		CS_ROLE_TO_GAMESERVER_CHAT_SEND_MSG											//	获取消息{离线，系统}
	};
}

#endif