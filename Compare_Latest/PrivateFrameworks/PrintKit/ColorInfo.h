/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ColorInfo : NSObject
{
    NSString *colorReason;
    NSMutableArray *gstateStack;
    NSString *strokeColorspace;
    NSString *nonStrokeColorspace;
}

@property(retain) NSString *nonStrokeColorspace; // @synthesize nonStrokeColorspace;
@property(retain) NSString *strokeColorspace; // @synthesize strokeColorspace;
@property(retain) NSMutableArray *gstateStack; // @synthesize gstateStack;
- (void).cxx_destruct;
- (void)grestore;
- (void)gsave;
@property(retain) NSString *colorReason; // @dynamic colorReason;
- (id)init;

@end

