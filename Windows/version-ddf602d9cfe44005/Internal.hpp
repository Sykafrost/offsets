// Offsets: 47/48
// Dumped by: Yaru
//
// Time it took: 6.6 seconds

#pragma once

#include <cstdint>
#include <memory>
#include <Windows.h>

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets {
    const uintptr_t Print = REBASE(0x92C340);
    const uintptr_t LoadString = REBASE(0x23D4A90);
    const uintptr_t GetGlobalState = REBASE(0x2219D10);
    const uintptr_t PushInstance = REBASE(0x222A6B0);
    const uintptr_t GetPropertyData = REBASE(0xD70670);
    const uintptr_t GetLuaState = REBASE(0x2219D10);
    const uintptr_t GetLuaStateForInstance = REBASE(0x2219D10);
    const uintptr_t WorldRoot_Raycast = REBASE(0x2500AA0);
    const uintptr_t WorldRoot_Blockcast = REBASE(0x0);
    const uintptr_t KTable = REBASE(0xD70570);
    const uintptr_t RequireBypass = REBASE(0x898);

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x323F8A4);
    }

    namespace Flags
    {
        const uintptr_t GetFFLag = REBASE(0x2D20550);
    }

    namespace Identity
    {
        const uintptr_t GetIdentityStruct = REBASE(0x4170);
    }

    namespace Lua
    {
        const uintptr_t LuaD_SandboxThread = REBASE(0x11742A0);
        const uintptr_t LuaPseudoAddr = REBASE(0xB32A50);
        const uintptr_t LuaC_Barrierf = REBASE(0xB47210);
        const uintptr_t LuaC_BarrierBack = REBASE(0xB47270);
        const uintptr_t LuaC_Step = REBASE(0xB46CB0);
        const uintptr_t LuaA_ToObject = REBASE(0xB32B10);
        const uintptr_t LuaG_RunError = REBASE(0xB43430);
        const uintptr_t luaG_runerrorL = REBASE(0xB736E0);
        const uintptr_t luaL_errorL = REBASE(0xB37340);
        const uintptr_t luaL_typerrorL = REBASE(0xB36730);
        const uintptr_t luaL_tolstring = REBASE(0xB3ED80);
        const uintptr_t luaM_new = REBASE(0xB4F270);
        const uintptr_t luaM_realloc_ = REBASE(0xB4F1C0);
        const uintptr_t lua_getfield = REBASE(0xB38F90);
        const uintptr_t lua_gettop = REBASE(0xB334B0);
        const uintptr_t LuaVMLoad = REBASE(0xB41500);
    }

    namespace Luau
    {
        const uintptr_t LuauExecute = REBASE(0xB59570);
        const uintptr_t Luau_Load = REBASE(0x223D370);
        const uintptr_t LuaO_NilObject = REBASE(0x221E60A);
        const uintptr_t LuaH_DummyNode = REBASE(0x87635F);
        const uintptr_t OpCodeLookupTable = REBASE(0xB598A8);
    }

    namespace RakNet
    {
        const uintptr_t RakNetSend = REBASE(0x498F240);
        const uintptr_t SendPacketsToSelf = REBASE(0x4984C60);
        const uintptr_t ProcessNetworkPacket = REBASE(0x499B730);
        const uintptr_t RakNetReceive = REBASE(0x496D750);
        const uintptr_t ReliabilityLayerSend = REBASE(0x496B2B0);
        const uintptr_t ReportNetworkError = REBASE(0x29135D0);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x23B0560);
    }

    namespace Task
    {
        const uintptr_t TaskDefer = REBASE(0x23B5980);
        const uintptr_t TaskSpawn = REBASE(0x23B5E10);
    }

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x380164B);
        const uintptr_t TaskScheduler = REBASE(0x7BDED6);
    }

    namespace Touch
    {
        const uintptr_t TouchInterest = REBASE(0x24E1760);
        const uintptr_t FireTouchInterest = REBASE(0x2D4A4F0);
    }
}
