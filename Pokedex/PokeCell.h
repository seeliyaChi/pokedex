//
//  PokeCell.h
//  Pokedex
//
//  Created by student on 2017/9/24.
//  Copyright © 2017年 idv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Pokemon.h"

@interface PokeCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *pokeImage;

@property (weak, nonatomic) IBOutlet UILabel *pokeNameLabel;

-(void)configCell:(Pokemon *)pokemon;

@end
