//
//  GameCommentsXmlParser.h
//  BGG
//
//  Created by RYAN CHRISTIANSON on 11/9/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GameCommentsXmlParser : NSObject <NSXMLParserDelegate> {
	NSMutableString *stringBuffer;
	NSMutableString *pageBuffer;
	NSMutableString *otherUserComments;
	NSMutableString *currentUserComments;
	BOOL inCommentTag;
	NSString *author;
	NSString * writeToPath;
	NSInteger commentCount;
}

@property (nonatomic,strong) NSString * writeToPath;

- (void) addHTMLHeader;
- (void) addComment: (NSString *) comment author: (NSString*)author;
- (void) addHTMLFooter;
- (BOOL)parseXMLAtURL:(NSURL *)URL parseError:(NSError **)error;


@end
