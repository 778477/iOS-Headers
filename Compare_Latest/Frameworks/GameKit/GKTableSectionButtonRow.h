/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableSection.h>

@class NSArray, NSIndexSet, NSString;

@interface GKTableSectionButtonRow : GKTableSection
{
    NSArray *_buttonTitles;
    NSArray *_buttonActions;
    int _buttonType;
    struct UIEdgeInsets _buttonInsets;
    NSArray *_buttons;
    BOOL _hidden;
    BOOL _useFullColumnWidth;
    float _headerHeight;
    float _footerHeight;
    float _minButtonWidthForWideTable;
    float _minButtonWidthForNarrowTable;
    float _minButtonWidthThreshold;
    NSString *_footerText;
    float _betweenButtonsMargin;
    NSIndexSet *_buttonIndexesShowingLoadingIndicator;
    float _footerSideMargin;
    BOOL _useStackedButtons;
}

+ (id)sectionWithButtonTitle:(id)arg1 action:(SEL)arg2;
@property(nonatomic) BOOL useStackedButtons; // @synthesize useStackedButtons=_useStackedButtons;
@property(nonatomic) float footerSideMargin; // @synthesize footerSideMargin=_footerSideMargin;
@property(retain, nonatomic) NSIndexSet *buttonIndexesShowingLoadingIndicator; // @synthesize buttonIndexesShowingLoadingIndicator=_buttonIndexesShowingLoadingIndicator;
@property(nonatomic) float betweenButtonsMargin; // @synthesize betweenButtonsMargin=_betweenButtonsMargin;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) float minButtonWidthThreshold; // @synthesize minButtonWidthThreshold=_minButtonWidthThreshold;
@property(nonatomic) float minButtonWidthForNarrowTable; // @synthesize minButtonWidthForNarrowTable=_minButtonWidthForNarrowTable;
@property(nonatomic) float minButtonWidthForWideTable; // @synthesize minButtonWidthForWideTable=_minButtonWidthForWideTable;
@property(nonatomic) float footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) float headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) BOOL useFullColumnWidth; // @synthesize useFullColumnWidth=_useFullColumnWidth;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) struct UIEdgeInsets buttonInsets; // @synthesize buttonInsets=_buttonInsets;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
- (id)viewForSectionFooterInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)minButtonWidthForTable:(id)arg1;
- (void)centerButton:(id)arg1 tableWidth:(float)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)buttonAtIndex:(int)arg1;
- (void)buttonWasTouched:(id)arg1;
- (float)tableView:(id)arg1 contentViewHeightForRow:(int)arg2;
- (float)tableView:(id)arg1 contentViewWidthForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)useStackedButtonsInTableView:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)stopLoadingIndicatorForButtonAtIndex:(int)arg1 inTableView:(id)arg2;
- (void)startLoadingIndicatorForButtonAtIndex:(int)arg1 inTableView:(id)arg2;
- (void)dealloc;
- (id)init;

@end

