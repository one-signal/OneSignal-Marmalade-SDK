/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/*
 * This file contains the automatically generated loader-side
 * functions that form part of the extension.
 *
 * This file is awlays compiled into all loaders but compiles
 * to nothing if this extension is not enabled in the loader
 * at build time.
 */
#include "IwDebug.h"
#include "s3eOneSignal_autodefs.h"
#include "s3eEdk.h"
#include "s3eOneSignal.h"
//Declarations of Init and Term functions
extern s3eResult s3eOneSignalInit();
extern void s3eOneSignalTerminate();


// On platforms that use a seperate UI/OS thread we can autowrap functions
// here.   Note that we can't use the S3E_USE_OS_THREAD define since this
// code is oftern build standalone, outside the main loader build.
#if defined I3D_OS_IPHONE || defined I3D_OS_OSX || defined I3D_OS_LINUX || defined I3D_OS_WINDOWS

static void GameThriveInitialize_wrap(const char* appId, const char* googleProjectNumber, GameThriveNotificationReceivedCallbackFn callbackFn, s3eBool autoRegister)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveInitialize"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveInitialize, 4, appId, googleProjectNumber, callbackFn, autoRegister);
}

static void GameThriveSendTag_wrap(const char* key, const char* value)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveSendTag"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveSendTag, 2, key, value);
}

static void GameThriveGetTags_wrap(GameThriveTagsReceivedCallbackFn callbackFn)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveGetTags"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveGetTags, 1, callbackFn);
}

static void GameThriveDeleteTag_wrap(const char* key)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveDeleteTag"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveDeleteTag, 1, key);
}

static void GameThriveSendPurchase_wrap(const double* amount)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveSendPurchase"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveSendPurchase, 1, amount);
}

static void GameThriveGetIdsAvailable_wrap(GameThriveIdsAvailableCallbackFn callbackFn)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveGetIdsAvailable"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveGetIdsAvailable, 1, callbackFn);
}

static int GameThriveSystemPaused_wrap(void* systemData, void* userData)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveSystemPaused"));
    return (int)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveSystemPaused, 2, systemData, userData);
}

static int GameThriveSystemResume_wrap(void* systemData, void* userData)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveSystemResume"));
    return (int)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveSystemResume, 2, systemData, userData);
}

static void GameThriveRegisterForPushNotifications_wrap()
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveRegisterForPushNotifications"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveRegisterForPushNotifications, 0);
}

static void GameThriveEnableVibrate_wrap(s3eBool enable)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveEnableVibrate"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveEnableVibrate, 1, enable);
}

static void GameThriveEnableSound_wrap(s3eBool enable)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: GameThriveEnableSound"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)GameThriveEnableSound, 1, enable);
}

static void OneSignalInitialize_wrap(const char* appId, const char* googleProjectNumber, OneSignalNotificationReceivedCallbackFn callbackFn, s3eBool autoRegister)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalInitialize"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalInitialize, 4, appId, googleProjectNumber, callbackFn, autoRegister);
}

static void OneSignalSendTag_wrap(const char* key, const char* value)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalSendTag"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalSendTag, 2, key, value);
}

static void OneSignalGetTags_wrap(OneSignalTagsReceivedCallbackFn callbackFn)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalGetTags"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalGetTags, 1, callbackFn);
}

static void OneSignalDeleteTag_wrap(const char* key)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalDeleteTag"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalDeleteTag, 1, key);
}

static void OneSignalSendPurchase_wrap(const double* amount)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalSendPurchase"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalSendPurchase, 1, amount);
}

static void OneSignalGetIdsAvailable_wrap(OneSignalIdsAvailableCallbackFn callbackFn)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalGetIdsAvailable"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalGetIdsAvailable, 1, callbackFn);
}

static int OneSignalSystemPaused_wrap(void* systemData, void* userData)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalSystemPaused"));
    return (int)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalSystemPaused, 2, systemData, userData);
}

static int OneSignalSystemResume_wrap(void* systemData, void* userData)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalSystemResume"));
    return (int)(intptr_t)s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalSystemResume, 2, systemData, userData);
}

static void OneSignalRegisterForPushNotifications_wrap()
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalRegisterForPushNotifications"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalRegisterForPushNotifications, 0);
}

static void OneSignalEnableVibrate_wrap(s3eBool enable)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalEnableVibrate"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalEnableVibrate, 1, enable);
}

