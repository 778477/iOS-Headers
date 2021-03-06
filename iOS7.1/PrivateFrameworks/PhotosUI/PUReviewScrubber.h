//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UITapGestureRecognizer, _UIBackdropView;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    BOOL __ignoreScrollViewDidScrollUpdate;
    BOOL __performingInteractiveUpdate;
    id <PUReviewScrubberDataSource> _dataSource;
    id <PUReviewScrubberDelegate> _scrubberDelegate;
    int _selectedIndex;
    unsigned int __numberOfPhotos;
    _UIBackdropView *__backdropView;
    UIImageView *__shadowView;
    UIImageView *__arrowImageView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UITapGestureRecognizer *__tapGestureRecognizer;
}

@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) BOOL _performingInteractiveUpdate; // @synthesize _performingInteractiveUpdate=__performingInteractiveUpdate;
@property(readonly, nonatomic) BOOL _ignoreScrollViewDidScrollUpdate; // @synthesize _ignoreScrollViewDidScrollUpdate=__ignoreScrollViewDidScrollUpdate;
@property(readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(readonly, nonatomic) UIImageView *_arrowImageView; // @synthesize _arrowImageView=__arrowImageView;
@property(readonly, nonatomic) UIImageView *_shadowView; // @synthesize _shadowView=__shadowView;
@property(readonly, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(readonly, nonatomic) unsigned int _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <PUReviewScrubberDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(nonatomic) id <PUReviewScrubberDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_notifyDelegateOfSelection;
- (void)_notifyDelegateOfScrub;
- (void)_updateToSelectedIndex:(int)arg1;
- (struct CGPoint)contentOffsetForIndexOfTickMark:(int)arg1 ofScrollView:(id)arg2;
- (int)_indexOfCellAtContentOffset:(struct CGPoint)arg1 ofScrollView:(id)arg2;
- (void)_updateContentOffsetForSelectedIndexAnimated:(BOOL)arg1;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (void)finishInteractiveUpdate;
- (void)updateWithAbsoluteProgress:(float)arg1;
- (void)beginInteractiveUpdate;
- (void)reloadSelectedIndexAnimated:(BOOL)arg1;
- (void)reloadIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)toggleSelectedIndexAnimated:(BOOL)arg1;
- (void)toggleIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)reloadData;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
- (BOOL)isMinibar;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUReviewScrubberInitialization;

@end

