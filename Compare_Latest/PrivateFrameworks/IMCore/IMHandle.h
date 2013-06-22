/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMDirectlyObservableObject.h"

#import "NSCoding-Protocol.h"

@class IMAccount, IMPerson, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMutableArray, NSSet, NSString, NSURL;

@interface IMHandle : IMDirectlyObservableObject <NSCoding>
{
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSString *_uncanonicalID;
    NSString *_countryCode;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_presenceProps;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber *_phoneNumberRef;
    NSString *_formattedNumber;
    BOOL _hasCheckedPhoneNumber;
    unsigned int _status;
    unsigned int _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned int _resourceIndex;
    int _IDStatus;
    BOOL _isRetainingAccount;
    BOOL _blockNotifications;
    BOOL _hasTemporaryWatch;
    BOOL _isMobile;
    BOOL _isBot;
    BOOL _isAnonymous;
    BOOL _beingTornDown;
    BOOL _willUpdateIdleTime;
    BOOL _hasCheckedCardMap;
    BOOL _isRegistered;
    int _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
}

+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(unsigned int)arg1;
+ (void)_loadStatusNames;
+ (BOOL)notificationsEnabled;
+ (void)setNotificationsEnabled:(BOOL)arg1;
@property(readonly, nonatomic) int addressBookIdentifier; // @synthesize addressBookIdentifier=_addressBookIdentifier;
@property(retain, nonatomic) NSURL *statusMessageAsURL; // @synthesize statusMessageAsURL=_statusMessageURL;
@property(readonly, nonatomic) BOOL isBot; // @synthesize isBot=_isBot;
@property(readonly, nonatomic) BOOL isMobile; // @synthesize isMobile=_isMobile;
@property(retain, nonatomic) NSDictionary *otherServiceIDs; // @synthesize otherServiceIDs=_otherServiceIDs;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *uniqueName; // @synthesize uniqueName=_uniqueName;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_id;
@property(readonly, nonatomic) NSData *pictureData; // @synthesize pictureData=_pictureData;
@property(readonly, nonatomic) NSAttributedString *richStatusMessage; // @synthesize richStatusMessage=_richStatusMsg;
@property(readonly, nonatomic) NSString *previousStatusMessage; // @synthesize previousStatusMessage=_prevStatusMsg;
@property(readonly, nonatomic) NSDate *feedUpdatedDate; // @synthesize feedUpdatedDate=_feedUpdatedDate;
@property(readonly, nonatomic) unsigned int previousStatus; // @synthesize previousStatus=_prevStatus;
@property(readonly, nonatomic) unsigned int authRequestStatus; // @synthesize authRequestStatus=_authRequestStatus;
@property(readonly, nonatomic) NSDictionary *presenceProperties; // @synthesize presenceProperties=_presenceProps;
@property(readonly, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProps;
@property(readonly, nonatomic) NSURL *statusURL; // @synthesize statusURL=_statusURL;
@property(setter=_setIsRegisteredWithRegistrar:) BOOL _isRegisteredWithRegistrar; // @synthesize _isRegisteredWithRegistrar=_isRegistered;
@property(retain, nonatomic) NSString *originalID; // @synthesize originalID=_uncanonicalID;
- (void)sendNotificationABPersonChanged;
- (id)description;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
@property(retain, nonatomic) NSData *customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (void)_sendData:(id)arg1;
@property(readonly, nonatomic) BOOL hasMultiwayAudio;
@property(readonly, nonatomic) BOOL hasAudio;
@property(readonly, nonatomic) BOOL hasMultiwayVideo;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic) BOOL isConferenceAvailable;
@property(readonly, nonatomic) BOOL hasConferencing;
@property(readonly, nonatomic) BOOL supportsARDMuxing;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (BOOL)_setCapabilities:(unsigned long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long capabilities;
- (id)_bestChatSibling;
- (id)_chatSiblingsArray;
- (id)_chatSiblings;
- (BOOL)_isChatSiblingOf:(id)arg1;
- (BOOL)isSiblingOf:(id)arg1;
- (BOOL)isAccountSiblingOf:(id)arg1;
@property(readonly, nonatomic) NSSet *siblings;
- (id)chatSiblingsArray;
- (id)existingChatSiblingsArray;
@property(readonly, nonatomic) NSArray *accountSiblingsArray;
@property(readonly, nonatomic) NSArray *existingAccountSiblingsArray;
@property(readonly, nonatomic) NSArray *siblingsArray;
@property(readonly, nonatomic) BOOL hasOtherSiblings;
- (BOOL)matchesIMHandle:(id)arg1;
- (int)compareAccountNames:(id)arg1;
- (int)compareNormalizedIDs:(id)arg1;
- (int)compareIDs:(id)arg1;
- (int)compareStatus:(id)arg1;
- (int)compareLastNames:(id)arg1;
- (int)compareFirstNames:(id)arg1;
- (id)_nameForComparisonPreferFirst:(BOOL)arg1;
@property(readonly, nonatomic) double timeSinceStatusChanged;
@property(readonly, nonatomic) double timeSinceWentOffline;
- (void)setStatus:(unsigned int)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)_updateIdleTimer;
- (void)_updateIdleTime;
- (void)_scheduleIdleTimeUpdate;
- (void)_clearStatusMessageURLCache;
@property(readonly, nonatomic) NSString *statusMessage;
- (void)_filterStatusMessage;
@property(readonly, nonatomic) NSString *idleString;
@property(readonly, nonatomic) NSString *offlineString;
- (void)setStatusURLFromString:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
@property(nonatomic) int IDStatus; // @synthesize IDStatus=_IDStatus;
- (void)requestIDStatus;
@property(readonly, nonatomic) double idleTime;
@property(readonly, nonatomic) NSString *nameOfStatus;
- (void)statusChanged:(unsigned int)arg1;
- (void)statusMessageChanged:(id)arg1;
- (void)statusChanged:(unsigned int)arg1 message:(id)arg2;
- (void)setPersonStatus:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int status;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)_stopRetainingAccount:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
@property(readonly, nonatomic) NSArray *dependentIMHandles;
@property(readonly, nonatomic) id existingIMHandleWithoutResource;
@property(readonly, nonatomic) id imHandleWithoutResource;
@property(readonly, nonatomic) NSString *IDWithoutResource;
@property(readonly, nonatomic) NSString *resource;
@property(readonly, nonatomic) NSString *accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
@property(nonatomic, setter=setBlocked:) BOOL isBlocked;
@property(readonly, nonatomic) BOOL isVisiblyBlocked;
- (BOOL)_isMyIDInList:(id)arg1;
- (void)propertiesChanged:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
- (void)setPresenceProperties:(id)arg1;
@property(readonly, nonatomic) id bestSibling;
- (id)bestSiblingInGroup:(id)arg1;
- (id)bestSiblingInGroup:(id)arg1 otherThan:(id)arg2;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
@property(readonly, nonatomic) id bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (BOOL)isBetterThanIMHandle:(id)arg1;
- (void)setHasTemporaryWatch:(BOOL)arg1;
@property(readonly, nonatomic) BOOL watchingIMHandle;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (void)requestValueOfProperty:(id)arg1;
- (id)_formattedPhoneNumber;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (void)_createPhoneNumberRefIfNeeded;
@property(readonly, nonatomic) BOOL isLoginIMHandle;
@property(readonly, nonatomic) BOOL isLoginIMHandleForAnyAccount;
@property(readonly, nonatomic) BOOL isBuddy;
@property(readonly, nonatomic) NSString *server;
@property(readonly, nonatomic) BOOL hasResource;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasServer;
@property(readonly, nonatomic) NSString *mobileDeviceName;
- (void)setIsBot:(BOOL)arg1;
- (void)setIsMobile:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSystemUser;
@property(readonly, nonatomic) BOOL canBeAdded;
- (void)setEmails:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
@property(readonly, nonatomic) NSArray *emails;
- (void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2;
@property(readonly, nonatomic) NSString *email;
- (void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4;
- (void)setLocalNickname:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *nickname;
@property(readonly, nonatomic) BOOL hasName;
- (void)resetUniqueName;
@property(readonly, nonatomic) NSString *nameAndID;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *normalizedID;
@property(readonly, nonatomic) NSString *displayID;
- (id)_nameUsingUnique:(BOOL)arg1;
- (BOOL)_hasABName;
- (BOOL)_hasServiceNameProperties;
- (id)_IDWithTrimmedServer;
@property(retain, nonatomic, setter=setIMPerson:) IMPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) IMPerson *_cachedPerson;
- (void)_clearABPersonLookup;
- (void)resetABProperties;
- (void)_clearABProperties;
@property(readonly, nonatomic) BOOL areABPropertiesRecent;
- (id)_abPersonCreateIfNeeded;
- (BOOL)resetABPerson;
- (void)clearABPerson;
- (unsigned int)hash;
@property(readonly, nonatomic) IMServiceImpl *service;
@property(readonly, nonatomic) NSString *nameAndEmail;
- (void)setUniqueName:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1;
- (void)_registerForNotifications;
@property(readonly, nonatomic) BOOL isAnonymous;
- (void)setAnonymous:(BOOL)arg1;
@property(readonly, nonatomic) NSSet *groups;
@property(readonly, nonatomic) NSArray *groupsArray;
- (id)imHandleForOtherAccount:(id)arg1;
@property(readonly, nonatomic) BOOL canBeDeleted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setOriginalID:(id)arg1;
- (void)_setCountryCode:(id)arg1;
- (void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3;
- (id)_handleInfo;
- (void)dealloc;
- (void)finalize;
- (oneway void)release;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3;
- (id)init;
- (void)_registerForIMPersonPictureChanges;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (BOOL)shouldQueueNotifications;
- (id)publicAPIPropertiesDictionary;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (id)imHandleRegistrarGUID;

@end

