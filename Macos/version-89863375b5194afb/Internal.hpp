// Offsets: 14/14
// Dumped by: Yaru
//
// Image Base: 0x100000000
// Time it took: 1.7 seconds

#pragma once

#include <cstdint>

namespace Offsets {
    const uintptr_t Print = 0x1013E9929;
    const uintptr_t Loadstring = 0x1001658F0;
    const uintptr_t require_bypass = 0x10021B585; // i wonder if this is real, im lazy to check

    namespace FFLag
    {
        const uintptr_t setfflag = 0x101661CCD;
    }

    namespace Physics
    {
        const uintptr_t PhysicsMaxBandWidthSender = 0x104FE687C;
    }

    namespace Raknet
    {
        const uintptr_t RaknetReceive = 0x101D73A5D;
        const uintptr_t RakNetReliabilityLayerSend = 0x101D76B98;
    }

    namespace Touch
    {
        const uintptr_t firetouchinterest = 0x10413FBC4;
    }

    namespace lua
    {
        const uintptr_t lua_gettop = 0x10196C7A7;
        const uintptr_t lua_pseudo2addr = 0x10196C33C;
        const uintptr_t lua_pcall = 0x10194A402;
        const uintptr_t luau_load = 0x1001556FF;
        const uintptr_t luavmload = 0x10015564D;
    }

    namespace script
    {
        const uintptr_t ScriptContextResume = 0x1001E7A9A;
    }
}
