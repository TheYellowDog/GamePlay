#ifndef LUA_GLOBAL_H_
#define LUA_GLOBAL_H_

namespace gameplay
{

// Lua bindings for global functions.
int lua__strcmpnocase(lua_State* state);

void luaRegister_lua_Global();

}

#endif
