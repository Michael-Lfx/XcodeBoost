//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBXTrackableTask.h"

@class XCSDKPath;

@interface XCCompositeSDKTask : NSObject <PBXTrackableTask>
{
    XCSDKPath *_compositeSDK;
}

- (BOOL)taskStopRunning;
- (id)taskDescriptionString;
- (id)taskBadge;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (BOOL)taskCanBeStoppedManually;
- (BOOL)taskRequiresIntervention;
- (int)taskProgressType;
- (float)taskPercentComplete;
- (id)initWithSDK:(id)arg1;

@end
