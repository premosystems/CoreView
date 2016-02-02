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

// SINGULAR INTERFACES //

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelTableViewController, UITableViewController)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelCollectionViewController, UICollectionViewController)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelTableViewCell, UITableViewCell)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelCollectionViewCell, UICollectionViewCell)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelCollectionReusableView, UICollectionReusableView)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelView, UIView)

CV_SINGULAR_VIEW_INTERFACE(CVSingularModelViewController, UIViewController)

// PLURAL INTERFACES //

CV_PLURAL_VIEW_INTERFACE(CVPluralModelViewController, UIViewController)

CV_PLURAL_VIEW_INTERFACE(CVPluralModelTableViewController, UITableViewController)

CV_PLURAL_VIEW_INTERFACE(CVPluralModelCollectionViewController, UITableViewController)

