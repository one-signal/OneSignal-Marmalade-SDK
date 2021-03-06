/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
#ifndef S3E_EXT_ONESIGNAL_H
#define S3E_EXT_ONESIGNAL_H

/**
 * @addtogroup s3egroup
 * @{
 */

/**
 * @defgroup edkonesignalapigroup OneSignal Extension API Reference
 *
 * OneSignal is a free push notification service for mobile apps.
 * This extension makes it easy to integrate your Marmalade game with OneSignal.
 *
 * @{
 */

#include <s3eTypes.h>

typedef enum s3eGameThriveCallback
{
	S3E_GAMETHRIVE_CALLBACK_NOTIFICATION_RECEIVED,
	S3E_GAMETHRIVE_CALLBACK_TAGS_RECEIVED,
	S3E_GAMETHRIVE_CALLBACK_IDS_AVAILABLE,
	S3E_GAMETHRIVE_CALLBACK_MAX
} s3eGameThriveCallback;

typedef enum s3eOneSignalCallback
{
	S3E_ONESIGNAL_CALLBACK_NOTIFICATION_RECEIVED,
	S3E_ONESIGNAL_CALLBACK_TAGS_RECEIVED,
	S3E_ONESIGNAL_CALLBACK_IDS_AVAILABLE,
	S3E_ONESIGNAL_CALLBACK_POST_NOTIFICATION_SUCCESS,
	S3E_ONESIGNAL_CALLBACK_POST_NOTIFICATION_FAILURE,
	S3E_ONESIGNAL_CALLBACK_MAX
} s3eOneSignalCallback;


typedef struct GameThriveNotificationReceivedResult
{
	const char*		m_Message;
	const char*		m_AdditionalData;
	s3eBool			m_isActive;

} GameThriveNotificationReceivedResult;

typedef struct OneSignalNotificationReceivedResult
{
	const char*		m_Message;
	const char*		m_AdditionalData;
	s3eBool			m_isActive;

} OneSignalNotificationReceivedResult;


typedef struct GameThriveTagsReceivedResult
{
	const char*	m_Tags;
} GameThriveTagsReceivedResult;

typedef struct OneSignalTagsReceivedResult
{
	const char*	m_Tags;
} OneSignalTagsReceivedResult;


typedef struct GameThriveIdsAvailableResult
{
	const char*	m_PlayerID;
	const char*	m_PushToken;
} GameThriveIdsAvailableResult;

typedef struct OneSignalIdsAvailableResult
{
	const char*	m_UserID;
	const char*	m_PushToken;
} OneSignalIdsAvailableResult;

typedef struct OneSignalPostNotificationResult
{
	const char*	m_response;
} OneSignalPostNotificationResult;


typedef void (*GameThriveNotificationReceivedCallbackFn)(GameThriveNotificationReceivedResult* result, void* userData);
typedef void (*GameThriveTagsReceivedCallbackFn)(GameThriveTagsReceivedResult* result, void* userData);
typedef void (*GameThriveIdsAvailableCallbackFn)(GameThriveIdsAvailableResult* result, void* userData);

typedef void (*OneSignalNotificationReceivedCallbackFn)(OneSignalNotificationReceivedResult* result, void* userData);
typedef void (*OneSignalTagsReceivedCallbackFn)(OneSignalTagsReceivedResult* result, void* userData);
typedef void (*OneSignalIdsAvailableCallbackFn)(OneSignalIdsAvailableResult* result, void* userData);
typedef void (*OneSignalPostNotificationCallbackFn)(OneSignalPostNotificationResult* result, void* userData);
// \cond HIDDEN_DEFINES
S3E_BEGIN_C_DECL
// \endcond

/**
 * Report if the OneSignal extension is available.
 * @return S3E_TRUE if the OneSignal extension is available. S3E_FALSE otherwise.
 */
s3eBool s3eOneSignalAvailable();

void GameThriveInitialize(const char* appId, const char* googleProjectNumber, GameThriveNotificationReceivedCallbackFn callbackFn, s3eBool autoRegister);

void GameThriveSendTag(const char* key, const char* value);

void GameThriveGetTags(GameThriveTagsReceivedCallbackFn callbackFn);

void GameThriveDeleteTag(const char* key);

void GameThriveSendPurchase(const double* amount);

void GameThriveGetIdsAvailable(GameThriveIdsAvailableCallbackFn callbackFn);

int GameThriveSystemPaused(void* systemData, void* userData);

int GameThriveSystemResume(void* systemData, void* userData);

void GameThriveRegisterForPushNotifications();

void GameThriveEnableVibrate(s3eBool enable);

void GameThriveEnableSound(s3eBool enable);

void OneSignalInitialize(const char* appId, const char* googleProjectNumber, OneSignalNotificationReceivedCallbackFn callbackFn, s3eBool autoRegister);

void OneSignalSendTag(const char* key, const char* value);

void OneSignalGetTags(OneSignalTagsReceivedCallbackFn callbackFn);

void OneSignalDeleteTag(const char* key);

void OneSignalSendPurchase(const double* amount);

void OneSignalGetIdsAvailable(OneSignalIdsAvailableCallbackFn callbackFn);

int OneSignalSystemPaused(void* systemData, void* userData);

int OneSignalSystemResume(void* systemData, void* userData);

void OneSignalRegisterForPushNotifications();

void OneSignalEnableVibrate(s3eBool enable);

void OneSignalEnableSound(s3eBool enable);

void OneSignalEnableInAppAlertNotification(s3eBool enable);

void OneSignalEnableNotificationsWhenActive(s3eBool enable);

void OneSignalSetSubscription(s3eBool enable);

void OneSignalPostNotification(const char* jsonData);

void OneSignalPostNotificationWithCallback(const char* jsonData, OneSignalPostNotificationCallbackFn callbackSuccessFn, OneSignalPostNotificationCallbackFn callbackFailureFn);

// \cond HIDDEN_DEFINES
S3E_END_C_DECL
// \endcond

/** @} */
/** @} */

#endif /* !S3E_EXT_ONESIGNAL_H */
