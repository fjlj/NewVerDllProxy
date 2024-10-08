// dllmain.cpp : Defines the entry point for the DLL application.

#pragma once
#include "proxied_dll.h"
#include "hooker.h"

#if defined(winmm_prox)

    #ifdef _WIN64
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\System32\\winmm.dll"
    #else
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\SysWOW64\\winmm.dll"
    #endif // _WIN64

    #pragma comment(linker, "/EXPORT:CloseDriver=" DLLPATH ".CloseDriver,@4")
    #pragma comment(linker, "/EXPORT:DefDriverProc=" DLLPATH ".DefDriverProc,@5")
    #pragma comment(linker, "/EXPORT:DriverCallback=" DLLPATH ".DriverCallback,@6")
    #pragma comment(linker, "/EXPORT:DrvGetModuleHandle=" DLLPATH ".DrvGetModuleHandle,@7")
    #pragma comment(linker, "/EXPORT:GetDriverModuleHandle=" DLLPATH ".GetDriverModuleHandle,@8")
    #pragma comment(linker, "/EXPORT:OpenDriver=" DLLPATH ".OpenDriver,@9")
    #pragma comment(linker, "/EXPORT:PlaySound=" DLLPATH ".PlaySound,@10")
    #pragma comment(linker, "/EXPORT:PlaySoundA=" DLLPATH ".PlaySoundA,@11")
    #pragma comment(linker, "/EXPORT:PlaySoundW=" DLLPATH ".PlaySoundW,@12")
    #pragma comment(linker, "/EXPORT:SendDriverMessage=" DLLPATH ".SendDriverMessage,@13")
    #pragma comment(linker, "/EXPORT:WOWAppExit=" DLLPATH ".WOWAppExit,@14")
    #pragma comment(linker, "/EXPORT:auxGetDevCapsA=" DLLPATH ".auxGetDevCapsA,@15")
    #pragma comment(linker, "/EXPORT:auxGetDevCapsW=" DLLPATH ".auxGetDevCapsW,@16")
    #pragma comment(linker, "/EXPORT:auxGetNumDevs=" DLLPATH ".auxGetNumDevs,@17")
    #pragma comment(linker, "/EXPORT:auxGetVolume=" DLLPATH ".auxGetVolume,@18")
    #pragma comment(linker, "/EXPORT:auxOutMessage=" DLLPATH ".auxOutMessage,@19")
    #pragma comment(linker, "/EXPORT:auxSetVolume=" DLLPATH ".auxSetVolume,@20")
    #pragma comment(linker, "/EXPORT:joyConfigChanged=" DLLPATH ".joyConfigChanged,@21")
    #pragma comment(linker, "/EXPORT:joyGetDevCapsA=" DLLPATH ".joyGetDevCapsA,@22")
    #pragma comment(linker, "/EXPORT:joyGetDevCapsW=" DLLPATH ".joyGetDevCapsW,@23")
    #pragma comment(linker, "/EXPORT:joyGetNumDevs=" DLLPATH ".joyGetNumDevs,@24")
    #pragma comment(linker, "/EXPORT:joyGetPos=" DLLPATH ".joyGetPos,@25")
    #pragma comment(linker, "/EXPORT:joyGetPosEx=" DLLPATH ".joyGetPosEx,@26")
    #pragma comment(linker, "/EXPORT:joyGetThreshold=" DLLPATH ".joyGetThreshold,@27")
    #pragma comment(linker, "/EXPORT:joyReleaseCapture=" DLLPATH ".joyReleaseCapture,@28")
    #pragma comment(linker, "/EXPORT:joySetCapture=" DLLPATH ".joySetCapture,@29")
    #pragma comment(linker, "/EXPORT:joySetThreshold=" DLLPATH ".joySetThreshold,@30")
    #pragma comment(linker, "/EXPORT:mciDriverNotify=" DLLPATH ".mciDriverNotify,@31")
    #pragma comment(linker, "/EXPORT:mciDriverYield=" DLLPATH ".mciDriverYield,@32")
    #pragma comment(linker, "/EXPORT:mciExecute=" DLLPATH ".mciExecute,@3")
    #pragma comment(linker, "/EXPORT:mciFreeCommandResource=" DLLPATH ".mciFreeCommandResource,@33")
    #pragma comment(linker, "/EXPORT:mciGetCreatorTask=" DLLPATH ".mciGetCreatorTask,@34")
    #pragma comment(linker, "/EXPORT:mciGetDeviceIDA=" DLLPATH ".mciGetDeviceIDA,@35")
    #pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=" DLLPATH ".mciGetDeviceIDFromElementIDA,@36")
    #pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=" DLLPATH ".mciGetDeviceIDFromElementIDW,@37")
    #pragma comment(linker, "/EXPORT:mciGetDeviceIDW=" DLLPATH ".mciGetDeviceIDW,@38")
    #pragma comment(linker, "/EXPORT:mciGetDriverData=" DLLPATH ".mciGetDriverData,@39")
    #pragma comment(linker, "/EXPORT:mciGetErrorStringA=" DLLPATH ".mciGetErrorStringA,@40")
    #pragma comment(linker, "/EXPORT:mciGetErrorStringW=" DLLPATH ".mciGetErrorStringW,@41")
    #pragma comment(linker, "/EXPORT:mciGetYieldProc=" DLLPATH ".mciGetYieldProc,@42")
    #pragma comment(linker, "/EXPORT:mciLoadCommandResource=" DLLPATH ".mciLoadCommandResource,@43")
    #pragma comment(linker, "/EXPORT:mciSendCommandA=" DLLPATH ".mciSendCommandA,@44")
    #pragma comment(linker, "/EXPORT:mciSendCommandW=" DLLPATH ".mciSendCommandW,@45")
    #pragma comment(linker, "/EXPORT:mciSendStringA=" DLLPATH ".mciSendStringA,@46")
    #pragma comment(linker, "/EXPORT:mciSendStringW=" DLLPATH ".mciSendStringW,@47")
    #pragma comment(linker, "/EXPORT:mciSetDriverData=" DLLPATH ".mciSetDriverData,@48")
    #pragma comment(linker, "/EXPORT:mciSetYieldProc=" DLLPATH ".mciSetYieldProc,@49")
    #pragma comment(linker, "/EXPORT:midiConnect=" DLLPATH ".midiConnect,@50")
    #pragma comment(linker, "/EXPORT:midiDisconnect=" DLLPATH ".midiDisconnect,@51")
    #pragma comment(linker, "/EXPORT:midiInAddBuffer=" DLLPATH ".midiInAddBuffer,@52")
    #pragma comment(linker, "/EXPORT:midiInClose=" DLLPATH ".midiInClose,@53")
    #pragma comment(linker, "/EXPORT:midiInGetDevCapsA=" DLLPATH ".midiInGetDevCapsA,@54")
    #pragma comment(linker, "/EXPORT:midiInGetDevCapsW=" DLLPATH ".midiInGetDevCapsW,@55")
    #pragma comment(linker, "/EXPORT:midiInGetErrorTextA=" DLLPATH ".midiInGetErrorTextA,@56")
    #pragma comment(linker, "/EXPORT:midiInGetErrorTextW=" DLLPATH ".midiInGetErrorTextW,@57")
    #pragma comment(linker, "/EXPORT:midiInGetID=" DLLPATH ".midiInGetID,@58")
    #pragma comment(linker, "/EXPORT:midiInGetNumDevs=" DLLPATH ".midiInGetNumDevs,@59")
    #pragma comment(linker, "/EXPORT:midiInMessage=" DLLPATH ".midiInMessage,@60")
    #pragma comment(linker, "/EXPORT:midiInOpen=" DLLPATH ".midiInOpen,@61")
    #pragma comment(linker, "/EXPORT:midiInPrepareHeader=" DLLPATH ".midiInPrepareHeader,@62")
    #pragma comment(linker, "/EXPORT:midiInReset=" DLLPATH ".midiInReset,@63")
    #pragma comment(linker, "/EXPORT:midiInStart=" DLLPATH ".midiInStart,@64")
    #pragma comment(linker, "/EXPORT:midiInStop=" DLLPATH ".midiInStop,@65")
    #pragma comment(linker, "/EXPORT:midiInUnprepareHeader=" DLLPATH ".midiInUnprepareHeader,@66")
    #pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=" DLLPATH ".midiOutCacheDrumPatches,@67")
    #pragma comment(linker, "/EXPORT:midiOutCachePatches=" DLLPATH ".midiOutCachePatches,@68")
    #pragma comment(linker, "/EXPORT:midiOutClose=" DLLPATH ".midiOutClose,@69")
    #pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=" DLLPATH ".midiOutGetDevCapsA,@70")
    #pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=" DLLPATH ".midiOutGetDevCapsW,@71")
    #pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=" DLLPATH ".midiOutGetErrorTextA,@72")
    #pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=" DLLPATH ".midiOutGetErrorTextW,@73")
    #pragma comment(linker, "/EXPORT:midiOutGetID=" DLLPATH ".midiOutGetID,@74")
    #pragma comment(linker, "/EXPORT:midiOutGetNumDevs=" DLLPATH ".midiOutGetNumDevs,@75")
    #pragma comment(linker, "/EXPORT:midiOutGetVolume=" DLLPATH ".midiOutGetVolume,@76")
    #pragma comment(linker, "/EXPORT:midiOutLongMsg=" DLLPATH ".midiOutLongMsg,@77")
    #pragma comment(linker, "/EXPORT:midiOutMessage=" DLLPATH ".midiOutMessage,@78")
    #pragma comment(linker, "/EXPORT:midiOutOpen=" DLLPATH ".midiOutOpen,@79")
    #pragma comment(linker, "/EXPORT:midiOutPrepareHeader=" DLLPATH ".midiOutPrepareHeader,@80")
    #pragma comment(linker, "/EXPORT:midiOutReset=" DLLPATH ".midiOutReset,@81")
    #pragma comment(linker, "/EXPORT:midiOutSetVolume=" DLLPATH ".midiOutSetVolume,@82")
    #pragma comment(linker, "/EXPORT:midiOutShortMsg=" DLLPATH ".midiOutShortMsg,@83")
    #pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=" DLLPATH ".midiOutUnprepareHeader,@84")
    #pragma comment(linker, "/EXPORT:midiStreamClose=" DLLPATH ".midiStreamClose,@85")
    #pragma comment(linker, "/EXPORT:midiStreamOpen=" DLLPATH ".midiStreamOpen,@86")
    #pragma comment(linker, "/EXPORT:midiStreamOut=" DLLPATH ".midiStreamOut,@87")
    #pragma comment(linker, "/EXPORT:midiStreamPause=" DLLPATH ".midiStreamPause,@88")
    #pragma comment(linker, "/EXPORT:midiStreamPosition=" DLLPATH ".midiStreamPosition,@89")
    #pragma comment(linker, "/EXPORT:midiStreamProperty=" DLLPATH ".midiStreamProperty,@90")
    #pragma comment(linker, "/EXPORT:midiStreamRestart=" DLLPATH ".midiStreamRestart,@91")
    #pragma comment(linker, "/EXPORT:midiStreamStop=" DLLPATH ".midiStreamStop,@92")
    #pragma comment(linker, "/EXPORT:mixerClose=" DLLPATH ".mixerClose,@93")
    #pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=" DLLPATH ".mixerGetControlDetailsA,@94")
    #pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=" DLLPATH ".mixerGetControlDetailsW,@95")
    #pragma comment(linker, "/EXPORT:mixerGetDevCapsA=" DLLPATH ".mixerGetDevCapsA,@96")
    #pragma comment(linker, "/EXPORT:mixerGetDevCapsW=" DLLPATH ".mixerGetDevCapsW,@97")
    #pragma comment(linker, "/EXPORT:mixerGetID=" DLLPATH ".mixerGetID,@98")
    #pragma comment(linker, "/EXPORT:mixerGetLineControlsA=" DLLPATH ".mixerGetLineControlsA,@99")
    #pragma comment(linker, "/EXPORT:mixerGetLineControlsW=" DLLPATH ".mixerGetLineControlsW,@100")
    #pragma comment(linker, "/EXPORT:mixerGetLineInfoA=" DLLPATH ".mixerGetLineInfoA,@101")
    #pragma comment(linker, "/EXPORT:mixerGetLineInfoW=" DLLPATH ".mixerGetLineInfoW,@102")
    #pragma comment(linker, "/EXPORT:mixerGetNumDevs=" DLLPATH ".mixerGetNumDevs,@103")
    #pragma comment(linker, "/EXPORT:mixerMessage=" DLLPATH ".mixerMessage,@104")
    #pragma comment(linker, "/EXPORT:mixerOpen=" DLLPATH ".mixerOpen,@105")
    #pragma comment(linker, "/EXPORT:mixerSetControlDetails=" DLLPATH ".mixerSetControlDetails,@106")
    #pragma comment(linker, "/EXPORT:mmDrvInstall=" DLLPATH ".mmDrvInstall,@107")
    #pragma comment(linker, "/EXPORT:mmGetCurrentTask=" DLLPATH ".mmGetCurrentTask,@108")
    #pragma comment(linker, "/EXPORT:mmTaskBlock=" DLLPATH ".mmTaskBlock,@109")
    #pragma comment(linker, "/EXPORT:mmTaskCreate=" DLLPATH ".mmTaskCreate,@110")
    #pragma comment(linker, "/EXPORT:mmTaskSignal=" DLLPATH ".mmTaskSignal,@111")
    #pragma comment(linker, "/EXPORT:mmTaskYield=" DLLPATH ".mmTaskYield,@112")
    #pragma comment(linker, "/EXPORT:mmioAdvance=" DLLPATH ".mmioAdvance,@113")
    #pragma comment(linker, "/EXPORT:mmioAscend=" DLLPATH ".mmioAscend,@114")
    #pragma comment(linker, "/EXPORT:mmioClose=" DLLPATH ".mmioClose,@115")
    #pragma comment(linker, "/EXPORT:mmioCreateChunk=" DLLPATH ".mmioCreateChunk,@116")
    #pragma comment(linker, "/EXPORT:mmioDescend=" DLLPATH ".mmioDescend,@117")
    #pragma comment(linker, "/EXPORT:mmioFlush=" DLLPATH ".mmioFlush,@118")
    #pragma comment(linker, "/EXPORT:mmioGetInfo=" DLLPATH ".mmioGetInfo,@119")
    #pragma comment(linker, "/EXPORT:mmioInstallIOProcA=" DLLPATH ".mmioInstallIOProcA,@120")
    #pragma comment(linker, "/EXPORT:mmioInstallIOProcW=" DLLPATH ".mmioInstallIOProcW,@121")
    #pragma comment(linker, "/EXPORT:mmioOpenA=" DLLPATH ".mmioOpenA,@122")
    #pragma comment(linker, "/EXPORT:mmioOpenW=" DLLPATH ".mmioOpenW,@123")
    #pragma comment(linker, "/EXPORT:mmioRead=" DLLPATH ".mmioRead,@124")
    #pragma comment(linker, "/EXPORT:mmioRenameA=" DLLPATH ".mmioRenameA,@125")
    #pragma comment(linker, "/EXPORT:mmioRenameW=" DLLPATH ".mmioRenameW,@126")
    #pragma comment(linker, "/EXPORT:mmioSeek=" DLLPATH ".mmioSeek,@127")
    #pragma comment(linker, "/EXPORT:mmioSendMessage=" DLLPATH ".mmioSendMessage,@128")
    #pragma comment(linker, "/EXPORT:mmioSetBuffer=" DLLPATH ".mmioSetBuffer,@129")
    #pragma comment(linker, "/EXPORT:mmioSetInfo=" DLLPATH ".mmioSetInfo,@130")
    #pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=" DLLPATH ".mmioStringToFOURCCA,@131")
    #pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=" DLLPATH ".mmioStringToFOURCCW,@132")
    #pragma comment(linker, "/EXPORT:mmioWrite=" DLLPATH ".mmioWrite,@133")
    #pragma comment(linker, "/EXPORT:mmsystemGetVersion=" DLLPATH ".mmsystemGetVersion,@134")
    #pragma comment(linker, "/EXPORT:sndPlaySoundA=" DLLPATH ".sndPlaySoundA,@135")
    #pragma comment(linker, "/EXPORT:sndPlaySoundW=" DLLPATH ".sndPlaySoundW,@136")
    #pragma comment(linker, "/EXPORT:timeBeginPeriod=" DLLPATH ".timeBeginPeriod,@137")
    #pragma comment(linker, "/EXPORT:timeEndPeriod=" DLLPATH ".timeEndPeriod,@138")
    #pragma comment(linker, "/EXPORT:timeGetDevCaps=" DLLPATH ".timeGetDevCaps,@139")
    #pragma comment(linker, "/EXPORT:timeGetSystemTime=" DLLPATH ".timeGetSystemTime,@140")
    #pragma comment(linker, "/EXPORT:timeGetTime=" DLLPATH ".timeGetTime,@141")
    #pragma comment(linker, "/EXPORT:timeKillEvent=" DLLPATH ".timeKillEvent,@142")
    #pragma comment(linker, "/EXPORT:timeSetEvent=" DLLPATH ".timeSetEvent,@143")
    #pragma comment(linker, "/EXPORT:waveInAddBuffer=" DLLPATH ".waveInAddBuffer,@144")
    #pragma comment(linker, "/EXPORT:waveInClose=" DLLPATH ".waveInClose,@145")
    #pragma comment(linker, "/EXPORT:waveInGetDevCapsA=" DLLPATH ".waveInGetDevCapsA,@146")
    #pragma comment(linker, "/EXPORT:waveInGetDevCapsW=" DLLPATH ".waveInGetDevCapsW,@147")
    #pragma comment(linker, "/EXPORT:waveInGetErrorTextA=" DLLPATH ".waveInGetErrorTextA,@148")
    #pragma comment(linker, "/EXPORT:waveInGetErrorTextW=" DLLPATH ".waveInGetErrorTextW,@149")
    #pragma comment(linker, "/EXPORT:waveInGetID=" DLLPATH ".waveInGetID,@150")
    #pragma comment(linker, "/EXPORT:waveInGetNumDevs=" DLLPATH ".waveInGetNumDevs,@151")
    #pragma comment(linker, "/EXPORT:waveInGetPosition=" DLLPATH ".waveInGetPosition,@152")
    #pragma comment(linker, "/EXPORT:waveInMessage=" DLLPATH ".waveInMessage,@153")
    #pragma comment(linker, "/EXPORT:waveInOpen=" DLLPATH ".waveInOpen,@154")
    #pragma comment(linker, "/EXPORT:waveInPrepareHeader=" DLLPATH ".waveInPrepareHeader,@155")
    #pragma comment(linker, "/EXPORT:waveInReset=" DLLPATH ".waveInReset,@156")
    #pragma comment(linker, "/EXPORT:waveInStart=" DLLPATH ".waveInStart,@157")
    #pragma comment(linker, "/EXPORT:waveInStop=" DLLPATH ".waveInStop,@158")
    #pragma comment(linker, "/EXPORT:waveInUnprepareHeader=" DLLPATH ".waveInUnprepareHeader,@159")
    #pragma comment(linker, "/EXPORT:waveOutBreakLoop=" DLLPATH ".waveOutBreakLoop,@160")
    #pragma comment(linker, "/EXPORT:waveOutClose=" DLLPATH ".waveOutClose,@161")
    #pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=" DLLPATH ".waveOutGetDevCapsA,@162")
    #pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=" DLLPATH ".waveOutGetDevCapsW,@163")
    #pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=" DLLPATH ".waveOutGetErrorTextA,@164")
    #pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=" DLLPATH ".waveOutGetErrorTextW,@165")
    #pragma comment(linker, "/EXPORT:waveOutGetID=" DLLPATH ".waveOutGetID,@166")
    #pragma comment(linker, "/EXPORT:waveOutGetNumDevs=" DLLPATH ".waveOutGetNumDevs,@167")
    #pragma comment(linker, "/EXPORT:waveOutGetPitch=" DLLPATH ".waveOutGetPitch,@168")
    #pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=" DLLPATH ".waveOutGetPlaybackRate,@169")
    #pragma comment(linker, "/EXPORT:waveOutGetPosition=" DLLPATH ".waveOutGetPosition,@170")
    #pragma comment(linker, "/EXPORT:waveOutGetVolume=" DLLPATH ".waveOutGetVolume,@171")
    #pragma comment(linker, "/EXPORT:waveOutMessage=" DLLPATH ".waveOutMessage,@172")
    #pragma comment(linker, "/EXPORT:waveOutOpen=" DLLPATH ".waveOutOpen,@173")
    #pragma comment(linker, "/EXPORT:waveOutPause=" DLLPATH ".waveOutPause,@174")
    #pragma comment(linker, "/EXPORT:waveOutPrepareHeader=" DLLPATH ".waveOutPrepareHeader,@175")
    #pragma comment(linker, "/EXPORT:waveOutReset=" DLLPATH ".waveOutReset,@176")
    #pragma comment(linker, "/EXPORT:waveOutRestart=" DLLPATH ".waveOutRestart,@177")
    #pragma comment(linker, "/EXPORT:waveOutSetPitch=" DLLPATH ".waveOutSetPitch,@178")
    #pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=" DLLPATH ".waveOutSetPlaybackRate,@179")
    #pragma comment(linker, "/EXPORT:waveOutSetVolume=" DLLPATH ".waveOutSetVolume,@180")
    #pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=" DLLPATH ".waveOutUnprepareHeader,@181")
    #pragma comment(linker, "/EXPORT:waveOutWrite=" DLLPATH ".waveOutWrite,@182")
    #pragma comment(linker, "/EXPORT:__proxy2=" DLLPATH ".#2,@2,NONAME")
