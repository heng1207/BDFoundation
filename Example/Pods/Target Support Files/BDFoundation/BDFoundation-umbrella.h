#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ehm.h"
#import "NSArray+Safe.h"
#import "NSMutableArray+Safe.h"

FOUNDATION_EXPORT double BDFoundationVersionNumber;
FOUNDATION_EXPORT const unsigned char BDFoundationVersionString[];

