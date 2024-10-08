#pragma once
#include <Arduino.h>
#include <FontGFX.h>

// font_4x6
// glyphs: !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэюяЁё
// 640 Bytes

const uint8_t _gfx_font_4x6_0_159[] PROGMEM = {
    0x00, 0x00, 0x17, 0x00,  // ! (0)
    0x00, 0x03, 0x00, 0x03,  // " (1)
    0x0a, 0x1f, 0x0a, 0x1f,  // # (2)
    0x04, 0x2a, 0x3f, 0x12,  // $ (3)
    0x13, 0x0b, 0x34, 0x32,  // % (4)
    0x00, 0x00, 0x00, 0x00,  // & (5)
    0x00, 0x00, 0x03, 0x00,  // ' (6)
    0x00, 0x1e, 0x21, 0x00,  // ( (7)
    0x00, 0x21, 0x1e, 0x00,  // ) (8)
    0x00, 0x05, 0x02, 0x05,  // * (9)
    0x08, 0x1c, 0x08, 0x00,  // + (10)
    0x00, 0x20, 0x10, 0x00,  // , (11)
    0x08, 0x08, 0x08, 0x08,  // - (12)
    0x00, 0x00, 0x10, 0x00,  // . (13)
    0x10, 0x08, 0x04, 0x02,  // / (14)
    0x1e, 0x29, 0x25, 0x1e,  // 0 (15)
    0x00, 0x22, 0x3f, 0x20,  // 1 (16)
    0x32, 0x29, 0x29, 0x26,  // 2 (17)
    0x12, 0x21, 0x25, 0x1a,  // 3 (18)
    0x0f, 0x08, 0x08, 0x3f,  // 4 (19)
    0x17, 0x25, 0x25, 0x19,  // 5 (20)
    0x1e, 0x25, 0x25, 0x18,  // 6 (21)
    0x01, 0x39, 0x05, 0x03,  // 7 (22)
    0x1a, 0x25, 0x25, 0x1a,  // 8 (23)
    0x06, 0x29, 0x29, 0x1e,  // 9 (24)
    0x00, 0x00, 0x14, 0x00,  // : (25)
    0x00, 0x20, 0x14, 0x00,  // ; (26)
    0x00, 0x08, 0x14, 0x22,  // < (27)
    0x14, 0x14, 0x14, 0x00,  // = (28)
    0x22, 0x14, 0x08, 0x00,  // > (29)
    0x02, 0x01, 0x29, 0x06,  // ? (30)
    0x1e, 0x25, 0x2d, 0x16,  // @ (31)
    0x3e, 0x09, 0x09, 0x3e,  // A (32)
    0x3f, 0x25, 0x25, 0x1a,  // B (33)
    0x1e, 0x21, 0x21, 0x12,  // C (34)
    0x3f, 0x21, 0x21, 0x1e,  // D (35)
    0x3f, 0x25, 0x25, 0x21,  // E (36)
    0x3f, 0x05, 0x05, 0x01,  // F (37)
    0x1e, 0x21, 0x29, 0x3a,  // G (38)
    0x3f, 0x04, 0x04, 0x3f,  // H (39)
    0x21, 0x3f, 0x21, 0x00,  // I (40)
    0x10, 0x20, 0x21, 0x1f,  // J (41)
    0x3f, 0x04, 0x0a, 0x31,  // K (42)
    0x3f, 0x20, 0x20, 0x20,  // L (43)
    0x3f, 0x02, 0x02, 0x3f,  // M (44)
    0x3f, 0x02, 0x04, 0x3f,  // N (45)
    0x1e, 0x21, 0x21, 0x1e,  // O (46)
    0x3f, 0x09, 0x09, 0x06,  // P (47)
    0x1e, 0x21, 0x11, 0x2e,  // Q (48)
    0x3f, 0x09, 0x09, 0x36,  // R (49)
    0x22, 0x25, 0x25, 0x19,  // S (50)
    0x00, 0x01, 0x3f, 0x01,  // T (51)
    0x1f, 0x20, 0x20, 0x1f,  // U (52)
    0x0f, 0x10, 0x20, 0x1f,  // V (53)
    0x3f, 0x10, 0x10, 0x3f,  // W (54)
    0x3b, 0x04, 0x04, 0x3b,  // X (55)
    0x03, 0x04, 0x38, 0x07,  // Y (56)
    0x31, 0x2d, 0x23, 0x21,  // Z (57)
    0x00, 0x3f, 0x21, 0x21,  // [ (58)
    0x02, 0x04, 0x08, 0x10,  // \ (59)
    0x21, 0x21, 0x3f, 0x00,  // ] (60)
    0x02, 0x01, 0x01, 0x02,  // ^ (61)
    0x20, 0x20, 0x20, 0x20,  // _ (62)
    0x00, 0x01, 0x02, 0x00,  // ` (63)
    0x10, 0x2a, 0x2a, 0x3c,  // a (64)
    0x3f, 0x24, 0x24, 0x18,  // b (65)
    0x1c, 0x22, 0x22, 0x10,  // c (66)
    0x18, 0x24, 0x24, 0x3f,  // d (67)
    0x1c, 0x2a, 0x2a, 0x2c,  // e (68)
    0x08, 0x3e, 0x09, 0x02,  // f (69)
    0x26, 0x29, 0x29, 0x1f,  // g (70)
    0x3f, 0x04, 0x04, 0x38,  // h (71)
    0x00, 0x24, 0x3d, 0x20,  // i (72)
    0x00, 0x20, 0x24, 0x1d,  // j (73)
    0x3f, 0x08, 0x14, 0x22,  // k (74)
    0x00, 0x01, 0x3f, 0x00,  // l (75)
    0x3e, 0x04, 0x04, 0x3e,  // m (76)
    0x3e, 0x04, 0x02, 0x3c,  // n (77)
    0x1c, 0x22, 0x22, 0x1c,  // o (78)
    0x3e, 0x12, 0x12, 0x0c,  // p (79)
    0x0c, 0x12, 0x12, 0x3e,  // q (80)
    0x3e, 0x04, 0x02, 0x04,  // r (81)
    0x24, 0x2a, 0x2a, 0x12,  // s (82)
    0x02, 0x1f, 0x22, 0x20,  // t (83)
    0x1e, 0x20, 0x20, 0x1e,  // u (84)
    0x0e, 0x10, 0x20, 0x1e,  // v (85)
    0x3e, 0x10, 0x10, 0x3e,  // w (86)
    0x36, 0x08, 0x08, 0x36,  // x (87)
    0x26, 0x28, 0x28, 0x1e,  // y (88)
    0x32, 0x2a, 0x26, 0x22,  // z (89)
    0x00, 0x04, 0x1e, 0x21,  // { (90)
    0x00, 0x3f, 0x00, 0x00,  // | (91)
    0x21, 0x1e, 0x04, 0x00,  // } (92)
    0x08, 0x04, 0x08, 0x04,  // ~ (93)
    0x3e, 0x09, 0x09, 0x3e,  // А (94)
    0x3f, 0x25, 0x25, 0x19,  // Б (95)
    0x3f, 0x25, 0x25, 0x1a,  // В (96)
    0x3f, 0x01, 0x01, 0x03,  // Г (97)
    0x3e, 0x11, 0x11, 0x3e,  // Д (98)
    0x3f, 0x25, 0x25, 0x21,  // Е (99)
    0x24, 0x18, 0x3e, 0x18,  // Ж (100)
    0x12, 0x21, 0x25, 0x1a,  // З (101)
    0x3f, 0x04, 0x02, 0x3f,  // И (102)
    0x3f, 0x04, 0x02, 0x3f,  // Й (103)
    0x3f, 0x04, 0x0a, 0x31,  // К (104)
    0x20, 0x1e, 0x01, 0x3f,  // Л (105)
    0x3f, 0x02, 0x02, 0x3f,  // М (106)
    0x3f, 0x08, 0x08, 0x3f,  // Н (107)
    0x1e, 0x21, 0x21, 0x1e,  // О (108)
    0x3f, 0x01, 0x01, 0x3f,  // П (109)
    0x3f, 0x09, 0x09, 0x06,  // Р (110)
    0x1e, 0x21, 0x21, 0x10,  // С (111)
    0x00, 0x01, 0x3f, 0x01,  // Т (112)
    0x27, 0x28, 0x28, 0x1f,  // У (113)
    0x0c, 0x12, 0x3f, 0x0c,  // Ф (114)
    0x3b, 0x04, 0x04, 0x3b,  // Х (115)
    0x0f, 0x10, 0x10, 0x3f,  // Ц (116)
    0x07, 0x08, 0x08, 0x3f,  // Ч (117)
    0x1e, 0x10, 0x18, 0x16,  // Ш (118)
    0x1c, 0x10, 0x18, 0x36,  // Щ (119)
    0x01, 0x3f, 0x28, 0x30,  // Ъ (120)
    0x3f, 0x28, 0x18, 0x07,  // Ы (121)
    0x00, 0x3f, 0x24, 0x38,  // Ь (122)
    0x12, 0x21, 0x25, 0x1e,  // Э (123)
    0x3f, 0x08, 0x14, 0x08,  // Ю (124)
    0x36, 0x09, 0x09, 0x3f,  // Я (125)
    0x10, 0x2a, 0x2a, 0x3c,  // а (126)
    0x1e, 0x25, 0x25, 0x19,  // б (127)
    0x3e, 0x25, 0x25, 0x1a,  // в (128)
    0x3e, 0x02, 0x02, 0x02,  // г (129)
    0x19, 0x25, 0x25, 0x1e,  // д (130)
    0x1c, 0x2a, 0x2a, 0x24,  // е (131)
    0x14, 0x08, 0x3e, 0x14,  // ж (132)
    0x14, 0x22, 0x2a, 0x34,  // з (133)
    0x3e, 0x08, 0x04, 0x3e,  // и (134)
    0x3e, 0x09, 0x05, 0x3e,  // й (135)
    0x3e, 0x08, 0x14, 0x22,  // к (136)
    0x3c, 0x02, 0x02, 0x3e,  // л (137)
    0x3e, 0x04, 0x04, 0x3e,  // м (138)
    0x3e, 0x08, 0x08, 0x3e,  // н (139)
    0x1c, 0x22, 0x22, 0x1c,  // о (140)
    0x3e, 0x02, 0x02, 0x3e,  // п (141)
    0x3e, 0x12, 0x12, 0x0c,  // р (142)
    0x1c, 0x22, 0x22, 0x10,  // с (143)
    0x02, 0x02, 0x3e, 0x02,  // т (144)
    0x06, 0x28, 0x28, 0x1e,  // у (145)
    0x08, 0x14, 0x3e, 0x14,  // ф (146)
    0x36, 0x08, 0x08, 0x36,  // х (147)
    0x1e, 0x10, 0x10, 0x3e,  // ц (148)
    0x0e, 0x10, 0x10, 0x3e,  // ч (149)
    0x1c, 0x10, 0x18, 0x14,  // ш (150)
    0x1c, 0x10, 0x18, 0x34,  // щ (151)
    0x02, 0x3e, 0x28, 0x10,  // ъ (152)
    0x3e, 0x28, 0x10, 0x0e,  // ы (153)
    0x00, 0x3e, 0x28, 0x10,  // ь (154)
    0x14, 0x22, 0x2a, 0x1c,  // э (155)
    0x3e, 0x18, 0x24, 0x18,  // ю (156)
    0x2c, 0x12, 0x12, 0x3e,  // я (157)
    0x3e, 0x2b, 0x2a, 0x23,  // Ё (158)
    0x18, 0x25, 0x24, 0x29,  // ё (159)
};

const gfx_map_font_t gfx_font_4x6 PROGMEM = {_gfx_font_4x6_0_159, 0, 159, 4, 6};