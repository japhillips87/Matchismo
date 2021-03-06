//
//  Card.m
//  Matchismo
//
//  Created by Josh Phillips on 1/31/13.
//  Copyright (c) 2013 Josh Phillips. All rights reserved.
//

#import "Card.h"

@implementation Card

-(NSInteger)match:(NSArray *)otherCards
{
    NSInteger score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}


@end
