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

CV_SINGULAR_VIEW_INTERFACE(CVSingularTableViewController, UITableViewController)

CV_SINGULAR_VIEW_INTERFACE(CVSingularCollectionViewController, UICollectionViewController)

CV_SINGULAR_VIEW_INTERFACE(CVSingularTableViewCell, UITableViewCell)

CV_SINGULAR_VIEW_INTERFACE(CVSingularCollectionViewCell, UICollectionViewCell)

CV_SINGULAR_VIEW_INTERFACE(CVSingularCollectionReusableView, UICollectionReusableView)

CV_SINGULAR_VIEW_INTERFACE(CVSingularView, UIView)

CV_SINGULAR_VIEW_INTERFACE(CVSingularViewController, UIViewController)

// PLURAL INTERFACES //

CV_PLURAL_VIEW_INTERFACE(CVPluralViewController, UIViewController)

CV_PLURAL_VIEW_INTERFACE(CVPluralTableViewController, UITableViewController)

CV_PLURAL_VIEW_INTERFACE(CVPluralCollectionViewController, UITableViewController)

