#ifndef _REG_FUNCTIONS_H_
#define _REG_FUNCTIONS_H_

#include "Std_Types.h"

#define REGISTER(_address)                      (*(volatile uint32*)(_address))
#define BITMASK(_pos, _len)                     (((1UL << _len) - 1UL) << _pos)
#define GET_BITFIELD_POS(field)                 field##_POS
#define GET_BITFIELD_LEN(field)                 field##_LEN
#define GET_BITFIELD_MASK(field)                BITMASK(GET_BITFIELD_POS(field),GET_BITFIELD_LEN(field))
#define GET_BITFIELD_INVMASK(field)             (~GET_BITFIELD_MASK(field))
#define GET_BITFIELD(reg, field)                ((reg & GET_BITFIELD_MASK(field)) >> GET_BITFIELD_POS(field))
#define SET_BITFIELD(reg, field, value)         reg = (reg & GET_BITFIELD_INVMASK(field)) | \
                                                      ((value << GET_BITFIELD_POS(field)) & GET_BITFIELD_MASK(field))

#endif /* #ifndef _REG_FUNCTIONS_H_ */