#elif defined(version_prox)
    
    #ifdef _WIN64
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\System32\\version.dll"
    #else
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\SysWOW64\\version.dll"
    #endif // _WIN64

    #pragma comment(linker, "/EXPORT:GetFileVersionInfoA=" DLLPATH ".GetFileVersionInfoA")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoByHandle=" DLLPATH ".GetFileVersionInfoByHandle")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoExA=" DLLPATH ".GetFileVersionInfoExA")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoExW=" DLLPATH ".GetFileVersionInfoExW")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeA=" DLLPATH ".GetFileVersionInfoSizeA")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeExA=" DLLPATH ".GetFileVersionInfoSizeExA")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeExW=" DLLPATH ".GetFileVersionInfoSizeExW")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeW=" DLLPATH ".GetFileVersionInfoSizeW")
    #pragma comment(linker, "/EXPORT:GetFileVersionInfoW=" DLLPATH ".GetFileVersionInfoW")
    #pragma comment(linker, "/EXPORT:VerFindFileA=" DLLPATH ".VerFindFileA")
    #pragma comment(linker, "/EXPORT:VerFindFileW=" DLLPATH ".VerFindFileW")
    #pragma comment(linker, "/EXPORT:VerInstallFileA=" DLLPATH ".VerInstallFileA")
    #pragma comment(linker, "/EXPORT:VerInstallFileW=" DLLPATH ".VerInstallFileW")
    #pragma comment(linker, "/EXPORT:VerLanguageNameA=" DLLPATH ".VerLanguageNameA")
    #pragma comment(linker, "/EXPORT:VerLanguageNameW=" DLLPATH ".VerLanguageNameW")
    #pragma comment(linker, "/EXPORT:VerQueryValueA=" DLLPATH ".VerQueryValueA")
    #pragma comment(linker, "/EXPORT:VerQueryValueW=" DLLPATH ".VerQueryValueW")
