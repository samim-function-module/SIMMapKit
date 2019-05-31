//
//  Target_SIMMapModule.m
//  MJRefresh
//
//  Created by ZIKong on 2019/5/31.
//

#import "Target_SIMMapModule.h"
#import "SIMMapKitAMapViewController.h"
#import "SIMMapKitTextViewController.h"

typedef void (^MapLocationCallbackBlock)(NSDictionary *info);

@implementation Target_SIMMapModule

- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    NSNumber *number = params[@"MapStyle"];
    if (number.integerValue == 1) {
        SIMMapKitAMapViewController *viewController = [[SIMMapKitAMapViewController alloc] init];
        viewController.mapKey = params[@"MapKey"];
        viewController.successBlock = ^(NSDictionary *locationDic) {
            MapLocationCallbackBlock callback = params[@"MapLocationBlock"];
            if (callback) {
                callback(locationDic);
            }
        };
        return viewController;
    }
    else if (number.integerValue == 0) {
        SIMMapKitTextViewController *viewController = [[SIMMapKitTextViewController alloc] init];
        viewController.mapKey = params[@"MapKey"];
        viewController.successBlock = ^(NSDictionary *locationDic) {
            MapLocationCallbackBlock callback = params[@"MapLocationBlock"];
            if (callback) {
                callback(locationDic);
            }
        };
        return viewController;
    }
    else {
        return nil;
    }
}
@end
