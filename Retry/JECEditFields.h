//
//  JECEditFields.h
//  Note Pad
//
//  Created by Joshua Cooper on 3/13/13.
//  Copyright (c) 2013 Joshua Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CLLocation.h>
#import "JECData.h"


@interface JECEditFields : UIViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak, nonatomic) IBOutlet UITextField *EnterTextField;
@property (weak, nonatomic) IBOutlet UILabel *InstructionsField;
- (IBAction)submit:(id)sender;
@property (weak, nonatomic) IBOutlet JECData *currentEntry;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong) NSManagedObjectContext *context;
@property (nonatomic, strong) NSManagedObject *dataInfo;
@end
