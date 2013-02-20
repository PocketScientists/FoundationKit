// Part of FoundationKit http://foundationk.it
//
// Derived from Gi-Lo‘s Gist: https://gist.github.com/4279932


#import <Foundation/Foundation.h>


@interface NSURL (FKQueryParameters)

+ (NSURL *)URLWithString:(NSString *)string queryValuesForKeys:(NSString *)value, ...;

@end
