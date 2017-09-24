//
//  PokeCell.m
//  Pokedex
//
//  Created by student on 2017/9/24.
//  Copyright © 2017年 idv. All rights reserved.
//

#import "PokeCell.h"
#import "Pokemon.h"

@implementation PokeCell

-(void)configCell:(Pokemon *)pokemon{
    self.pokeNameLabel.text=pokemon.name;
    self.pokeImage.image=[UIImage imageNamed:[NSString stringWithFormat:@"%ld", pokemon.pokedexID]];
}
@end
