//
//  CVConcreteViews.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#import <Foundation/Foundation.h>
#import "CoreViewMacros.h"
#import "CVSingluarModelView.h"
#import "CVPluralModelView.h"

/*
 A collection of concrete base classes that an app can inherit from.
 */

// SINGULAR INTERFACES //

CV_MODEL_VIEW_INTERFACE(CVSingularTableViewController, UITableViewController)

CV_MODEL_VIEW_INTERFACE(CVSingularCollectionViewController, UICollectionViewController)

CV_MODEL_VIEW_INTERFACE(CVSingularTableViewCell, UITableViewCell)

CV_MODEL_VIEW_INTERFACE(CVSingularCollectionViewCell, UICollectionViewCell)

CV_MODEL_VIEW_INTERFACE(CVSingularCollectionReusableView, UICollectionReusableView)

CV_MODEL_VIEW_INTERFACE(CVSingularView, UIView)

CV_MODEL_VIEW_INTERFACE(CVSingularViewController, UIViewController)


