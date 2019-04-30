/**
 * @file
 * Test code for hash Operations
 *
 * @authors
 * Copyright (C) 2019 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "acutest.h"

/******************************************************************************
 * Add your test cases to this list.
 *****************************************************************************/
#define NEOMUTT_TEST_LIST                                                      \
  NEOMUTT_TEST_ITEM(test_mutt_hash_delete)                                     \
  NEOMUTT_TEST_ITEM(test_mutt_hash_find_bucket)                                \
  NEOMUTT_TEST_ITEM(test_mutt_hash_find)                                       \
  NEOMUTT_TEST_ITEM(test_mutt_hash_find_elem)                                  \
  NEOMUTT_TEST_ITEM(test_mutt_hash_free)                                       \
  NEOMUTT_TEST_ITEM(test_mutt_hash_insert)                                     \
  NEOMUTT_TEST_ITEM(test_mutt_hash_int_delete)                                 \
  NEOMUTT_TEST_ITEM(test_mutt_hash_int_find)                                   \
  NEOMUTT_TEST_ITEM(test_mutt_hash_int_insert)                                 \
  NEOMUTT_TEST_ITEM(test_mutt_hash_int_new)                                    \
  NEOMUTT_TEST_ITEM(test_mutt_hash_new)                                        \
  NEOMUTT_TEST_ITEM(test_mutt_hash_set_destructor)                             \
  NEOMUTT_TEST_ITEM(test_mutt_hash_typed_insert)                               \
  NEOMUTT_TEST_ITEM(test_mutt_hash_walk)

/******************************************************************************
 * You probably don't need to touch what follows.
 *****************************************************************************/
#define NEOMUTT_TEST_ITEM(x) void x(void);
NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM

TEST_LIST = {
#define NEOMUTT_TEST_ITEM(x) { #x, x },
  NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM
  { 0 }
};
