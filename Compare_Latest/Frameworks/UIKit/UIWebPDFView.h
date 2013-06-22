/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "WebPDFViewPlaceholderDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject<UIWebPDFViewDelegate>, NSString, NSURL, UIColor, UIPDFDocument, UITapGestureRecognizer, WebPDFViewPlaceholder;

@interface UIWebPDFView : UIView <WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument *_cgPDFDocument;
    UIPDFDocument *_document;
    BOOL _hasScheduledCacheUpdate;
    struct CGRect _documentBounds;
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;
    BOOL _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_documentURL;
    BOOL _rotating;
    BOOL _zooming;
    float _initialZoomScale;
    struct CGAffineTransform _documentTransform;
    float _documentScale;
    int _ignoreContentOffsetChanges;
    struct CGPoint _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    NSArray *_pageMinYs;
    WebPDFViewPlaceholder *pdfPlaceHolderView;
    BOOL hidePageViewsUntilReadyToRender;
    UIColor *backgroundColorForUnRenderedContent;
    BOOL hideActivityIndicatorForUnRenderedContent;
    NSString *documentPassword;
    NSArray *pageRects;
    BOOL readyForSnapshot;
}

+ (void)setAsPDFDocRepAndView;
@property(retain, nonatomic) NSArray *pageMinYs; // @synthesize pageMinYs=_pageMinYs;
@property(nonatomic) BOOL readyForSnapshot; // @synthesize readyForSnapshot;
@property(retain, nonatomic) NSArray *pageRects; // @synthesize pageRects;
@property(retain, nonatomic) NSString *documentPassword; // @synthesize documentPassword;
@property(nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent;
@property(nonatomic) BOOL hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender;
@property(nonatomic) int ignoreContentOffsetChanges; // @synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges;
@property WebPDFViewPlaceholder *pdfPlaceHolderView; // @synthesize pdfPlaceHolderView;
@property(readonly, nonatomic) float documentScale; // @synthesize documentScale=_documentScale;
@property(nonatomic) struct CGAffineTransform documentTransform; // @synthesize documentTransform=_documentTransform;
@property(nonatomic) float initialZoomScale; // @synthesize initialZoomScale=_initialZoomScale;
@property(readonly, nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate; // @synthesize pdfDelegate=_pdfDelegate;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)imageForContactRect:(struct CGRect)arg1 onPageInViewRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3;
- (unsigned int)_pageNumberForRect:(struct CGRect)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_define:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_selection;
- (id)_pageWithSelection;
- (void)clearSelection;
- (void)annotationIsBeingPressed:(id)arg1 annotation:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)annotationWasTouched:(id)arg1 annotation:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned int)arg4;
- (void)didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned int)arg4;
- (void)didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)resetZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
- (void)didCompleteLayout;
- (void)_recreateUIPDFDocument;
- (BOOL)_checkIfDocumentNeedsUnlock;
- (BOOL)_tryToUnlockDocumentWithPassword:(id)arg1;
- (void)viewWillClose;
- (void)snapshotComplete;
- (void)prepareForSnapshot:(BOOL)arg1;
- (unsigned int)firstVisiblePageNumber;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)_didScroll;
- (void)willScroll:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(BOOL)arg1;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect)arg1;
- (id)_addPageAtIndex:(unsigned int)arg1;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect)arg1 force:(BOOL)arg2;
- (id)_installViewAtIndex:(int)arg1 inFrame:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)_viewCachingBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewportView;
- (id)viewAtIndex:(int)arg1;
- (void)dealloc;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
@property(readonly, nonatomic) UIPDFDocument *document;
- (id)uiPDFDocument;
@property(readonly, nonatomic) struct CGPDFDocument *cgPDFDocument;
- (BOOL)_hasPageRects;
@property(readonly, nonatomic) unsigned int totalPages;

@end

