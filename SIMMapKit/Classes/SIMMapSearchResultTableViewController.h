//
//  SIMMapSearchResultTableViewController.h
//  MJRefresh
//
//  Created by ZIKong on 2019/5/31.
//

#import <UIKit/UIKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>
#import <AMapSearchKit/AMapSearchKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void (^PushToVCBlock) (NSIndexPath *indexPath, id item);

@interface SIMMapSearchResultTableViewController : UITableViewController
@property (nonatomic, copy) NSString      *city;
@property (nonatomic, copy) NSString      *mapKey;

@property (nonatomic, copy) PushToVCBlock pushToVCBlock;

- (void)requestData:(NSString *)keyword ;
@end

NS_ASSUME_NONNULL_END
