//
//  JECMasterViewController.h
//  Retry
//
//  Created by Joshua Cooper on 3/25/13.
//  Copyright (c) 2013 Joshua Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface JECMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)NewNote:(id)sender;
@property (strong, nonatomic) NSMutableArray *notes;
@property (nonatomic, strong) NSArray *data;

@end
