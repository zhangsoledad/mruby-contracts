#ifndef CKB_CONSTS_H_
#define CKB_CONSTS_H_

#define SYS_exit 93
#define SYS_ckb_load_tx 2049
#define SYS_ckb_load_cell 2053
#define SYS_ckb_load_cell_by_field 2054
#define SYS_ckb_load_input_by_field 2055
#define SYS_ckb_debug 2177

#define CKB_SUCCESS 0
#define CKB_ITEM_MISSING 2

#define CKB_SOURCE_INPUT 0
#define CKB_SOURCE_OUTPUT 1
#define CKB_SOURCE_CURRENT 2

#define CKB_CELL_FIELD_CAPACITY 0
#define CKB_CELL_FIELD_DATA 1
#define CKB_CELL_FIELD_LOCK_HASH 2
#define CKB_CELL_FIELD_CONTRACT 3
#define CKB_CELL_FIELD_CONTRACT_HASH 4

#define CKB_INPUT_FIELD_UNLOCK 0
#define CKB_INPUT_FIELD_OUT_POINT 1

#endif  /* CKB_CONSTS_H_ */
