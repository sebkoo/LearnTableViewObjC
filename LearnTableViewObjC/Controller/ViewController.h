//
//  ViewController.h
//  LearnTableViewObjC
//
//  Created by Sebastian Koo on 3/2/21.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *myTableView;


@end

