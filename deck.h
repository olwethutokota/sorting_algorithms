#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - ...
 * @SPADE: ....
 * @HEART: ...
 * @CLUB: ....
 * @DIAMOND: ...
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - ....
 *
 * @value: ....
 * From "Ace" to "King"
 * @kind: ....
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - ...
 *
 * @card: ...
 * @prev: ...
 * @next: ...
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
