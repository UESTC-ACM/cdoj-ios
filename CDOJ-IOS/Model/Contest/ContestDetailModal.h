//
//  ContestDetailModal.h
//  CDOJ-IOS
//
//  Created by GuessEver on 16/5/28.
//  Copyright © 2016年 UESTCACM QKTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DefaultModel.h"

@interface ContestDetailModal : DefaultModel

@property (nonatomic, strong) NSDictionary* detail;
@property (nonatomic, strong) NSArray* problems;


- (void)fetchDataWithContestId:(NSString*)cid;

@end