//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LensInfo, NSString;

@protocol EmoticonLensInfoBatchCgiDelegate <NSObject>
- (void)onEmoticonLensInfoInvalid:(NSString *)arg1 errType:(long long)arg2;
- (void)onEmoticonLensInfoSuccess:(LensInfo *)arg1 forLensId:(NSString *)arg2 finish:(_Bool)arg3;
- (void)onEmoticonLensInfoFail:(NSString *)arg1;
@end
