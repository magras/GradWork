#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 30 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef LCDNOVA30PX
#define LCDNOVA30PX 1
#endif

#if LCDNOVA30PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x3, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x3a,
    0xff, 0xfb, 0xcb, 0xc0, 0xb, 0xbd, 0xbc, 0x0,
    0xfb, 0xdb, 0xc0, 0x1f, 0xbd, 0xbc, 0x2, 0xf7,
    0xdb, 0xc0, 0x3e, 0x7d, 0xbc, 0x7, 0xc7, 0xdb,
    0xc0, 0xfc, 0x7d, 0x78, 0xf, 0x83, 0xc1, 0x1,
    0xf0, 0x4, 0x78, 0x3f, 0x3, 0xcb, 0xc3, 0xe0,
    0x7d, 0xbc, 0x7c, 0x7, 0xdb, 0xcf, 0xc0, 0x7d,
    0xbc, 0xf4, 0x7, 0xdb, 0xef, 0x0, 0x7d, 0xbe,
    0xf0, 0x7, 0xdb, 0xed, 0x0, 0x7d, 0x3a, 0xff,
    0xfb, 0xc0, 0xff, 0xff, 0xe0, 0x7, 0xff, 0xfc,
    0x0,

    /* U+31 "1" */
    0x0, 0xff, 0x80, 0x0, 0x2, 0xfe, 0xd0, 0x0,
    0x0, 0xbb, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x3, 0xc0, 0x0, 0x0, 0x1, 0x0, 0x0,
    0x0, 0x3, 0xc0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7, 0xd0, 0x0,
    0x1f, 0xfb, 0xef, 0xf4, 0x7f, 0xfe, 0xbf, 0xfc,
    0x2f, 0xfc, 0x3f, 0xf8,

    /* U+32 "2" */
    0x3, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x2,
    0xff, 0xfb, 0xc0, 0x0, 0x0, 0x7d, 0x0, 0x0,
    0x7, 0xd0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x7,
    0xd0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x7, 0xd0,
    0x0, 0x0, 0x7d, 0x3, 0xff, 0xfe, 0x80, 0xff,
    0xff, 0xe0, 0x3a, 0xff, 0xf8, 0xb, 0xc0, 0x0,
    0x0, 0xbc, 0x0, 0x0, 0xb, 0xc0, 0x0, 0x0,
    0xbc, 0x0, 0x0, 0xb, 0xc0, 0x0, 0x0, 0xbc,
    0x0, 0x0, 0xb, 0xc0, 0x0, 0x0, 0xba, 0xff,
    0xff, 0x4a, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff,
    0x80,

    /* U+33 "3" */
    0x2f, 0xff, 0xff, 0x83, 0xff, 0xff, 0xfc, 0x1f,
    0xff, 0xff, 0x40, 0x0, 0xf, 0xd0, 0x0, 0x7,
    0xf4, 0x0, 0x1, 0xfd, 0x0, 0x0, 0x7f, 0x40,
    0x0, 0x1f, 0xd0, 0x0, 0x2, 0xf4, 0x0, 0x0,
    0x19, 0x0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0xbf,
    0xff, 0xe0, 0x2, 0xff, 0xfb, 0xc0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d,
    0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x2f, 0xff,
    0xfb, 0xcb, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xfc,
    0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x7f, 0xa0, 0x0, 0x7, 0xf7, 0xd0,
    0x0, 0x7f, 0x4f, 0x80, 0x7, 0xf4, 0x3e, 0x0,
    0x7f, 0x40, 0xf8, 0x7, 0xf4, 0x3, 0xe0, 0x7f,
    0x40, 0xf, 0x87, 0xf4, 0x0, 0x3e, 0x2f, 0x40,
    0x0, 0xf8, 0x64, 0x0, 0x3, 0xe3, 0xff, 0xff,
    0xfb, 0x2f, 0xff, 0xff, 0xe0, 0x2f, 0xff, 0xfe,
    0xb0, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf,
    0x80, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0xf8,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0x3, 0xd0, 0x0, 0x0, 0x2, 0x0,

    /* U+35 "5" */
    0x7f, 0xff, 0xff, 0xca, 0xff, 0xff, 0xf0, 0xba,
    0xff, 0xf8, 0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0,
    0x0, 0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0, 0x0,
    0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0xb,
    0xc0, 0x0, 0x0, 0x3b, 0xff, 0xfc, 0x0, 0xff,
    0xff, 0xe0, 0x2, 0xff, 0xfb, 0xc0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d,
    0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x2f, 0xff,
    0xfb, 0xc7, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xfc,
    0x0,

    /* U+36 "6" */
    0x3, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x3a,
    0xff, 0xf8, 0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0,
    0x0, 0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0, 0x0,
    0xb, 0xc0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0xb,
    0xc0, 0x0, 0x0, 0x3b, 0xff, 0xfc, 0x0, 0xff,
    0xff, 0xe0, 0x3a, 0xff, 0xfb, 0xcb, 0xc0, 0x0,
    0x7d, 0xbc, 0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d,
    0xbc, 0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d, 0xbc,
    0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d, 0x3a, 0xff,
    0xfb, 0xc0, 0xff, 0xff, 0xe0, 0x3, 0xff, 0xfc,
    0x0,

    /* U+37 "7" */
    0x2f, 0xff, 0xff, 0x87, 0xff, 0xff, 0xed, 0x2f,
    0xff, 0xfb, 0xd0, 0x0, 0x0, 0x7d, 0x0, 0x0,
    0x7, 0xd0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x7,
    0xd0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x7, 0xd0,
    0x0, 0x0, 0x7c, 0x0, 0x1, 0xfe, 0x80, 0x0,
    0x3f, 0xd0, 0x0, 0xe, 0xb8, 0x0, 0x2, 0xf0,
    0x0, 0x0, 0x2f, 0x0, 0x0, 0x2, 0xf0, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0x2, 0xf0, 0x0, 0x0,
    0x2f, 0x0, 0x0, 0x2, 0xf0, 0x0, 0x0, 0x2f,
    0x0, 0x0, 0x2, 0xf0, 0x0, 0x0, 0x8, 0x0,
    0x0,

    /* U+38 "8" */
    0x3, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x3a,
    0xff, 0xfb, 0xcb, 0xc0, 0x0, 0x7d, 0xbc, 0x0,
    0x7, 0xdb, 0xc0, 0x0, 0x7d, 0xbc, 0x0, 0x7,
    0xdb, 0xc0, 0x0, 0x7d, 0xbc, 0x0, 0x7, 0xdb,
    0xc0, 0x0, 0x7d, 0x3b, 0xff, 0xfe, 0x80, 0xff,
    0xff, 0xe0, 0x3a, 0xff, 0xfb, 0xcb, 0xc0, 0x0,
    0x7d, 0xbc, 0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d,
    0xbc, 0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d, 0xbc,
    0x0, 0x7, 0xdb, 0xc0, 0x0, 0x7d, 0x3a, 0xff,
    0xfb, 0xc0, 0xff, 0xff, 0xe0, 0x3, 0xff, 0xfc,
    0x0,

    /* U+39 "9" */
    0x3, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xe0, 0x3a,
    0xff, 0xfb, 0xcb, 0xc0, 0x0, 0x7d, 0xbc, 0x0,
    0x7, 0xdb, 0xc0, 0x0, 0x7d, 0xbc, 0x0, 0x7,
    0xdb, 0xc0, 0x0, 0x7d, 0xbc, 0x0, 0x7, 0xdb,
    0xc0, 0x0, 0x7d, 0x3b, 0xff, 0xfe, 0x80, 0xff,
    0xff, 0xe0, 0x2, 0xff, 0xfb, 0xc0, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d,
    0x0, 0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x0,
    0x0, 0x7, 0xd0, 0x0, 0x0, 0x7d, 0x2, 0xff,
    0xfb, 0xc0, 0xff, 0xff, 0xe0, 0x3, 0xff, 0xfc,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 252, .box_w = 16, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 252, .box_w = 15, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 252, .box_w = 14, .box_h = 23, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
const lv_font_t LcdNova30px = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LCDNOVA30PX*/

