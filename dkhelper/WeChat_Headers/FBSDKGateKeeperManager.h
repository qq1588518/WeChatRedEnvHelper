//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKGateKeeperManager : NSObject
{
}

+ (_Bool)_gateKeeperIsValid;
+ (_Bool)_gateKeeperTimestampIsValid:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (id)requestToLoadGateKeepers:(id)arg1;
+ (void)loadGateKeepers;
+ (_Bool)boolForKey:(id)arg1 appID:(id)arg2 defaultValue:(_Bool)arg3;

@end
