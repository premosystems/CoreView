//
//  CVSingluarModelView.h
//  Pods
//
//  Created by Vincil Bishop on 10/1/15.
//
//

#import <Foundation/Foundation.h>

@protocol CVSingluarModelView <NSObject>

@property (nonatomic,strong) id CV_modelObject;

@optional

- (void)didUpdateModel:(id)modelObject;

@end
