//
//  SIMMapKitTextViewController.h
//  MJRefresh
//
//  Created by ZIKong on 2019/5/31.
//

#import <UIKit/UIKit.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapSearchKit/AMapSearchKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectLocationSuccessBlock)(NSDictionary *locationDic);

@interface SIMMapKitTextViewController : UIViewController
@property (nonatomic,copy  )   SelectLocationSuccessBlock   successBlock;
@property (nonatomic, copy)    NSString *mapKey;//高德地图key
@end

NS_ASSUME_NONNULL_END
