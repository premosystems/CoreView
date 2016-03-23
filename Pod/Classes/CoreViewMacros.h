//
//  CoreViewMacros.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#ifndef CoreViewMacros_h
#define CoreViewMacros_h

#define CV_MODEL_VIEW_INTERFACE(__CLASS__, __SUPERCLASS__) \
@interface __CLASS__ : __SUPERCLASS__ <CVSingluarModelView>  \
CV_MODEL_INTERFACE \
@end

#define CV_MODEL_VIEW_IMPLEMENTATION(__CLASS_NAME__) \
@implementation __CLASS_NAME__ \
CV_IMPLEMENT_SET_MODEL \
@end

#define CV_MODEL_INTERFACE \
@property (nonatomic,strong) id cv_modelObject;

#define CV_IMPLEMENT_SET_MODEL \
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

#define CV_IMPLEMENT_DID_UPDATE_MODEL \
- (void)didUpdateModel:(id)model { \
} \

#define CV_STRONG_MODEL_ACCESSOR(__CLASS__) \
- (__CLASS__*) cv_strongModel { \
return self.cv_modelObject; \
}

#endif /* CoreViewMacros_h */