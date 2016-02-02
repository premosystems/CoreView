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
@property (nonatomic,strong) id CV_modelObject;

#define CV_IMPLEMENT_SET_SINGULAR_MODEL \
@synthesize CV_modelObject = _CV_modelObject; \
- (void)setCV_modelObject:(id)modelObject { \
[self willChangeValueForKey:@"CV_modelObject"]; \
_CV_modelObject = modelObject; \
[self didChangeValueForKey:@"CV_modelObject"]; \
if ([self respondsToSelector:@selector(didUpdateModel:)]) { \
[self didUpdateModel:modelObject]; \
} \
}

#define CV_PLURAL_MODEL_INTERFACE \
@property (nonatomic,strong) NSArray* CV_modelObjects;

#define CV_IMPLEMENT_SET_PLURAL_MODEL \
@synthesize CV_modelObjects = _CV_modelObjects; \
- (void)setCV_modelObjects:(id)modelObjects { \
[self willChangeValueForKey:@"CV_modelObjects"]; \
_CV_modelObjects = modelObjects; \
[self didChangeValueForKey:@"CV_modelObjects"]; \
if ([self respondsToSelector:@selector(didUpdateModel:)]) { \
[self didUpdateModel:modelObjects]; \
} \
}

/*
#define CV_IMPLEMENT_DID_UPDATE_MODEL \
- (void)didUpdateModel:(id)modelObject { \
} \
*/

#endif /* CoreViewMacros_h */
