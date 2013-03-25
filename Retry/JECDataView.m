//
//  JECDataView.m
//  Note Pad
//
//  Created by Joshua Cooper on 3/13/13.
//  Copyright (c) 2013 Joshua Cooper. All rights reserved.
//

#import "JECDataView.h"

@interface JECDataView ()

@end

@implementation JECDataView

MKPointAnnotation *pin;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}


- (void)viewDidLoad
{
    
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    UIImage *pattern = [UIImage imageNamed:@"retina_wood.png"];
    self.view.backgroundColor = [UIColor colorWithPatternImage:pattern];
}

-(void) viewDidAppear:(BOOL)animated{
    _name.text = [_dataInfo valueForKey:@"title"];
    _description.text = [_dataInfo valueForKey:@"text"];
   pin = [[MKPointAnnotation alloc] init];
   NSNumber *lati = [_dataInfo valueForKey:@"latitude"];
    NSNumber *longi = [_dataInfo valueForKey:@"longitude"];
    double latitude = [lati doubleValue];
    double longitude = [longi doubleValue];
    CLLocationCoordinate2D coordinate;
    coordinate.longitude = longitude;
    coordinate.latitude = latitude;
    pin.coordinate = coordinate;
    [self.map addAnnotation:pin];
  [self.map setCenterCoordinate:pin.coordinate];
   MKCoordinateRegion region = MKCoordinateRegionMakeWithDistance(pin.coordinate, 40, 40);
   [self.map setRegion:region];
    [super viewDidAppear:animated];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidUnload {
    [self.map removeAnnotation:pin];
    [self setDescription:nil];
    [self setName:nil];
    [self setMap:nil];
    [super viewDidUnload];
}
@end
