// Offsets: 55/55
// Dumped by: Yaru
//
// Time it took: 2.8 seconds

#pragma once

#include <cstdint>

namespace Offsets {

    namespace Luau
    {
        constexpr uintptr_t Print = 0x218B5CC;
        constexpr uintptr_t GetThreadContext = 0x2415B74;
        constexpr uintptr_t SetThreadContext = 0x284A064;
        constexpr uintptr_t Luau_Execute = 0x5D09380;
        constexpr uintptr_t LuaD_resume = 0x25AC524;
        constexpr uintptr_t Luau_load = 0x5D200F4;
        constexpr uintptr_t Lua_load = 0x25A7CD4;
        constexpr uintptr_t Luau_Compile = 0x3D4B014;
        constexpr uintptr_t LuaVM_load = 0x25A7438;
        constexpr uintptr_t LuaD_Throw = 0x3D6C4C4;
        constexpr uintptr_t lua_gc = 0x254E27C;
        constexpr uintptr_t lua_getproperty = 0x49B81A4;
        constexpr uintptr_t Lua_status = 0x260A8A0;
        constexpr uintptr_t LuaO_NilObject = 0x254F380;
        constexpr uintptr_t LuaH_DummyNode = 0x254E788;
        constexpr uintptr_t LuaG_typeerror = 0x2721004;
        constexpr uintptr_t Luau_yield = 0x25F7C98;
        constexpr uintptr_t LuaH_SetTable = 0x254EBC4;
        constexpr uintptr_t Lua_NewThread = 0x25A580C;
        constexpr uintptr_t GetLuaState = 0x25AB408;
        constexpr uintptr_t GetLuaStateForInstance = 0x256384C;
        constexpr uintptr_t Ktable = 0x3CCC498;
    }

    namespace Misc
    {
        constexpr uintptr_t RealDataModel = 0x25B3278;
        constexpr uintptr_t Loadstring = 0x3D5278C;
        constexpr uintptr_t SetFFlag = 0x21C83CC;
        constexpr uintptr_t GetFFlag = 0x611FC10;
        constexpr uintptr_t Stackoverflow = 0x25C093C;
        constexpr uintptr_t Require = 0x25B3278;
    }

    namespace Remote
    {
        constexpr uintptr_t FireServer = 0x4234048;
        constexpr uintptr_t FireAllClients = 0x423475C;
        constexpr uintptr_t InvokeServer = 0x454920C;
        constexpr uintptr_t InvokeClient = 0x454A0EC;
        constexpr uintptr_t FireTouchInterest = 0x490C838;
        constexpr uintptr_t FireProximityPrompt = 0x2682C80;
    }

    namespace ScriptContext
    {
        constexpr uintptr_t ScriptContextSpawn = 0x3CFFC38;
        constexpr uintptr_t ScriptContextResumeScript = 0x25AB8C8;
        constexpr uintptr_t ScriptStart = 0x425E14C;
        constexpr uintptr_t Ongameloaded = 0x2613C98;
        constexpr uintptr_t Ongameleave = 0x2BB63E4;
        constexpr uintptr_t EnableLoadModule = 0x49AE818;
    }

    namespace TaskScheduler
    {
        constexpr uintptr_t Jobstart = 0x2247C34;
        constexpr uintptr_t Jobend = 0x2247F4C;
        constexpr uintptr_t Rawscheduler = 0x23B0B7C;
        constexpr uintptr_t TaskSchedulerConstructor = 0x21E69CC;
        constexpr uintptr_t RenderJobConstructor = 0x2500AD8;
        constexpr uintptr_t Task_Desynchronize = 0x3D0FB64;
        constexpr uintptr_t Task_synchronize = 0x3D0FB64;
        constexpr uintptr_t Task_Defer = 0x26B0528;
        constexpr uintptr_t Task_Spawn = 0x25F4E88;
        constexpr uintptr_t Task_Delay = 0x2610E68;
        constexpr uintptr_t Task_Wait = 0x27139D4;
        constexpr uintptr_t Task_Cancel = 0x3D0FDC4;
        constexpr uintptr_t LoadVtable_ptr = 0x255C864;
        constexpr uintptr_t WHSJ_Constructor = 0x255E778;
        constexpr uintptr_t ResumeWaitingScripts = 0x255C6D8;
    }
}