static void OneSignalEnableSound_wrap(s3eBool enable)
{
    IwTrace(ONESIGNAL_VERBOSE, ("calling s3eOneSignal func on main thread: OneSignalEnableSound"));
    s3eEdkThreadRunOnOS((s3eEdkThreadFunc)OneSignalEnableSound, 1, enable);
}

#define GameThriveInitialize GameThriveInitialize_wrap
#define GameThriveSendTag GameThriveSendTag_wrap
#define GameThriveGetTags GameThriveGetTags_wrap
#define GameThriveDeleteTag GameThriveDeleteTag_wrap
#define GameThriveSendPurchase GameThriveSendPurchase_wrap
#define GameThriveGetIdsAvailable GameThriveGetIdsAvailable_wrap
#define GameThriveSystemPaused GameThriveSystemPaused_wrap
#define GameThriveSystemResume GameThriveSystemResume_wrap
#define GameThriveRegisterForPushNotifications GameThriveRegisterForPushNotifications_wrap
#define GameThriveEnableVibrate GameThriveEnableVibrate_wrap
#define GameThriveEnableSound GameThriveEnableSound_wrap
#define OneSignalInitialize OneSignalInitialize_wrap
#define OneSignalSendTag OneSignalSendTag_wrap
#define OneSignalGetTags OneSignalGetTags_wrap
#define OneSignalDeleteTag OneSignalDeleteTag_wrap
#define OneSignalSendPurchase OneSignalSendPurchase_wrap
#define OneSignalGetIdsAvailable OneSignalGetIdsAvailable_wrap
#define OneSignalSystemPaused OneSignalSystemPaused_wrap
#define OneSignalSystemResume OneSignalSystemResume_wrap
#define OneSignalRegisterForPushNotifications OneSignalRegisterForPushNotifications_wrap
#define OneSignalEnableVibrate OneSignalEnableVibrate_wrap
#define OneSignalEnableSound OneSignalEnableSound_wrap

#endif

void s3eOneSignalRegisterExt()
{
    /* fill in the function pointer struct for this extension */
    void* funcPtrs[22];
    funcPtrs[0] = (void*)GameThriveInitialize;
    funcPtrs[1] = (void*)GameThriveSendTag;
    funcPtrs[2] = (void*)GameThriveGetTags;
    funcPtrs[3] = (void*)GameThriveDeleteTag;
    funcPtrs[4] = (void*)GameThriveSendPurchase;
    funcPtrs[5] = (void*)GameThriveGetIdsAvailable;
    funcPtrs[6] = (void*)GameThriveSystemPaused;
    funcPtrs[7] = (void*)GameThriveSystemResume;
    funcPtrs[8] = (void*)GameThriveRegisterForPushNotifications;
    funcPtrs[9] = (void*)GameThriveEnableVibrate;
    funcPtrs[10] = (void*)GameThriveEnableSound;
    funcPtrs[11] = (void*)OneSignalInitialize;
    funcPtrs[12] = (void*)OneSignalSendTag;
    funcPtrs[13] = (void*)OneSignalGetTags;
    funcPtrs[14] = (void*)OneSignalDeleteTag;
    funcPtrs[15] = (void*)OneSignalSendPurchase;
    funcPtrs[16] = (void*)OneSignalGetIdsAvailable;
    funcPtrs[17] = (void*)OneSignalSystemPaused;
    funcPtrs[18] = (void*)OneSignalSystemResume;
    funcPtrs[19] = (void*)OneSignalRegisterForPushNotifications;
    funcPtrs[20] = (void*)OneSignalEnableVibrate;
    funcPtrs[21] = (void*)OneSignalEnableSound;

    /*
     * Flags that specify the extension's use of locking and stackswitching
     */
    int flags[22] = { 0 };

    /*
     * Register the extension
     */
s3eEdkRegister("s3eOneSignal", funcPtrs, sizeof(funcPtrs), flags, s3eOneSignalInit, s3eOneSignalTerminate, 0);
}

#if !defined S3E_BUILD_S3ELOADER

#if defined S3E_EDK_USE_STATIC_INIT_ARRAY
int s3eOneSignalStaticInit()
{
    void** p = g_StaticInitArray;
    void* end = p + g_StaticArrayLen;
    while (*p) p++;
    if (p < end)
        *p = (void*)&s3eOneSignalRegisterExt;
    return 0;
}

int g_s3eOneSignalVal = s3eOneSignalStaticInit();

#elif defined S3E_EDK_USE_DLLS
S3E_EXTERN_C S3E_DLL_EXPORT void RegisterExt()
{
    s3eOneSignalRegisterExt();
}
#endif

#endif
