#pragma once
#include "Monkey.h"

int lua_infoBox(lua_State* L);
int lua_errorBox(lua_State* L);
int lua_httpGet(lua_State* L);
int lua_httpPost(lua_State* L);
int lua_printnoline(lua_State* L);
int lua_setTitle(lua_State* L);
int lua_setRemoteTitle(lua_State* L);
size_t writefunc(void* ptr, size_t size, size_t nmemb, std::string* s);