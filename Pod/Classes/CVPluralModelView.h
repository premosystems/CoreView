//
//  CVPluralModelView.h
//  Pods
//
//  Created by Vincil Bishop on 10/1/15.
//
//

#import <Foundation/Foundation.h>

@protocol CVPluralModelView <NSObject>

/**
 *  An array of model objects.
 */
@property (nonatomic,strong) NSArray* CV_modelObjects;

@optional

- (void)didUpdateModel:(id)modelObject;

@end
