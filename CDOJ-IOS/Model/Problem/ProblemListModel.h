//
//  ProblemListModel.h
//  CDOJ-IOS
//
//  Created by GuessEver on 16/5/16.
//  Copyright © 2016年 UESTCACM QKTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DefaultModel.h"

@interface ProblemListModel : DefaultModel

@property (nonatomic, strong) NSMutableArray* list;
@property (nonatomic, strong) NSDictionary* pageInfo;


- (void)fetchData:(NSInteger)page;

@end