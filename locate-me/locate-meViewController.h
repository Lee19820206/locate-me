//
//  locate-meViewController.h
//  locate-me
//
//  Created by Yorick Chan on 13/03/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>


@interface locate_meViewController : UIViewController <CLLocationManagerDelegate, MKReverseGeocoderDelegate, MKMapViewDelegate, UIAlertViewDelegate> {
    
    MKMapView *mapView;
    UIProgressView *progressBar;
    UILabel *progressLabel;
    UIButton *button;
    
}

@property (nonatomic, retain) IBOutlet MKMapView *mapView;
@property (nonatomic, retain) IBOutlet UIProgressView *progressBar;
@property (nonatomic, retain) IBOutlet UILabel *progressLabel;
@property (nonatomic, retain) IBOutlet UIButton *button;

- (IBAction)locateMe;

@end
