//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (WebNSURLExtras)
+ (id)uniqueURLWithRelativePart:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_hostString;
- (id)_web_hostData;
- (id)_web_schemeData;
- (id)_web_dataForURLComponentType:(long)arg1;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_URLWithLowercasedScheme;
- (BOOL)_webkit_shouldLoadAsEmptyDocument;
- (BOOL)_webkit_isFTPDirectoryURL;
- (BOOL)_webkit_isFileURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (BOOL)_webkit_isJavaScriptURL;
- (id)_web_URLByRemovingUserInfo;
- (id)_webkit_URLByRemovingResourceSpecifier;
- (id)_webkit_URLByRemovingFragment;
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)arg1;
- (id)_webkit_canonicalize;
- (const char *)_web_URLCString;
- (BOOL)_web_isEmpty;
- (id)_web_userVisibleString;
- (id)_web_originalDataAsString;
- (id)_web_originalData;
@end

