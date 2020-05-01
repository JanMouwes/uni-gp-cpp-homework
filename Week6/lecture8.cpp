//
// Created by Jan Mouwes on 19/03/2020.
//

#include "lecture8.h"

bool has_road(unsigned char field) {
    return (field & (1u << mask_index_road)) == (1u << mask_index_road);
}

void make_road(unsigned char & field) {
    field |= (1u << mask_index_road);
}

bool mine_allowed(unsigned char field) {
    return (field & mask_terrain_stone) == mask_terrain_stone;
}

int get_player(unsigned char unit) {
    return (int)(unit >> 4u);
}

void set_player(unsigned char & unit, int player_id) {
    unit &= (unsigned char)~mask_player;
    unit |= (unsigned char)(player_id << 4);
}
