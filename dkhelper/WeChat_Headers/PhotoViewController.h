//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "IHttpCacheExt-Protocol.h"
#import "MultiImageScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMUILabel, MultiImageScrollView, NSMutableArray, NSMutableDictionary, NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode;
@protocol PhotoViewControllerDelegate;

@interface PhotoViewController : WCDragToCloseViewController <WCActionSheetDelegate, BaseScanLogicDelegate, MultiImageScrollViewDelegate, IHttpCacheExt>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageUrl;
    _Bool m_bAnimating;
    _Bool m_isFromWebview;
    double _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    NSString *m_appID;
    MMUILabel *_title;
    NSString *m_referer;
    _Bool _isFromWeApp;
    _Bool _isFromSafariOr3rdApp;
    _Bool _needDistinguishGif;
    int _presetIndex;
    NSString *_relativeUrl;
    id <PhotoViewControllerDelegate> _delegate;
    NSString *_firstUrlString;
    NSString *_webViewUrlString;
    NSString *_fromBizUser;
    NSMutableDictionary *_presetImages;
    struct CGRect _tappedPhotoInWebViewPosition;
}

+ (id)imageFromCacheWithUrl:(id)arg1;
+ (id)imageDataFromCacheWithUrl:(id)arg1;
+ (id)genKeyForUrl:(id)arg1;
@property(nonatomic) int presetIndex; // @synthesize presetIndex=_presetIndex;
@property(retain, nonatomic) NSMutableDictionary *presetImages; // @synthesize presetImages=_presetImages;
@property(nonatomic) struct CGRect tappedPhotoInWebViewPosition; // @synthesize tappedPhotoInWebViewPosition=_tappedPhotoInWebViewPosition;
@property(retain, nonatomic) NSString *fromBizUser; // @synthesize fromBizUser=_fromBizUser;
@property(retain, nonatomic) NSString *webViewUrlString; // @synthesize webViewUrlString=_webViewUrlString;
@property(retain, nonatomic) NSString *firstUrlString; // @synthesize firstUrlString=_firstUrlString;
@property(nonatomic) __weak id <PhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *relativeUrl; // @synthesize relativeUrl=_relativeUrl;
@property(nonatomic) _Bool needDistinguishGif; // @synthesize needDistinguishGif=_needDistinguishGif;
@property(nonatomic) _Bool isFromSafariOr3rdApp; // @synthesize isFromSafariOr3rdApp=_isFromSafariOr3rdApp;
@property(nonatomic) _Bool isFromWeApp; // @synthesize isFromWeApp=_isFromWeApp;
@property(nonatomic) _Bool isFromWebview; // @synthesize isFromWebview=m_isFromWebview;
- (void).cxx_destruct;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setTitle:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)onScanEnds;
- (void)onTranslateWordInImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)detectWordInImage;
- (void)onOperate;
- (void)onSavedPhotosAlbum;
- (void)onAnimationDidStop;
- (void)showFullScreen;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 referer:(id)arg4;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addPresetImageForCurrentIndex:(id)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageWithData:(id)arg1;
- (id)imageDataAtPage:(unsigned int)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (_Bool)useCustomNavibar;
- (void)dealloc;
- (void)enterForeground;
- (void)onMainWindowFrameChanged;
- (void)viewDidLoad;
- (id)init;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)initScrollView;
- (void)initNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)hidesStatusBar;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
