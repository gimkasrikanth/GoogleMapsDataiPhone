//
//  CSMapRouteLayerView.h
//  mapLines
//
//  Created by Craig on 4/12/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface CSMapRouteLayerView : UIView <MKMapViewDelegate>
{
	MKMapView *_mapView;
	NSArray  *_points;
    //NSArray *_annotations;
	UIColor *_lineColor;
    
    //UIToolbar *mapTools;
}

-(id) initWithRoute:(NSArray*)routePoints mapView:(MKMapView *)mapView;
@property (nonatomic, retain) NSArray *points;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) UIColor *lineColor; 

@end
