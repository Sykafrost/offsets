/*

  Version : XXXX
  Offsets : 78/78
  Time    : 8.63s
  Dumped by : Yaruskid (Yaru)

*/
// mostly unchecked idk
#pragma once
#include <cstdint>
#include <string>

namespace offsets {
    namespace Luau {
        constexpr std::uintptr_t pushvalue = 0x2228484;
        constexpr std::uintptr_t newthread = 0x223AC24;
        constexpr std::uintptr_t resume = 0x227F4F0;
        constexpr std::uintptr_t pushcclosurek = 0x2229450;
        constexpr std::uintptr_t getfield = 0x2229108;
        constexpr std::uintptr_t setfield = 0x222856C;
        constexpr std::uintptr_t luau_load = 0x223C3A8;
        constexpr std::uintptr_t luau_execute = 0x5B570C8;
        constexpr std::uintptr_t ref = 0x2232F0C;
        constexpr std::uintptr_t createtable = 0x2228F18;
        constexpr std::uintptr_t type = 0x2228E00;
        constexpr std::uintptr_t next = 0x224F768;
        constexpr std::uintptr_t pushnil = 0x222A0DC;
        constexpr std::uintptr_t pushnumber = 0x2229DB8;
        constexpr std::uintptr_t pushboolean = 0x22439A8;
        constexpr std::uintptr_t toboolean = 0x5B4D3A0;
        constexpr std::uintptr_t settop = 0x2228E68;
        constexpr std::uintptr_t gettop = 0x223CA6C;
        constexpr std::uintptr_t getmetatable = 0x5B4DB20;
        constexpr std::uintptr_t setmetatable = 0x2229AB4;
        constexpr std::uintptr_t setreadonly = 0x222999C;
        constexpr std::uintptr_t getreadonly = 0x225C308;
        constexpr std::uintptr_t pushstring = 0x2229BF0;
        constexpr std::uintptr_t checklstring = 0x5B4EFE8;
        constexpr std::uintptr_t optlstring = 0x22599A8;
        constexpr std::uintptr_t tolstring = 0x223D140;
        constexpr std::uintptr_t insert = 0x2247F88;
        constexpr std::uintptr_t rawgeti = 0x223D85C;
        constexpr std::uintptr_t rawget = 0x2228D58;
        constexpr std::uintptr_t rawseti = 0x2258AA8;
        constexpr std::uintptr_t rawset = 0x2231420;
        constexpr std::uintptr_t pcall = 0x5B4F2CC;
        constexpr std::uintptr_t pushlstring = 0x5B4D6C8;
        constexpr std::uintptr_t pushinteger = 0x2231A30;
        constexpr std::uintptr_t remove = 0x2229078;
        constexpr std::uintptr_t clonefunction = 0x5B4E8F4;
        constexpr std::uintptr_t topointer = 0x224F474;
        constexpr std::uintptr_t touserdata = 0x2247578;
        constexpr std::uintptr_t iscfunction = 0x5B4D06C;
        constexpr std::uintptr_t checkinteger = 0x2243B8C;
        constexpr std::uintptr_t optnumber = 0x228D060;
        constexpr std::uintptr_t tonumberx = 0x2243D70;
        constexpr std::uintptr_t call = 0x22651EC;
        constexpr std::uintptr_t replace = 0x223B118;
        constexpr std::uintptr_t visitgco = 0x5B5BC1C;
        constexpr std::uintptr_t getinfo = 0x2266CD0;
        constexpr std::uintptr_t getupvalue = 0x5B4E3E8;
        constexpr std::uintptr_t setupvalue = 0x5B4E5C0;
        constexpr std::uintptr_t settable = 0x2228FF0;
        constexpr std::uintptr_t xmove = 0x22583A4;
        constexpr std::uintptr_t pushobject = 0x5B4CF24;
        constexpr std::uintptr_t threadbarrierr = 0x22445EC;
        constexpr std::uintptr_t newuserdatatagged = 0x22465F4;
        constexpr std::uintptr_t toobject = 0x223D674;
        constexpr std::uintptr_t userdatatag = 0x5B4D4A8;
        constexpr std::uintptr_t pushlightuserdata = 0x223138C;
    }

    namespace Game {
        constexpr std::uintptr_t ongameload = 0x2290F9C;
        constexpr std::uintptr_t ongameleave = 0x27480D4;
    }

    namespace TaskScheduler {
        constexpr std::uintptr_t whsj_step = 0x22C7EDC;
        constexpr std::uintptr_t taskdefer = 0x2257D3C;
    }

    namespace Roblox {
        constexpr std::uintptr_t print = 0x55225AC;
        constexpr std::uintptr_t loadstring = 0x3A53F8C;
        constexpr std::uintptr_t bytecode_check = 0x223C89C;
        constexpr std::uintptr_t sandboxed_check = 0x3A1709C;
        constexpr std::uintptr_t sandboxed_check2 = 0x3A166F4;
        constexpr std::uintptr_t require_check = 0x2240FD0;
        constexpr std::uintptr_t spawn = 0x226EC44;
        constexpr std::uintptr_t networked_dm = 0x2BBF308;
    }

    namespace Flags {
        constexpr std::uintptr_t getfflag = 0x2267A94;
        constexpr std::uintptr_t setfflag = 0x202E68C;
    }

    namespace Capabilities {
        constexpr std::uintptr_t capability_check = 0x2BBF9A0;
        constexpr std::uintptr_t capability_check2 = 0x5CCFC88;
        constexpr std::uintptr_t capability_check3 = 0x223F3B4;
        constexpr std::uintptr_t set_capabilities = 0x223ECBC;
    }

    namespace DataModel {
        constexpr std::uintptr_t get_datamodel = 0x21D5E8C;
    }

    namespace Context {
        constexpr std::uintptr_t get_thread_context = 0x2163A38;
        constexpr std::uintptr_t set_thread_context = 0x23D56E0;
    }

    namespace Instance {
        constexpr std::uintptr_t push_instance = 0x2232644;
    }
}
