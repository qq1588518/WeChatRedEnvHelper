//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QIndoorBuilding, QIndoorLevel, QIndoorManager;

@protocol QIndoorManagerDelegate <NSObject>

@optional
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveLevel:(QIndoorLevel *)arg2;
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveBuilding:(QIndoorBuilding *)arg2;
@end

