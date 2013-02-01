//
//  Deck.h
//  Matchismo
//
//  Created by Josh Phillips on 1/31/13.
//  Copyright (c) 2013 Josh Phillips. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
