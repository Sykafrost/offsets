// Offsets: 42/48
// Dumped by: Yaru
//
// Time it took: 6.2 seconds

#pragma once

#include <cstdint>
#include <memory>
#include <Windows.h>

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets {
    const uintptr_t Print = REBASE(0x1C68F60);
    const uintptr_t LoadString = REBASE(0x40D03E0);
    const uintptr_t GetGlobalState = REBASE(0x402A8B0);
    const uintptr_t PushInstance = REBASE(0x4012EF0);
    const uintptr_t GetPropertyData = REBASE(0x2ACD990);
    const uintptr_t GetLuaState = REBASE(0x402A8B0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x402A8B0);
    const uintptr_t WorldRoot_Raycast = REBASE(0xE9F200);
    const uintptr_t WorldRoot_Blockcast = REBASE(0x0);
    const uintptr_t KTable = REBASE(0x2ACD8A0);
    const uintptr_t RequireBypass = REBASE(0x9A0);

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x4A83B94);
    }

    namespace Flags
    {
        const uintptr_t GetFFLag = REBASE(0x4794760);
    }

    namespace Identity
    {
        const uintptr_t GetIdentityStruct = REBASE(0x4170);
    }

    namespace Lua
    {
        const uintptr_t LuaD_SandboxThread = REBASE(0x32B8AF0);
        const uintptr_t LuaPseudoAddr = REBASE(0x2688710);
        const uintptr_t LuaC_Barrierf = REBASE(0x26A8A30);
        const uintptr_t LuaC_BarrierBack = REBASE(0x26A8A90);
        const uintptr_t LuaC_Step = REBASE(0x26A84D0);
        const uintptr_t LuaA_ToObject = REBASE(0x26887D0);
        const uintptr_t LuaG_RunError = REBASE(0x269CF40);
        const uintptr_t luaG_runerrorL = REBASE(0x26CADA0);
        const uintptr_t luaL_errorL = REBASE(0x2690620);
        const uintptr_t luaL_typerrorL = REBASE(0x268F990);
        const uintptr_t luaL_tolstring = REBASE(0x26980E0);
        const uintptr_t luaM_new = REBASE(0x26D00A0);
        const uintptr_t luaM_realloc_ = REBASE(0x26CFFF0);
        const uintptr_t lua_getfield = REBASE(0x2692270);
        const uintptr_t lua_gettop = REBASE(0x2689170);
        const uintptr_t LuaVMLoad = REBASE(0x0);
    }

    namespace Luau
    {
        const uintptr_t LuauExecute = REBASE(0x0);
        const uintptr_t Luau_Load = REBASE(0x4020EB0);
        const uintptr_t LuaO_NilObject = REBASE(0x3FF085A);
        const uintptr_t LuaH_DummyNode = REBASE(0x15F18DE);
        const uintptr_t OpCodeLookupTable = REBASE(0x0);
    }

    namespace RakNet
    {
        const uintptr_t RakNetSend = REBASE(0x28D3380);
        const uintptr_t SendPacketsToSelf = REBASE(0x28C8C80);
        const uintptr_t ProcessNetworkPacket = REBASE(0x28DF870);
        const uintptr_t RakNetReceive = REBASE(0x0);
        const uintptr_t ReliabilityLayerSend = REBASE(0x28F2000);
        const uintptr_t ReportNetworkError = REBASE(0x4583F90);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x4130DA0);
    }

    namespace Task
    {
        const uintptr_t TaskDefer = REBASE(0x4183400);
        const uintptr_t TaskSpawn = REBASE(0x4183890);
    }

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x1A56FFB);
        const uintptr_t TaskScheduler = REBASE(0x7C3C06);
    }

    namespace Touch
    {
        const uintptr_t TouchInterest = REBASE(0xCA8810);
        const uintptr_t FireTouchInterest = REBASE(0x0);
    }
}
