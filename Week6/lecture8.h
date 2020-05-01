//
// Created by Jan Mouwes on 19/03/2020.
//

#ifndef HUISWERK_LECTURE8_H
#define HUISWERK_LECTURE8_H

const unsigned char mask_index_unit = 0;
const unsigned char mask_index_treasure = 1;
const unsigned char mask_index_extraction = 2;
const unsigned char mask_index_road = 3;
const unsigned char mask_index_resource = 4;
const unsigned char mask_index_village = 5;
const unsigned char mask_index_terrain = 6;

const unsigned char mask_unit = 1u<<mask_index_unit;
const unsigned char mask_treasure = 1u<<mask_index_treasure;
const unsigned char mask_extraction = 1u<<mask_index_extraction;
const unsigned char mask_road = 1u<<mask_index_road;
const unsigned char mask_resource = 1u<<mask_index_resource;
const unsigned char mask_village = 1u<<mask_index_village;

const unsigned char mask_terrain_grass = 0u << mask_index_terrain;
const unsigned char mask_terrain_sand = 1u << mask_index_terrain;
const unsigned char mask_terrain_stone = 2u << mask_index_terrain;
const unsigned char mask_terrain_water = 3u << mask_index_terrain;

const unsigned char mask_unit_type = 15u;
const unsigned char mask_player = 255u - mask_unit_type;

bool has_road(unsigned char field);

void make_road(unsigned char field);

bool mine_allowed(unsigned char field);

int get_player(unsigned char unit);

void set_player(unsigned char unit);


#endif //HUISWERK_LECTURE8_H
