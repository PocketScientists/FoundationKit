//
//  FoundationKit.h
//  FoundationKit
//
//  Created by Juergen Falb on 06/01/2017.
//  Copyright © 2017 FoundationKit. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for FoundationKit.
FOUNDATION_EXPORT double FoundationKitVersionNumber;

//! Project version string for FoundationKit.
FOUNDATION_EXPORT const unsigned char FoundationKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FoundationKit/PublicHeader.h>

// Blocks
#import <FoundationKit/NSOperationQueue+FKBlocks.h>
#import <FoundationKit/NSArray+FKBlocks.h>
#import <FoundationKit/NSDictionary+FKBlocks.h>
#import <FoundationKit/NSMutableArray+FKBlocks.h>
#import <FoundationKit/NSMutableDictionary+FKBlocks.h>

// Shorthands
#import <FoundationKit/NSArray+FKConcise.h>
#import <FoundationKit/NSMutableArray+FKConcise.h>
#import <FoundationKit/NSNumber+FKConcise.h>

// Macro helpers
#import <FoundationKit/FKAssert.h>
#import <FoundationKit/FKBenchmark.h>
#import <FoundationKit/FKDispatch.h>
#import <FoundationKit/FKHTTPStatusCodes.h>
#import <FoundationKit/FKLog.h>
#import <FoundationKit/FKMath.h>
#import <FoundationKit/FKShorthands.h>
#import <FoundationKit/FKSynthesizeSingleton.h>
#import <FoundationKit/FKInternal.h>

#import <FoundationKit/FKPaths.h>
#import <FoundationKit/FKMutableIntArray.h>
#import <FoundationKit/NSArray+FKDiff.h>
#import <FoundationKit/NSData+FKCrypto.h>
#import <FoundationKit/NSDate+FKAdditions.h>
#import <FoundationKit/NSError+FKAdditions.h>
#import <FoundationKit/NSMutableArray+FKReorder.h>
#import <FoundationKit/NSMutableAttributedString+FKAdditions.h>
#import <FoundationKit/NSMutableString+FKAdditions.h>
#import <FoundationKit/NSNotificationCenter+FKMainThread.h>
#import <FoundationKit/NSObject+FKAssociatedObjects.h>
#import <FoundationKit/NSObject+FKDeallocBlock.h>
#import <FoundationKit/NSObject+FKObserver.h>
#import <FoundationKit/NSObject+FKPerform.h>
#import <FoundationKit/NSObject+FKReflection.h>
#import <FoundationKit/NSObject+FKSwizzle.h>
#import <FoundationKit/NSString+FKAdditions.h>
#import <FoundationKit/NSString+FKLevenshtein.h>
#import <FoundationKit/NSString+FKXML.h>
#import <FoundationKit/NSUserDefaults+FKAdditions.h>
#import <FoundationKit/NSURL+FKQueryParameters.h>
