//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface PUPhotosSectionHeaderContentView : UIView
{
    UILabel *titleLabel;
    UILabel *locationsLabel;
    UILabel *dateLabel;
    UIImageView *locationsIconView;
}

@property(retain, nonatomic) UIImageView *locationsIconView; // @synthesize locationsIconView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *locationsLabel; // @synthesize locationsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
