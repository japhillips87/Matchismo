//
//  PlayingCard.h
//  Matchismo
//
//  Created by Josh Phillips on 1/31/13.
//  Copyright (c) 2013 Josh Phillips. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSInteger rank;

+ (NSArray *)validSuits;
+ (NSInteger)maxRank;

@end
