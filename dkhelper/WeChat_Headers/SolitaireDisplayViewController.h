//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMRTCMenuResponderDelegate-Protocol.h"
#import "MMRichTextSelectEventDelegate-Protocol.h"
#import "SolitaireDisplayTableViewCellDelegate-Protocol.h"
#import "SolitaireToolLogicControllerDelegate-Protocol.h"
#import "SolitaireToolViewDelegate-Protocol.h"
#import "TransitioningAnimationDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CContact, CrossfadeAnimationController, MMGrowTextView, MMHeadImageView, MMTableView, MMTextView, MMUIView, NSMutableArray, NSMutableSet, NSString, SolitaireObj, SolitaireToolLogicController, SolitaireToolView, UIButton, UILabel, UIView;
@protocol SolitaireDisplayViewControllerDelegate;

@interface SolitaireDisplayViewController : MMUIViewController <SolitaireToolViewDelegate, SolitaireToolLogicControllerDelegate, TransitioningAnimationDelegate, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, scrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MMGrowTextViewDelegate, SolitaireDisplayTableViewCellDelegate, tableViewDelegate>
{
    _Bool _bAddNewLine;
    _Bool _hasExampleItem;
    _Bool _isTextViewFixOnKeyBoard;
    id <SolitaireDisplayViewControllerDelegate> _delegate;
    SolitaireObj *_solitaireObj;
    MMGrowTextView *_headTextView;
    MMGrowTextView *_tailTextView;
    SolitaireToolView *_toolView;
    SolitaireToolLogicController *_toolLogicController;
    MMTextView *_currentTextView;
    unsigned long long _enterScene;
    MMHeadImageView *_headImageView;
    UILabel *_infoLabel;
    CContact *_contact;
    MMGrowTextView *_textViewtoCalculate;
    CrossfadeAnimationController *_transitionInstance;
    MMTableView *_tableView;
    MMUIView *_tableHeadView;
    UIView *_headLineView;
    MMUIView *_tableTailView;
    NSMutableArray *_solitaireArray;
    UIButton *_addButton;
    double _keyboardHeight;
    NSString *_cacheHeadText;
    NSString *_cacheTailText;
    NSMutableSet *_nameSet;
}

@property(retain, nonatomic) NSMutableSet *nameSet; // @synthesize nameSet=_nameSet;
@property(copy, nonatomic) NSString *cacheTailText; // @synthesize cacheTailText=_cacheTailText;
@property(copy, nonatomic) NSString *cacheHeadText; // @synthesize cacheHeadText=_cacheHeadText;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isTextViewFixOnKeyBoard; // @synthesize isTextViewFixOnKeyBoard=_isTextViewFixOnKeyBoard;
@property(nonatomic) _Bool hasExampleItem; // @synthesize hasExampleItem=_hasExampleItem;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSMutableArray *solitaireArray; // @synthesize solitaireArray=_solitaireArray;
@property(retain, nonatomic) MMUIView *tableTailView; // @synthesize tableTailView=_tableTailView;
@property(retain, nonatomic) UIView *headLineView; // @synthesize headLineView=_headLineView;
@property(retain, nonatomic) MMUIView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CrossfadeAnimationController *transitionInstance; // @synthesize transitionInstance=_transitionInstance;
@property(retain, nonatomic) MMGrowTextView *textViewtoCalculate; // @synthesize textViewtoCalculate=_textViewtoCalculate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) MMTextView *currentTextView; // @synthesize currentTextView=_currentTextView;
@property(retain, nonatomic) SolitaireToolLogicController *toolLogicController; // @synthesize toolLogicController=_toolLogicController;
@property(retain, nonatomic) SolitaireToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) MMGrowTextView *tailTextView; // @synthesize tailTextView=_tailTextView;
@property(retain, nonatomic) MMGrowTextView *headTextView; // @synthesize headTextView=_headTextView;
@property(retain, nonatomic) SolitaireObj *solitaireObj; // @synthesize solitaireObj=_solitaireObj;
@property(nonatomic) _Bool bAddNewLine; // @synthesize bAddNewLine=_bAddNewLine;
@property(nonatomic) __weak id <SolitaireDisplayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideKeyboard;
- (void)onSolitaireAlertViewconfirm;
- (void)onSolitaireAlertViewCancel;
- (void)sendSolitaire;
- (void)onSolitaire:(id)arg1;
- (void)exitSolitaireFormatInput;
- (void)onCancelAlertViewConfirm;
- (void)onCancelAlertViewCancel;
- (void)OnCancel;
- (id)getNewItemCotent;
- (void)onAdding;
- (void)lastCellBecomeFirstResponder;
- (id)getTrimmedSoliatireArray;
- (_Bool)isAllContentChanged;
- (void)checkRemoveNoCotentSolitaireItem;
- (_Bool)isSolitaireArrayHasTrueCotent;
- (_Bool)isSendButtonEnable;
- (void)setSendButtonIfEnable;
- (void)onBeFirstResponderAndShowKeyboard:(id)arg1 keyboardHeight:(double)arg2;
- (_Bool)isAddButtonHidden;
- (void)textViewOfCellHeightDidChanged:(id)arg1 withOriginalText:(id)arg2 andNewText:(id)arg3;
- (void)textViewOfCellBeginEditing:(id)arg1;
- (void)keyboardOfCellWillAppear:(double)arg1 ofCell:(id)arg2;
- (void)textOfCellDidChange:(id)arg1 ofOriginItem:(id)arg2;
- (void)textViewOfCellDidEnterNilOfOriginItem:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)onKeyboardWillHide;
- (void)keyboardWillShow:(double)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)resetTextViewtoCalculateSize:(struct CGSize)arg1;
- (void)initNavigationBar;
- (id)makeLineView;
- (id)initWithSolitaireObj:(id)arg1;
- (void)onGetResult:(id)arg1 FromToolType:(unsigned int)arg2;
- (id)getViewController;
- (unsigned long long)getCurActiveInputSourceType;
- (void)reportClickType:(unsigned long long)arg1;
- (void)onClickTimeToolBtn;
- (void)onClickTelephoneToolBtn;
- (void)onClickLocationToolBtn;
- (_Bool)checkFirstResponderIsMMTextView;
- (void)updateToolBarHeight:(double)arg1;
- (void)initToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
