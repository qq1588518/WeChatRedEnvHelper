//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BusiF2FSucPageResp, WCPayBaseNetworkingError;

@protocol WCPayBusiF2FSucPageCgiDelegate <NSObject>
- (void)onWCPayBusiF2FSucPageCgiError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayBusiF2FSucPageCgiResp:(BusiF2FSucPageResp *)arg1;
@end

