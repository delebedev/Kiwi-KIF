//
//  KWSpec+KIFAdditions.m
//  WOWPAssistant
//
//  Created by Denis Lebedev on 14.11.13.
//  Copyright (c) 2013 Wargaming. All rights reserved.
//


#import "Kiwi+KIF.h"

@implementation KWSpec (KIFAdditions)

+ (void)failWithException:(NSException *)exception stopTest:(BOOL)stop {
    [[[KWExampleSuiteBuilder sharedExampleSuiteBuilder] currentExample] reportFailure:[KWFailure failureWithCallSite:[KWCallSite callSiteWithFilename:exception.filename lineNumber:exception.lineNumber.unsignedIntegerValue] format:@"%@", exception.description]];
	
    if (stop) { [exception raise]; }
}

+ (void)failWithExceptions:(NSArray *)exceptions stopTest:(BOOL)stop {
    for (NSException *exception in exceptions) {
        [self failWithException:exception stopTest:exception == exceptions.lastObject ? stop : NO];
    }
}

@end