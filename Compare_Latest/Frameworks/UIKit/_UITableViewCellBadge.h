/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString;

@interface _UITableViewCellBadge : UIView
{
    BOOL _isSelected;
    NSString *_text;
    struct CGSize _textSize;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_isSelected;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)_sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

