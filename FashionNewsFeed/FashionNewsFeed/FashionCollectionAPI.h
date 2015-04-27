//
//  FashionCollectionAPI.h
//  FashionNewsFeed
//

#import <Foundation/Foundation.h>
#import "FCPost.h"

@interface FashionCollectionAPI : NSObject

+ (FashionCollectionAPI *)sharedInstance;

- (void)getCategories:(void (^)(NSURLSessionDataTask *task, NSMutableArray *categories))success
              failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getPostById:(NSUInteger)postId
            success:(void (^)(NSURLSessionDataTask *task, FCPost *post))success
            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getLatestsPosts:(NSUInteger)pageNumber
           postsPerPage:(NSUInteger)postsPerPage
                success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getBeautyBoxPosts:(NSUInteger)pageNumber
             postsPerPage:(NSUInteger)postsPerPage
                  success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                  failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getLifestylePosts:(NSUInteger)pageNumber
             postsPerPage:(NSUInteger)postsPerPage
                  success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                  failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getBreakfastPosts:(NSUInteger)pageNumber
             postsPerPage:(NSUInteger)postsPerPage
                  success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                  failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getKonkursPosts:(NSUInteger)pageNumber
           postsPerPage:(NSUInteger)postsPerPage
                success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getBeautyPosts:(NSUInteger)pageNumber
          postsPerPage:(NSUInteger)postsPerPage
               success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
               failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getFacePosts:(NSUInteger)pageNumber
        postsPerPage:(NSUInteger)postsPerPage
             success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
             failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getBestPosts:(NSUInteger)pageNumber
        postsPerPage:(NSUInteger)postsPerPage
             success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
             failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getFashionPosts:(NSUInteger)pageNumber
           postsPerPage:(NSUInteger)postsPerPage
                success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
                failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getNewsPosts:(NSUInteger)pageNumber
        postsPerPage:(NSUInteger)postsPerPage
             success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
             failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (void)getEventsPosts:(NSUInteger)pageNumber
          postsPerPage:(NSUInteger)postsPerPage
               success:(void (^)(NSURLSessionDataTask *task, NSMutableArray *posts))success
               failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSArray *)getHardCodedCategories;

@end


