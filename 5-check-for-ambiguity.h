#ifndef _5_CHECK_FOR_AMBIGUITY_H_
#define _5_CHECK_FOR_AMBIGUITY_H_

#include "4-determinize.h"

struct ambiguity_path {
    uint16_t *actions;
    uint32_t *offsets;
    uint32_t number_of_actions;
};

struct ambiguity {
    bool has_ambiguity;
    struct ambiguity_path paths[2];

    symbol_id *tokens;
    uint32_t tokens_allocated_bytes;
    uint32_t number_of_tokens;
};

void check_for_ambiguity(struct combined_grammar *combined,
 struct ambiguity *ambiguity);

#endif