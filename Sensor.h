//
//  Sensors.h
//  VaprVideo_v1.0
//
//  Created by Robert Reinold on 5/29/14.
//  Copyright (c) 2014 Robert Reinold. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import <CoreLocation/CoreLocation.h>
#import "sensorSet.h"

@interface Sensor : NSObject <UIAccelerometerDelegate, CLLocationManagerDelegate>{
CMMotionManager *motionManager;
NSOperationQueue *operationQueue;
NSTimer *timer;
NSTimer *UItimer; //optional
}
- (id)init;
- (void)initialize;
- (id)initWithData:(int)requestedFreq;
- (sensorSet*)getSensorSet;
- (void)accelerometer:(UIAccelerometer *)accelerometer didAccelerate:(UIAcceleration *)acceleration;
- (void)read;
@end