//
//  testDBAppDelegate.h
//  TestDB
//
//  Created by LKasumi on 13. 5. 28..
//  Copyright (c) 2013년 LKasumi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface testDBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
