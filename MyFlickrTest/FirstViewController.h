//
//  FirstViewController.h
//  MyFlickrTest
//
//  Created by Christophe Dellac on 10/12/13.
//  Copyright (c) 2013 Christophe Dellac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlickContentHandler.h"

@interface FirstViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, FlickContentHandlerDelegate>
{
    FlickContentHandler *_flickrHandler;
    
    NSArray *_lastLoadedContent;
}

@end
