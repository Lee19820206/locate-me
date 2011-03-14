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
#import <MediaPlayer/MediaPlayer.h>


@interface locate_meViewController : UIViewController <CLLocationManagerDelegate, 
    MKReverseGeocoderDelegate, MKMapViewDelegate, 
    UIAlertViewDelegate, UIImagePickerControllerDelegate, 
    UINavigationControllerDelegate> {
    
    MKMapView *mapView;
    UIProgressView *progressBar;
    UILabel *progressLabel;
    UIButton *button;
    UIImageView *imageView;
    UIButton *takeButton;
    MPMoviePlayerController *moviePlayerController;
    UIImage *image;
    NSURL *movieURL;
    NSString *lastChosenMediaType;
    CGRect imageFrame;
    
}

@property (nonatomic, retain) IBOutlet MKMapView *mapView;
@property (nonatomic, retain) IBOutlet UIProgressView *progressBar;
@property (nonatomic, retain) IBOutlet UILabel *progressLabel;
@property (nonatomic, retain) IBOutlet UIButton *button;

@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIButton *takeButton;
@property (nonatomic, retain) MPMoviePlayerController *moviePlayerController;
@property (nonatomic, retain) IBOutlet UIImage *image;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic, copy) NSString *lastChosenMediaType;

- (IBAction)locateMe;
- (IBAction)takePicture:(id)sender;
- (IBAction)selectExistingPictureOrVideo:(id)sender;

@end
