//
//  JECAppDelegate.h
//  Retry
//
//  Created by Joshua Cooper on 3/25/13.
//  Copyright (c) 2013 Joshua Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JECAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
