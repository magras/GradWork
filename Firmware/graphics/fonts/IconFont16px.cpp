/*******************************************************************************
 * Size: 16 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ICONFONT16PX
#define ICONFONT16PX 1
#endif

#if ICONFONT16PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F240 "" */
    0x1a, 0xaa, 0xaa, 0x40, 0xbf, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x0, 0xf0, 0xe7, 0x0, 0x0, 0xbd,
    0xeb, 0x0, 0x0, 0xbe, 0xeb, 0x0, 0x0, 0xbf,
    0xeb, 0x0, 0x0, 0xbe, 0xe7, 0x0, 0x0, 0xbc,
    0xf0, 0x0, 0x0, 0xf0, 0xbf, 0xff, 0xff, 0xe0,
    0x1a, 0xaa, 0xaa, 0x40,

    /* U+F241 "" */
    0x1a, 0xaa, 0xaa, 0x40, 0xbf, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x0, 0xf0, 0xe7, 0x38, 0x0, 0xbd,
    0xeb, 0x38, 0x0, 0xbe, 0xeb, 0x38, 0x0, 0xbf,
    0xeb, 0x38, 0x0, 0xbe, 0xe7, 0x24, 0x0, 0xbc,
    0xf0, 0x0, 0x0, 0xf0, 0xbf, 0xff, 0xff, 0xe0,
    0x1a, 0xaa, 0xaa, 0x40,

    /* U+F242 "" */
    0x1a, 0xaa, 0xaa, 0x40, 0xbf, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x0, 0xf0, 0xe7, 0x39, 0xc0, 0xbd,
    0xeb, 0x3a, 0xc0, 0xbe, 0xeb, 0x3a, 0xc0, 0xbf,
    0xeb, 0x3a, 0xc0, 0xbe, 0xe7, 0x25, 0xc0, 0xbc,
    0xf0, 0x0, 0x0, 0xf0, 0xbf, 0xff, 0xff, 0xe0,
    0x1a, 0xaa, 0xaa, 0x40,

    /* U+F243 "" */
    0x1a, 0xaa, 0xaa, 0x40, 0x7f, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x0, 0xb0, 0xe7, 0x39, 0xce, 0xbd,
    0xeb, 0x3a, 0xce, 0xbf, 0xeb, 0x3a, 0xce, 0xbf,
    0xeb, 0x3a, 0xce, 0xbf, 0xe7, 0x25, 0xc9, 0xbc,
    0xf0, 0x0, 0x0, 0xb0, 0xbf, 0xff, 0xff, 0xe0,
    0x1a, 0xaa, 0xaa, 0x40,

    /* U+F244 "" */
    0x1a, 0xaa, 0xaa, 0x40, 0xbf, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x0, 0xf0, 0xeb, 0xff, 0xfe, 0xbd,
    0xeb, 0xf3, 0xfe, 0xbe, 0xeb, 0xd4, 0x7e, 0xbf,
    0xeb, 0xfd, 0xfe, 0xbe, 0xe7, 0xff, 0xfe, 0xbc,
    0xf0, 0x0, 0x0, 0xf0, 0xbf, 0xff, 0xff, 0xe0,
    0x1a, 0xaa, 0xaa, 0x40,

    /* U+F245 "" */
    0x0, 0x0, 0x0, 0x30, 0x0, 0xf, 0x0, 0x3,
    0xf0, 0x20, 0xdf, 0x1e, 0x35, 0xd1, 0xee, 0xe0,
    0x1f, 0xe0, 0x2, 0xf0, 0x1, 0xfe, 0x1, 0xee,
    0xe1, 0xe3, 0x5e, 0x10, 0xdf, 0x0, 0x3f, 0x0,
    0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0,

    /* U+F246 "" */
    0x1, 0x40, 0x1, 0x40, 0x2f, 0xf8, 0x2f, 0xf8,
    0x7f, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xbf, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfc,
    0xf, 0xff, 0xff, 0xf0, 0x3, 0xff, 0xff, 0xc0,
    0x0, 0xff, 0xff, 0x0, 0x0, 0x3f, 0xfc, 0x0,
    0x0, 0xf, 0xf0, 0x0, 0x0, 0x3, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 146, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 259, .adv_w = 256, .box_w = 16, .box_h = 15, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 62016, .range_length = 7, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t IconFont16px = {
#else
lv_font_t IconFont16px = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ICONFONT16PX*/

