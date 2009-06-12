//
//  BGGConnect.h
//  BGG
//
//  Created by RYAN CHRISTIANSON on 1/19/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BGGAppDelegate.h"

@class CollectionItemData;

/*
 
 [bggConnect logPlayForGameId: gameId plays:1 
 
 
 */








typedef NSInteger BGGConnectWishListState;


@interface BGGConnect : NSObject {
	NSString * username;
	NSString * password;
	NSArray * authCookies;

}


@property (nonatomic, retain) NSString *  username;
@property (nonatomic, retain) NSString *  password;
@property (nonatomic, retain) NSArray *  authCookies;



//! Connect and get a auth key from bgg
- (void) connectForAuthKey;

- (BOOL) scanForCheckedForm: (NSString*) name fromData: (NSString*) data;

//! Log a play, with simple params
- (BGGConnectResponse) simpleLogPlayForGameId: (NSInteger) gameId forDate: (NSDate *) date numPlays: (NSInteger) plays;

- (BGGConnectResponse) createDbGameEntryForGameId:(NSInteger) gameId;

- (CollectionItemData*) _fetchGameCollectionItemDataHelper:(NSInteger) gameId;

- (CollectionItemData*) fetchGameCollectionItemData:(NSInteger) gameId;

- (BGGConnectResponse) saveCollectionForGameId: (NSInteger) gameId withParams: (NSDictionary*) paramsToSave withData: (CollectionItemData *) itemData;

@end