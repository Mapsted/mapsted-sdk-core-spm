//
//  MNTag.h
//  positioning
//
//  Created by Mapsted on 2019-08-19.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MapstedCore/MNPosition.h"
#import "MapstedCore/Searchable.h"

@protocol Searchable;

/// Representes a Tag, useful as a bookmark or a frequent location.
@interface MNTag : NSObject <Searchable>

/**
     Creates an instance of the 'MNTag' class with the specified parametrs.
     
     - Parameter name: The name of the tag
     - Parameter tagId: A number identifying the tag
     - Parameter position: The position of the entity tagged (with information such as zone, location, accuracy, etc)
     - Returns: A new instance of 'MNTag' 
*/
- (instancetype)initWithName: (NSString *)name tagId:(NSInteger)tagId position:(MNPosition *)position;
- (instancetype)initWithName: (NSString *)name tagId:(NSInteger)tagId type:(NSInteger)type position:(MNPosition *)position;
- (void)updateNameString:(NSString *)name;
- (NSString*) getNameString;
- (MNPosition*) getPosition;

- (void)setMatchWord: (NSString*) word;
- (NSString*) getMatchWord;
- (NSInteger) getType;
- (void)setTimeStampDescription:(NSString *)timeStampDescription;
- (NSString*) getTimeStampDescription;
@end

