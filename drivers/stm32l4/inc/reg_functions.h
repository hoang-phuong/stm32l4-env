#ifndef _REG_FUNCTIONS_H_
#define _REG_FUNCTIONS_H_

#define REGISTER(_address)                      (*(volatile uint32_t*)(_address))
#define BITMASK(_pos, _len)                     (((1UL << _len) - 1UL) << _pos)
#define GET_BITFIELD_POS(reg, field)            reg##_##field##_POS
#define GET_BITFIELD_LEN(reg, field)            reg##_##field##_LEN
#define GET_BITFIELD_MASK(reg, field)           BITMASK(GET_BITFIELD_POS(reg,field),GET_BITFIELD_LEN(reg,field))
#define GET_BITFIELD_INVMASK(reg, field)        (~GET_BITFIELD_MASK(reg, field))
#define GET_BITFIELD_VALUE(reg, field)          ((reg & GET_BITFIELD_MASK(reg,field)) >> GET_BITFIELD_POS(reg,field))
#define SET_BITFIELD_VALUE(reg, field, value)   reg = (reg & GET_BITFIELD_INVMASK(reg,field)) | \
                                                      ((value << GET_BITFIELD_POS(reg,field)) & GET_BITFIELD_MASK(reg,field))

#endif /* #ifndef _REG_FUNCTIONS_H_ */