#elif defined(cryptbase_prox)

    #ifdef _WIN64
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\System32\\cryptbase.dll"
    #else
    #define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\SysWOW64\\cryptbase.dll"
    #endif // _WIN64

    #pragma comment(linker, "/EXPORT:SystemFunction001=" DLLPATH ".SystemFunction001,@1")
    #pragma comment(linker, "/EXPORT:SystemFunction002=" DLLPATH ".SystemFunction002,@2")
    #pragma comment(linker, "/EXPORT:SystemFunction003=" DLLPATH ".SystemFunction003,@3")
    #pragma comment(linker, "/EXPORT:SystemFunction004=" DLLPATH ".SystemFunction004,@4")
    #pragma comment(linker, "/EXPORT:SystemFunction005=" DLLPATH ".SystemFunction005,@5")
    #pragma comment(linker, "/EXPORT:SystemFunction028=" DLLPATH ".SystemFunction028,@6")
    #pragma comment(linker, "/EXPORT:SystemFunction029=" DLLPATH ".SystemFunction029,@7")
    #pragma comment(linker, "/EXPORT:SystemFunction034=" DLLPATH ".SystemFunction034,@8")
    #pragma comment(linker, "/EXPORT:SystemFunction036=" DLLPATH ".SystemFunction036,@9")
    #pragma comment(linker, "/EXPORT:SystemFunction040=" DLLPATH ".SystemFunction040,@10")
    #pragma comment(linker, "/EXPORT:SystemFunction041=" DLLPATH ".SystemFunction041,@11")

#endif

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hinstDLL);
        init();
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Load, hinstDLL, 0, 0);
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

