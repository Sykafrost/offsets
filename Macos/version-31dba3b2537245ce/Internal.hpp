// Offsets: 14/14
// Dumped by: Yaru
//
// Image Base: 0x100000000
// Time it took: 2.3 seconds

#pragma once

#include <cstdint>

namespace Offsets {
    const uintptr_t Print = 0x1026E8221;
    const uintptr_t Loadstring = 0x101446632;
    const uintptr_t require_bypass = 0x1014FEB01;

    namespace FFLag
    {
        const uintptr_t setfflag = 0x102959E03;
    }

    namespace Physics
    {
        const uintptr_t PhysicsMaxBandWidthSender = 0x1051D3258;
    }

    namespace Raknet
    {
        const uintptr_t RaknetReceive = 0x103059049;
        const uintptr_t RakNetReliabilityLayerSend = 0x10305C1A6;
    }

    namespace Touch
    {
        const uintptr_t firetouchinterest = 0x104A8728E;
    }

    namespace lua
    {
        const uintptr_t lua_gettop = 0x102C5E87E;
        const uintptr_t lua_pseudo2addr = 0x102C5E41C;
        const uintptr_t lua_pcall = 0x102C3C4E2;
        const uintptr_t luau_load = 0x1014369FB;
        const uintptr_t luavmload = 0x101436949;
    }

    namespace script
    {
        const uintptr_t ScriptContextResume = 0x1014CB36A;
    }
}
