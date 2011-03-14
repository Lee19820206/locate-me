//
//  MapLocation.m
//  locate-me
//
//  Created by Yorick Chan on 14/03/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MapLocation.h"
#import <MapKit/MapKit.h>


@implementation MapLocation

@synthesize streetAddress;
@synthesize state;
@synthesize city;
@synthesize coordinate;

#pragma mark -
- (NSString *)title {
    return NSLocalizedString(@"I'm here", @"I'm here");
}

- (NSString *)subtitle {
    NSMutableString *ret = [NSMutableString string];
    if (streetAddress)
        [ret appendString:streetAddress];
    if (streetAddress && (city || state))
        [ret appendString:@" . "];
    if (city)
        [ret appendString:city];
    if (city && state)
        [ret appendString:@", "];
    if (state)
        [ret appendString:state];
    
    return ret;
    
}

#pragma mark -
- (void)dealloc {
    [streetAddress release];
    [city release];
    [state release];
    [super dealloc];
}

#pragma mark -
#pragma mark NSCoding Methods
- (void)encodeWithCoder:(NSCoder *)encoder {
    [encoder encodeObject:[self streetAddress] forKey: @"streetAddress"];
    [encoder encodeObject:[self city] forKey: @"city"];
    [encoder encodeObject:[self state] forKey: @"state"];
}

- (id) initWithCoder:(NSCoder *)decoder {
    if (self == [super init]) {
        [self setStreetAddress: [decoder decodeObjectForKey: @"streetAddress"]];
        [self setCity: [decoder decodeObjectForKey: @"city"]];
        [self setState: [decoder decodeObjectForKey: @"state"]];
    }
    return self;
}

@end
