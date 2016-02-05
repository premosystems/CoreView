//
//  CoreViewMacros.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#ifndef CoreViewMacros_h
#define CoreViewMacros_h

#define CV_SINGULAR_VIEW_INTERFACE(__CLASS__, __SUPERCLASS__) \
@interface __CLASS__ : __SUPERCLASS__ <CVSingluarModelView>  \
CV_SINGULAR_MODEL_INTERFACE \
@end

#define CV_SINGULAR_VIEW_IMPLEMENTATION(__CLASS_NAME__) \
@implementation __CLASS_NAME__ \
CV_IMPLEMENT_SET_SINGULAR_MODEL \
@end

#define CV_PLURAL_VIEW_INTERFACE(__CLASS__, __SUPERCLASS__) \
@interface __CLASS__ : __SUPERCLASS__ <CVPluralModelView>  \
CV_PLURAL_MODEL_INTERFACE \
@end

#define CV_PLURAL_VIEW_IMPLEMENTATION(__CLASS_NAME__) \
@implementation __CLASS_NAME__ \
CV_IMPLEMENT_SET_PLURAL_MODEL \
@end


#define CV_SINGULAR_MODEL_INTERFACE \
@property (nonatomic,strong) id cv_modelObject;

#define CV_IMPLEMENT_SET_SINGULAR_MODEL \
@synthesize cv_modelObject = _cv_modelObject; \
- (void)setCv_modelObject:(id)modelObject { \
[self willChangeValueForKey:@"cv_modelObject"]; \
_cv_modelObject = modelObject; \
[self didChangeValueForKey:@"cv_modelObject"]; \
if ([self respondsToSelector:@selector(didUpdateModel:)]) { \
[self performSelector:@selector(didUpdateModel:) withObject:modelObject]; \
} \
} \
CV_IMPLEMENT_DID_UPDATE_MODEL

#define CV_PLURAL_MODEL_INTERFACE \
@property (nonatomic,strong) NSArray* cv_modelObjects;

#define CV_IMPLEMENT_SET_PLURAL_MODEL \
@synthesize cv_modelObjects = _cv_modelObjects; \
- (void)setCv_modelObjects:(id)modelObjects { \
[self willChangeValueForKey:@"cv_modelObject"]; \
_cv_modelObjects = modelObjects; \
[self didChangeValueForKey:@"cv_modelObject"]; \
if ([self respondsToSelector:@selector(didUpdateModel:)]) { \
[self performSelector:@selector(didUpdateModel:) withObject:modelObjects]; \
} \
} \
CV_IMPLEMENT_DID_UPDATE_MODEL


#define CV_IMPLEMENT_DID_UPDATE_MODEL \
- (void)didUpdateModel:(id)model { \
} \


#endif /* CoreViewMacros_h */
