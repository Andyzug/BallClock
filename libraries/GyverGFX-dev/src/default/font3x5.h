#pragma once
#include <Arduino.h>
#include <FontGFX.h>

// font_3x5
// glyphs: !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэюяЁё
// 480 Bytes

const uint8_t _gfx_font_3x5_0_159[] PROGMEM = {
    0x00, 0x17, 0x00,  // ! (0)
    0x01, 0x00, 0x01,  // " (1)
    0x1f, 0x0a, 0x1f,  // # (2)
    0x17, 0x15, 0x1d,  // $ (3)
    0x09, 0x04, 0x12,  // % (4)
    0x0a, 0x05, 0x0a,  // & (5)
    0x00, 0x01, 0x00,  // ' (6)
    0x00, 0x0e, 0x11,  // ( (7)
    0x11, 0x0e, 0x00,  // ) (8)
    0x05, 0x02, 0x05,  // * (9)
    0x04, 0x0e, 0x04,  // + (10)
    0x10, 0x08, 0x00,  // , (11)
    0x04, 0x04, 0x04,  // - (12)
    0x00, 0x10, 0x00,  // . (13)
    0x10, 0x0e, 0x01,  // / (14)
    0x1f, 0x11, 0x1f,  // 0 (15)
    0x00, 0x02, 0x1f,  // 1 (16)
    0x1d, 0x15, 0x17,  // 2 (17)
    0x11, 0x15, 0x1f,  // 3 (18)
    0x07, 0x04, 0x1f,  // 4 (19)
    0x17, 0x15, 0x1d,  // 5 (20)
    0x1f, 0x15, 0x1d,  // 6 (21)
    0x01, 0x01, 0x1f,  // 7 (22)
    0x1f, 0x15, 0x1f,  // 8 (23)
    0x17, 0x15, 0x1f,  // 9 (24)
    0x00, 0x0a, 0x00,  // : (25)
    0x10, 0x0a, 0x00,  // ; (26)
    0x04, 0x0a, 0x11,  // < (27)
    0x0a, 0x0a, 0x0a,  // = (28)
    0x11, 0x0a, 0x04,  // > (29)
    0x01, 0x15, 0x03,  // ? (30)
    0x0c, 0x12, 0x1e,  // @ (31)
    0x1f, 0x05, 0x1f,  // A (32)
    0x1f, 0x15, 0x1b,  // B (33)
    0x1f, 0x11, 0x11,  // C (34)
    0x1f, 0x11, 0x0e,  // D (35)
    0x1f, 0x15, 0x11,  // E (36)
    0x1f, 0x05, 0x01,  // F (37)
    0x1f, 0x11, 0x1d,  // G (38)
    0x1f, 0x04, 0x1f,  // H (39)
    0x11, 0x1f, 0x11,  // I (40)
    0x18, 0x10, 0x1f,  // J (41)
    0x1f, 0x04, 0x1b,  // K (42)
    0x1f, 0x10, 0x10,  // L (43)
    0x1f, 0x02, 0x1f,  // M (44)
    0x1e, 0x04, 0x0f,  // N (45)
    0x1f, 0x11, 0x1f,  // O (46)
    0x1f, 0x05, 0x07,  // P (47)
    0x0f, 0x09, 0x1f,  // Q (48)
    0x1f, 0x05, 0x1a,  // R (49)
    0x17, 0x15, 0x1d,  // S (50)
    0x01, 0x1f, 0x01,  // T (51)
    0x1f, 0x10, 0x1f,  // U (52)
    0x0f, 0x10, 0x0f,  // V (53)
    0x1f, 0x08, 0x1f,  // W (54)
    0x1b, 0x04, 0x1b,  // X (55)
    0x03, 0x1c, 0x03,  // Y (56)
    0x19, 0x15, 0x13,  // Z (57)
    0x00, 0x1f, 0x11,  // [ (58)
    0x01, 0x0e, 0x10,  // \ (59)
    0x11, 0x1f, 0x00,  // ] (60)
    0x02, 0x01, 0x02,  // ^ (61)
    0x10, 0x10, 0x10,  // _ (62)
    0x01, 0x02, 0x00,  // ` (63)
    0x0c, 0x12, 0x1e,  // a (64)
    0x1f, 0x14, 0x08,  // b (65)
    0x1c, 0x14, 0x14,  // c (66)
    0x08, 0x14, 0x1f,  // d (67)
    0x0c, 0x1a, 0x14,  // e (68)
    0x04, 0x1f, 0x05,  // f (69)
    0x17, 0x15, 0x0f,  // g (70)
    0x1f, 0x04, 0x18,  // h (71)
    0x00, 0x1d, 0x00,  // i (72)
    0x10, 0x0d, 0x00,  // j (73)
    0x1f, 0x04, 0x1a,  // k (74)
    0x00, 0x01, 0x1f,  // l (75)
    0x1e, 0x04, 0x1c,  // m (76)
    0x1e, 0x02, 0x1e,  // n (77)
    0x1e, 0x12, 0x1e,  // o (78)
    0x1e, 0x0a, 0x04,  // p (79)
    0x04, 0x0a, 0x1e,  // q (80)
    0x1e, 0x02, 0x06,  // r (81)
    0x14, 0x12, 0x0a,  // s (82)
    0x02, 0x0f, 0x12,  // t (83)
    0x1e, 0x10, 0x1e,  // u (84)
    0x0e, 0x10, 0x0e,  // v (85)
    0x1e, 0x08, 0x1e,  // w (86)
    0x1a, 0x04, 0x1a,  // x (87)
    0x17, 0x14, 0x0f,  // y (88)
    0x1a, 0x12, 0x16,  // z (89)
    0x04, 0x0e, 0x11,  // { (90)
    0x00, 0x1f, 0x00,  // | (91)
    0x11, 0x0e, 0x04,  // } (92)
    0x0c, 0x04, 0x06,  // ~ (93)
    0x1f, 0x05, 0x1f,  // А (94)
    0x1f, 0x15, 0x1d,  // Б (95)
    0x1f, 0x15, 0x1b,  // В (96)
    0x1f, 0x01, 0x01,  // Г (97)
    0x1e, 0x09, 0x1e,  // Д (98)
    0x1f, 0x15, 0x11,  // Е (99)
    0x14, 0x1e, 0x14,  // Ж (100)
    0x11, 0x15, 0x1f,  // З (101)
    0x0f, 0x04, 0x1e,  // И (102)
    0x0f, 0x04, 0x1e,  // Й (103)
    0x1f, 0x04, 0x1b,  // К (104)
    0x1e, 0x01, 0x1f,  // Л (105)
    0x1f, 0x02, 0x1f,  // М (106)
    0x1f, 0x04, 0x1f,  // Н (107)
    0x1f, 0x11, 0x1f,  // О (108)
    0x1f, 0x01, 0x1f,  // П (109)
    0x1f, 0x05, 0x07,  // Р (110)
    0x1f, 0x11, 0x11,  // С (111)
    0x01, 0x1f, 0x01,  // Т (112)
    0x13, 0x14, 0x1f,  // У (113)
    0x0e, 0x1b, 0x0e,  // Ф (114)
    0x1b, 0x04, 0x1b,  // Х (115)
    0x0f, 0x08, 0x1f,  // Ц (116)
    0x07, 0x04, 0x1f,  // Ч (117)
    0x0a, 0x0c, 0x0a,  // Ш (118)
    0x0a, 0x0c, 0x1a,  // Щ (119)
    0x1f, 0x14, 0x1c,  // Ъ (120)
    0x1f, 0x18, 0x1e,  // Ы (121)
    0x1f, 0x14, 0x1c,  // Ь (122)
    0x15, 0x15, 0x1f,  // Э (123)
    0x1f, 0x0a, 0x11,  // Ю (124)
    0x1a, 0x05, 0x1f,  // Я (125)
    0x0c, 0x12, 0x1e,  // а (126)
    0x1e, 0x13, 0x1d,  // б (127)
    0x1f, 0x15, 0x1a,  // в (128)
    0x1e, 0x02, 0x02,  // г (129)
    0x1c, 0x0a, 0x1c,  // д (130)
    0x0c, 0x1a, 0x14,  // е (131)
    0x14, 0x0e, 0x14,  // ж (132)
    0x11, 0x15, 0x1b,  // з (133)
    0x0f, 0x04, 0x1e,  // и (134)
    0x0f, 0x04, 0x1e,  // й (135)
    0x1e, 0x04, 0x1a,  // к (136)
    0x1c, 0x02, 0x1e,  // л (137)
    0x1e, 0x04, 0x1e,  // м (138)
    0x1e, 0x08, 0x1e,  // н (139)
    0x1e, 0x12, 0x1e,  // о (140)
    0x1e, 0x02, 0x1e,  // п (141)
    0x1e, 0x0a, 0x0e,  // р (142)
    0x1e, 0x12, 0x12,  // с (143)
    0x02, 0x1e, 0x02,  // т (144)
    0x16, 0x14, 0x1e,  // у (145)
    0x0c, 0x1e, 0x0c,  // ф (146)
    0x1a, 0x04, 0x1a,  // х (147)
    0x0e, 0x08, 0x1e,  // ц (148)
    0x06, 0x04, 0x1e,  // ч (149)
    0x0a, 0x0c, 0x0a,  // ш (150)
    0x0a, 0x0c, 0x1a,  // щ (151)
    0x1e, 0x14, 0x1c,  // ъ (152)
    0x1e, 0x18, 0x1e,  // ы (153)
    0x1e, 0x14, 0x1c,  // ь (154)
    0x11, 0x15, 0x1f,  // э (155)
    0x1e, 0x0c, 0x1c,  // ю (156)
    0x14, 0x0a, 0x1e,  // я (157)
    0x1f, 0x15, 0x11,  // Ё (158)
    0x0c, 0x1a, 0x14,  // ё (159)
};

const gfx_map_font_t gfx_font_3x5 PROGMEM = {_gfx_font_3x5_0_159, 0, 159, 3, 5};