//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKWCPayService-Protocol.h"
#import "WCPayOfflineLogicDelegate-Protocol.h"
#import "WCPayWalletLockSettingLogicDelegate-Protocol.h"
#import "WCPayWalletLockVerifyLogicDelegate-Protocol.h"

@class MMVoidITransmitKvDataCallback, NSString, WCPayOfflinePayMainLogic;

@interface KindaWCPayService : NSObject <WCPayOfflineLogicDelegate, WCPayWalletLockSettingLogicDelegate, WCPayWalletLockVerifyLogicDelegate, MMKWCPayService>
{
    WCPayOfflinePayMainLogic *mOfflinePayMainLogic;
    MMVoidITransmitKvDataCallback *mQuitCallback;
}

- (void).cxx_destruct;
- (_Bool)isWCPayRegUser;
- (_Bool)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (void)onOfflinePayLogicStop:(_Bool)arg1;
- (_Bool)isNeedWalletLock;
- (void)getBannerInfoImpl:(int)arg1 callback:(id)arg2;
- (void)startUseCaseImpl:(id)arg1 data:(id)arg2 quitCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
