#include "include/firmware_floppyemul.h"

const uint16_t floppyemulROM[] = {
    0xABCD, 0xEF42, 0x0000, 0x0000, 0x08FA, 0x001E, 0x00FA, 0x001E, 0x3D4B, 0x575A, 0x0000, 0x0022, 0x454D, 0x554C, 0x0000, 0x7E3F,
    0x3F3C, 0x0025, 0x4E4E, 0x548F, 0x51CF, 0xFFF6, 0x4879, 0x000B, 0xFFFF, 0x4E4D, 0x588F, 0x0800, 0x0001, 0x6700, 0x0004, 0x4E75,
    0x4879, 0x00FA, 0x05DA, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x4879, 0x00FA, 0x0601, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x0096,
    0x4A40, 0x6714, 0x4879, 0x00FA, 0x061B, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4879, 0x00FA, 0x0642, 0x3F3C,
    0x0009, 0x4E41, 0x5C8F, 0x6100, 0x008C, 0x4A40, 0x6716, 0x4879, 0x00FA, 0x065E, 0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41,
    0x508F, 0x4E75, 0x4879, 0x00FA, 0x069B, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100, 0x00C2, 0x4A40, 0x6716, 0x4879, 0x00FA, 0x06C1,
    0x3F3C, 0x0009, 0x4E41, 0x3F3C, 0x0007, 0x4E41, 0x508F, 0x4E75, 0x4879, 0x00FA, 0x067D, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6100,
    0x0074, 0x4879, 0x00FA, 0x06EA, 0x3F3C, 0x0009, 0x4E41, 0x5C8F, 0x6000, 0x0092, 0x343C, 0x0008, 0xE54A, 0x3F02, 0x303C, 0x0204,
    0x323C, 0x0000, 0x6100, 0x02DA, 0x341F, 0x4A40, 0x6704, 0x51CA, 0xFFEA, 0x4E75, 0x303C, 0x0200, 0x323C, 0x0010, 0x2638, 0x0472,
    0x2838, 0x0476, 0x2A38, 0x047E, 0x2C38, 0x00B8, 0x6100, 0x02B2, 0x4E75, 0x21F9, 0x00FA, 0x702E, 0x0472, 0x21F9, 0x00FA, 0x7032,
    0x0476, 0x21F9, 0x00FA, 0x7036, 0x047E, 0x21F9, 0x00FA, 0x702A, 0x00B8, 0x4E75, 0x21FC, 0x00FA, 0x01E4, 0x0472, 0x21FC, 0x00FA,
    0x020A, 0x0476, 0x21FC, 0x00FA, 0x0266, 0x047E, 0x21FC, 0x00FA, 0x0288, 0x00B8, 0x4E75, 0x303C, 0x0201, 0x323C, 0x0000, 0x6100,
    0x0260, 0x4E75, 0x7001, 0x4278, 0x0446, 0x4A78, 0x04A6, 0x6708, 0x31FC, 0x0002, 0x04A6, 0x600E, 0x00B8, 0x0000, 0x0001, 0x04C2,
    0x31FC, 0x0001, 0x04A6, 0x3F3C, 0x0001, 0x4267, 0x4267, 0x3F3C, 0x0001, 0x4267, 0x42A7, 0x4879, 0x0000, 0x2000, 0x3F3C, 0x0008,
    0x4E4E, 0x4FEF, 0x0014, 0x43F9, 0x0000, 0x2000, 0x2049, 0x323C, 0x00FF, 0x4282, 0xD459, 0x51C9, 0xFFFC, 0xB47C, 0x1234, 0x6602,
    0x4ED0, 0x4E75, 0x302F, 0x0004, 0xB079, 0x00FA, 0x7028, 0x6712, 0xB03C, 0x0001, 0x6604, 0x426F, 0x0004, 0x2079, 0x00FA, 0x702E,
    0x4ED0, 0x203C, 0x00FA, 0x7008, 0x4E75, 0x302F, 0x000E, 0xB079, 0x00FA, 0x7028, 0x6712, 0xB03C, 0x0001, 0x6604, 0x426F, 0x000E,
    0x2079, 0x00FA, 0x7032, 0x4ED0, 0x51C3, 0x206F, 0x0006, 0x2408, 0x4A82, 0x6700, 0x0020, 0x7000, 0x2200, 0x2400, 0x2800, 0x302F,
    0x000C, 0x322F, 0x000A, 0x3439, 0x00FA, 0x7008, 0x382F, 0x0004, 0x6100, 0x00C4, 0x4280, 0x4A03, 0x6602, 0x4E75, 0x4FEF, 0x0014,
    0x4CDF, 0x02FE, 0x4E73, 0x302F, 0x0004, 0xB079, 0x00FA, 0x7028, 0x6712, 0xB03C, 0x0001, 0x6604, 0x426F, 0x0004, 0x2079, 0x00FA,
    0x7036, 0x4ED0, 0x7000, 0x4E75, 0x204F, 0x0817, 0x0005, 0x6604, 0x4E68, 0x5D88, 0x3028, 0x0006, 0xB07C, 0x0008, 0x6706, 0xB07C,
    0x0009, 0x660C, 0x0C68, 0x0001, 0x0010, 0x660C, 0x4268, 0x0010, 0x2079, 0x00FA, 0x702A, 0x4ED0, 0x48E7, 0x7F40, 0x4FEF, 0xFFEC,
    0x50C3, 0x5C88, 0x2F68, 0x0002, 0x0006, 0x3F68, 0x0012, 0x000A, 0x4280, 0x3028, 0x000C, 0x5340, 0x4281, 0x3228, 0x000E, 0x4282,
    0x3428, 0x0010, 0x4284, 0x3839, 0x00FA, 0x701E, 0xC2C4, 0xD041, 0x3839, 0x00FA, 0x7020, 0xC4C4, 0xD042, 0x3F40, 0x000C, 0x0C50,
    0x0009, 0x6708, 0x426F, 0x0004, 0x6000, 0xFF20, 0x3F7C, 0x0001, 0x0004, 0x6000, 0xFF16, 0x4A44, 0x6600, 0x0008, 0x2248, 0x6000,
    0x0008, 0x2848, 0x6000, 0x0010, 0x5341, 0x6100, 0x0018, 0x5240, 0x51C9, 0xFFF8, 0x4E75, 0x5341, 0x6100, 0x005E, 0x5240, 0x51C9,
    0xFFF8, 0x4E75, 0x48A7, 0xF000, 0x3802, 0x3600, 0x4843, 0x3602, 0x303C, 0x0202, 0x323C, 0x0004, 0x48E7, 0x0880, 0x6100, 0x0082,
    0x4CDF, 0x0110, 0x4A40, 0x661A, 0x227C, 0x00FA, 0x8000, 0xE44C, 0x5344, 0x2608, 0x0803, 0x0000, 0x660E, 0x20D9, 0x51CC, 0xFFFC,
    0x4240, 0x4C9F, 0x000F, 0x4E75, 0x10D9, 0x10D9, 0x10D9, 0x10D9, 0x51CC, 0xFFF6, 0x4240, 0x60EA, 0x48A7, 0xF000, 0x3802, 0x3600,
    0x4843, 0x3602, 0x303C, 0x0203, 0x3202, 0x5841, 0x6100, 0x0156, 0x4A40, 0x6602, 0x4240, 0x4C9F, 0x000F, 0x4E75, 0x2E3C, 0x0000,
    0x00C2, 0x4FEF, 0xFF3E, 0x244F, 0x43F9, 0x00FA, 0x041C, 0xE44F, 0x5347, 0x24D9, 0x51CF, 0xFFFC, 0x4E93, 0x4FEF, 0x00C2, 0x4E75,
    0x2E3C, 0x0000, 0x00F6, 0x4FEF, 0xFF0A, 0x244F, 0x264F, 0x43F9, 0x00FA, 0x040C, 0xE44F, 0x5347, 0x24D9, 0x51CF, 0xFFFC, 0x377C,
    0x4E71, 0x00D0, 0x4E93, 0x4FEF, 0x00F6, 0x4E75, 0x2439, 0x00FA, 0x7004, 0xC4FC, 0x00DD, 0xD43C, 0x0035, 0x5841, 0x207C, 0x00FB,
    0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240, 0x1011, 0x4A41, 0x6700, 0x009C,
    0x2008, 0x8042, 0x2240, 0x1011, 0xB27C, 0x0002, 0x6700, 0x008C, 0x4842, 0x2008, 0x8042, 0x2240, 0x1011, 0xB27C, 0x0004, 0x6700,
    0x007A, 0x2008, 0x8043, 0x2240, 0x1011, 0xB27C, 0x0006, 0x6700, 0x006A, 0x4843, 0x2008, 0x8043, 0x2240, 0x1011, 0xB27C, 0x0008,
    0x6700, 0x0058, 0x2008, 0x8044, 0x2240, 0x1011, 0xB27C, 0x000A, 0x6700, 0x0048, 0x4844, 0x2008, 0x8044, 0x2240, 0x1011, 0xB27C,
    0x000C, 0x6736, 0x2008, 0x8045, 0x2240, 0x1011, 0xB27C, 0x000E, 0x6728, 0x4845, 0x2008, 0x8045, 0x2240, 0x1011, 0xB27C, 0x0010,
    0x6718, 0x2008, 0x8046, 0x2240, 0x1011, 0xB27C, 0x0012, 0x670A, 0x4846, 0x2008, 0x8046, 0x2240, 0x1011, 0x4842, 0x4E75, 0x2E3C,
    0xFFFF, 0xFFFF, 0x4847, 0xB4B9, 0x00FA, 0x7000, 0x670E, 0x51CF, 0xFFF6, 0x4847, 0x51CF, 0xFFEE, 0x70FF, 0x4E75, 0x4240, 0x4E75,
    0x4E71, 0x4E75, 0x2E3C, 0x0000, 0x00A8, 0x4FEF, 0xFF58, 0x244F, 0x264F, 0x43F9, 0x00FA, 0x0530, 0xE44F, 0x5347, 0x24D9, 0x51CF,
    0xFFFC, 0x377C, 0x4E71, 0x0082, 0x4E93, 0x4FEF, 0x00A8, 0x4E75, 0x2439, 0x00FA, 0x7004, 0xC4FC, 0x00DD, 0xD43C, 0x0035, 0x5841,
    0x207C, 0x00FB, 0x0000, 0x4840, 0x1039, 0x00FB, 0xABCD, 0x4840, 0x2248, 0xD2C0, 0x1011, 0x2008, 0x8041, 0x2240, 0x1011, 0x2008,
    0x8042, 0x2240, 0x1011, 0x4842, 0x2008, 0x8042, 0x2240, 0x1011, 0x2008, 0x8043, 0x2240, 0x1011, 0x4843, 0x2008, 0x8043, 0x2240,
    0x1011, 0xE24C, 0x5344, 0x200C, 0x0800, 0x0000, 0x6714, 0x161C, 0xE14B, 0x161C, 0x2008, 0x8043, 0x2240, 0x1011, 0x51CC, 0xFFF0,
    0x600E, 0x361C, 0x2008, 0x8043, 0x2240, 0x1011, 0x51CC, 0xFFF4, 0x4842, 0x4E75, 0x2E3C, 0xFFFF, 0xFFFF, 0x4847, 0xB4B9, 0x00FA,
    0x7000, 0x670E, 0x51CF, 0xFFF6, 0x4847, 0x51CF, 0xFFEE, 0x70FF, 0x4E75, 0x4240, 0x4E75, 0x4E71, 0x4E75, 0x5369, 0x6465, 0x6361,
    0x7254, 0x2046, 0x6C6F, 0x7070, 0x7920, 0x456D, 0x756C, 0x6174, 0x6F72, 0x202D, 0x2076, 0x302E, 0x302E, 0x330D, 0x0A2B, 0x0D0A,
    0x002B, 0x2D20, 0x4C6F, 0x6164, 0x696E, 0x6720, 0x7468, 0x6520, 0x696D, 0x6167, 0x652E, 0x2E2E, 0x0D0A, 0x0053, 0x6964, 0x6563,
    0x6172, 0x7420, 0x6572, 0x726F, 0x7220, 0x636F, 0x6D6D, 0x756E, 0x6963, 0x6174, 0x696F, 0x6E2E, 0x2052, 0x6573, 0x6574, 0x210D,
    0x0A00, 0x2B2D, 0x2053, 0x6176, 0x696E, 0x6720, 0x7468, 0x6520, 0x6F6C, 0x6420, 0x7665, 0x6374, 0x6F72, 0x730D, 0x0A00, 0x4572,
    0x726F, 0x7220, 0x7361, 0x7669, 0x6E67, 0x2074, 0x6865, 0x206F, 0x6C64, 0x2076, 0x6563, 0x746F, 0x7273, 0x0D0A, 0x002B, 0x2D20,
    0x496E, 0x6974, 0x6961, 0x6C69, 0x7A69, 0x6E67, 0x206E, 0x6577, 0x2076, 0x6563, 0x746F, 0x7273, 0x0D0A, 0x002B, 0x2D20, 0x5365,
    0x7474, 0x696E, 0x6720, 0x4250, 0x4220, 0x6F66, 0x2074, 0x6865, 0x2065, 0x6D75, 0x6C61, 0x7465, 0x6420, 0x6469, 0x736B, 0x0D0A,
    0x0045, 0x7272, 0x6F72, 0x2073, 0x6574, 0x7469, 0x6E67, 0x2042, 0x5042, 0x206F, 0x6620, 0x7468, 0x6520, 0x656D, 0x756C, 0x6174,
    0x6564, 0x2064, 0x6973, 0x6B0D, 0x0A00, 0x2B2D, 0x2042, 0x6F6F, 0x7469, 0x6E67, 0x2065, 0x6D75, 0x6C61, 0x7465, 0x6420, 0x6469,
    0x736B, 0x0D0A, 0x0000, 0x0000
};
uint16_t floppyemulROM_length = sizeof(floppyemulROM) / sizeof(floppyemulROM[0]);

