// SimpleLua.cpp : �������̨Ӧ�ó������ڵ㡣
//

extern "C" 
{
#include "lua.h"
//#include "lstate.h"
}

int main(int argc, char* argv[])
{
	lua_State* l = lua_newstate();

	lua_newtable(l);


	return 1;
}

