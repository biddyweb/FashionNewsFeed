//
//  FCCategory.m
//  FashionNewsFeed
//

#import <Foundation/Foundation.h>
#import "FCCategory.h"

@implementation FCCategory

- (instancetype)initCategoryWithId:(NSUInteger)categoryId
                           andName:(NSString *)categoryName
                          andCount:(NSUInteger)categoryCount
                           andLink:(NSString *)categoryLink
                           andMeta:(NSMutableDictionary *)categoryMeta
{
    self = [super init];
    if (self) {
        self.categoryId = categoryId;
        self.categoryName = categoryName;
        self.categoryCount = categoryCount;
        self.categoryLink = categoryLink;
        self.categoryMeta = categoryMeta;
    }
    return self;
}

@end
