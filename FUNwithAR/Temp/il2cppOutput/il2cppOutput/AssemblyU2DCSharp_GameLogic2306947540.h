#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic
struct  GameLogic_t2306947540  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameLogic::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject GameLogic::startUI
	GameObject_t1756533147 * ___startUI_3;
	// UnityEngine.GameObject GameLogic::restartUI
	GameObject_t1756533147 * ___restartUI_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_startUI_3() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___startUI_3)); }
	inline GameObject_t1756533147 * get_startUI_3() const { return ___startUI_3; }
	inline GameObject_t1756533147 ** get_address_of_startUI_3() { return &___startUI_3; }
	inline void set_startUI_3(GameObject_t1756533147 * value)
	{
		___startUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___startUI_3, value);
	}

	inline static int32_t get_offset_of_restartUI_4() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___restartUI_4)); }
	inline GameObject_t1756533147 * get_restartUI_4() const { return ___restartUI_4; }
	inline GameObject_t1756533147 ** get_address_of_restartUI_4() { return &___restartUI_4; }
	inline void set_restartUI_4(GameObject_t1756533147 * value)
	{
		___restartUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___restartUI_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
