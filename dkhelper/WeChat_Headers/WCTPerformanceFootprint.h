//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTPerformanceFootprint : NSObject
{
    unsigned int _frequency;
    NSString *_sql;
}

@property(readonly, nonatomic) unsigned int frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSQL:(id)arg1 andFrequency:(unsigned int)arg2;

@end

