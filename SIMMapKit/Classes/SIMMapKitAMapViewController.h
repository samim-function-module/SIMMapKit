//
//  SIMMapKitAMapViewController.h
//  Pods-SIMMapKit_Example
//
//  Created by ZIKong on 2019/5/31.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectLocationSuccessBlock)(NSDictionary *locationDic);

@interface SIMMapKitAMapViewController : UIViewController
@property (nonatomic,copy  )  NSString  *mapKey;
@property (nonatomic,copy  )  SelectLocationSuccessBlock   successBlock;
@end

NS_ASSUME_NONNULL_END
