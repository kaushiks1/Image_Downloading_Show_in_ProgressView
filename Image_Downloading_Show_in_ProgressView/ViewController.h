//
//  ViewController.h
//  Image_Downloading_Show_in_ProgressView
//
//  Created by Apple on 24/05/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSURLSessionDelegate, NSURLSessionDownloadDelegate>



@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIProgressView *progressView;

@end

