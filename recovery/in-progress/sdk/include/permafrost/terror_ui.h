/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#include <permafrost/native_api.h>
#ifndef TERROR_UI_H
#define TERROR_UI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define TERROR_UI_APPEARANCE_DEFAULT 0xffffffffu

#ifndef WM_BAREMETAL_PROGRAM_APP_WINDOW_TYPES_DEFINED
typedef struct WmBaremetalProgramAppWindowInfo WmBaremetalProgramAppWindowInfo;
typedef struct WmBaremetalProgramAppWindowPointerInfo WmBaremetalProgramAppWindowPointerInfo;
#endif

#ifdef __cplusplus
extern "C" {
#endif

enum {
	TERROR_UI_WINDOW_ALLOCATE_PIXELS = 1u << 0u,
	TERROR_UI_DEFAULT_CLEAR_RGB = 0xf6f6f6u,
	TERROR_UI_DEFAULT_TRANSPARENCY_PERCENT = 15u,
	TERROR_UI_DEFAULT_SHADOW_PERCENT = 0u,
	TERROR_UI_SCROLLBAR_WIDTH = 12u,
	TERROR_UI_SCROLLBAR_BUTTON_HEIGHT = 14u,
	TERROR_UI_SCROLLBAR_BUTTON_GAP = 2u,
	TERROR_UI_SCROLLBAR_BOTTOM_PAD = 8u,
	TERROR_UI_SCROLLBAR_MIN_THUMB_HEIGHT = 18u,
	TERROR_UI_SCROLLBAR_THUMB_INSET = 1u,
	TERROR_UI_SCROLLBAR_ARROW_ROWS = 4u,
	TERROR_UI_SCROLLBAR_TRACK_RGB = 0xe4e4e4u,
	TERROR_UI_SCROLLBAR_THUMB_RGB = 0xbebebeu,
	TERROR_UI_SCROLLBAR_BUTTON_RGB = 0xeeeeeeu,
	TERROR_UI_SCROLLBAR_TRACK_BORDER_RGB = 0xacacacu,
	TERROR_UI_SCROLLBAR_THUMB_BORDER_RGB = 0x747474u,
	TERROR_UI_SCROLLBAR_BUTTON_BORDER_RGB = 0x969696u,
	TERROR_UI_SCROLLBAR_ARROW_RGB = 0x464646u
};

typedef struct TerrorUIImage {
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	const void* rgbaPixels;
} TerrorUIImage;

typedef struct TerrorUIWindowSpec {
	const char* title;
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	uint32_t clearRgb;
	uint32_t transparencyPercent;
	uint32_t shadowPercent;
	uint32_t mode;
	uint32_t effectPercent;
	const char* fileMenu;
	const char* editMenu;
	const char* windowMenu;
	uint32_t flags;
} TerrorUIWindowSpec;

typedef struct TerrorUIWindow {
	uint32_t id;
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	uint32_t clearRgb;
	uint32_t transparencyPercent;
	uint32_t shadowPercent;
	uint32_t mode;
	uint32_t effectPercent;
	uint32_t flags;
	uint32_t pixelsSize;
	uint8_t* pixels;
	const char* title;

	uint32_t lastPresentHash;
	uint32_t hasPresentHash;

	uint32_t frameInfoValid;
	unsigned char frameInfo[768];
} TerrorUIWindow;

typedef struct TerrorUIKeyboardState {
	bool up;
	bool down;
	bool left;
	bool right;
	bool backspace;
	bool enter;
	bool escape;
	bool a;
	bool d;
	bool q;
	bool r;
	bool s;
	bool w;
	int lastChar;
	uint32_t eventCount;
} TerrorUIKeyboardState;

typedef struct TerrorUIPoint {
	int32_t x;
	int32_t y;
} TerrorUIPoint;

typedef struct TerrorUISize {
	int32_t width;
	int32_t height;
} TerrorUISize;

typedef struct TerrorUIRect {
	int32_t x;
	int32_t y;
	int32_t width;
	int32_t height;
} TerrorUIRect;

/* Theme roles use the matching TundraColours variable names. */
typedef enum TerrorUIColourRole {
	TERROR_UI_COLOUR_WINDOW_BACKGROUND = 0,
	TERROR_UI_COLOUR_TEXT = 1,
	TERROR_UI_COLOUR_CONTROL = 2,
	TERROR_UI_COLOUR_CONTROL_BORDER = 3,
	TERROR_UI_COLOUR_ACCENT = 4,
	TERROR_UI_COLOUR_SCROLLBAR_TRACK = 5,
	TERROR_UI_COLOUR_SCROLLBAR_THUMB = 6,
	TERROR_UI_COLOUR_SCROLLBAR_BUTTON = 7,
	TERROR_UI_COLOUR_SCROLLBAR_TRACK_BORDER = 8,
	TERROR_UI_COLOUR_SCROLLBAR_THUMB_BORDER = 9,
	TERROR_UI_COLOUR_SCROLLBAR_BUTTON_BORDER = 10,
	TERROR_UI_COLOUR_SCROLLBAR_ARROW = 11,
	TERROR_UI_COLOUR_CONTROL_PRESSED_SHADE = 12,
	TERROR_UI_COLOUR_CONTROL_HOVER_SHADE = 13,
	TERROR_UI_COLOUR_SELECTED_TEXT = 14,
	TERROR_UI_COLOUR_TUNDRA_SHADOW = 15,
	TERROR_UI_COLOUR_TUNDRA_DOCK_PLACEHOLDER = 16,
	TERROR_UI_COLOUR_SUCCESS_TEXT = 17,
	TERROR_UI_COLOUR_ERROR_TEXT = 18,
	TERROR_UI_COLOUR_EREBUS_APPLICATION_ICON = 19,
	TERROR_UI_COLOUR_CONTROL_DISABLED_BORDER = 20,
	TERROR_UI_COLOUR_SEPARATOR = 21,
	TERROR_UI_COLOUR_TUNDRA_DESKTOP_STRIPE = 22,
	TERROR_UI_COLOUR_WINDOW_ACTIVE_BACKGROUND = 23,
	TERROR_UI_COLOUR_MENU_BACKGROUND = 24,
	TERROR_UI_COLOUR_MENU_TEXT = 25,
	TERROR_UI_COLOUR_MENU_BORDER = 26,
	TERROR_UI_COLOUR_EREBUS_FOLDER_BACKGROUND = 27,
	TERROR_UI_COLOUR_EREBUS_DESKTOP_ICON_BORDER = 28,
	TERROR_UI_COLOUR_EREBUS_FOLDER_BORDER = 29,
	TERROR_UI_COLOUR_EREBUS_FOLDER_TAB = 30,
	TERROR_UI_COLOUR_FIELD_BACKGROUND = 31,
	TERROR_UI_COLOUR_EREBUS_ICON_BORDER = 32,
	TERROR_UI_COLOUR_SELECTION_INACTIVE = 33,
	TERROR_UI_COLOUR_WINDOW_CONTROL_BORDER = 34,
	TERROR_UI_COLOUR_SUCCESS_BORDER = 35,
	TERROR_UI_COLOUR_SUCCESS_BACKGROUND = 36,
	TERROR_UI_COLOUR_WARNING_BORDER = 37,
	TERROR_UI_COLOUR_WARNING_BACKGROUND = 38,
	TERROR_UI_COLOUR_EREBUS_DOCUMENT_ACCENT_BORDER = 39,
	TERROR_UI_COLOUR_EREBUS_DOCUMENT_ACCENT_BACKGROUND = 40,
	TERROR_UI_COLOUR_EREBUS_APPLICATION_ICON_BORDER = 41,
	TERROR_UI_COLOUR_TABLE_HEADER = 42,
	TERROR_UI_COLOUR_SELECTION = 43,
	TERROR_UI_COLOUR_ALTERNATE_ROW = 44,
	TERROR_UI_COLOUR_PANEL_BACKGROUND = 45,
	TERROR_UI_COLOUR_EREBUS_PATH_TEXT = 46,
	TERROR_UI_COLOUR_EREBUS_PATH_SEPARATOR = 47,
	TERROR_UI_COLOUR_TUNDRA_DOCK_BORDER = 48,
	TERROR_UI_COLOUR_SECONDARY_TEXT = 49,
	TERROR_UI_COLOUR_DISABLED_TEXT = 50,
	TERROR_UI_COLOUR_NOTICE_BACKGROUND = 51,
	TERROR_UI_COLOUR_NOTICE_BORDER = 52,
	TERROR_UI_COLOUR_NOTICE_TEXT = 53,
	TERROR_UI_COLOUR_RESIZE_GRIP = 54,
	TERROR_UI_COLOUR_RESIZE_GRIP_HIGHLIGHT = 55,
	TERROR_UI_COLOUR_RESIZE_GRIP_BORDER = 56,
	TERROR_UI_COLOUR_WINDOW_ACTIVE_BORDER = 57,
	TERROR_UI_COLOUR_WINDOW_ACTIVE_TITLE = 58,
	TERROR_UI_COLOUR_CONTROL_DISABLED = 59,
	TERROR_UI_COLOUR_WINDOW_CLOSE = 60,
	TERROR_UI_COLOUR_WINDOW_MINIMISE = 61,
	TERROR_UI_COLOUR_WINDOW_MAXIMISE = 62,
	TERROR_UI_COLOUR_WINDOW_SHADE = 63,
	TERROR_UI_COLOUR_WINDOW_INACTIVE_TEXT = 64,
	TERROR_UI_COLOUR_POINTER = 65,
	TERROR_UI_COLOUR_POINTER_SHADOW = 66,
	TERROR_UI_COLOUR_POINTER_PRESSED = 67,
	TERROR_UI_COLOUR_POINTER_SECONDARY = 68,
	TERROR_UI_COLOUR_GRAPH_BACKGROUND = 69,
	TERROR_UI_COLOUR_GRAPH_BORDER = 70,
	TERROR_UI_COLOUR_TUNDRA_DESKTOP_TOP = 71,
	TERROR_UI_COLOUR_TUNDRA_DESKTOP_BOTTOM = 72,
} TerrorUIColourRole;

typedef struct TerrorUIScrollbarModel {
 int32_t minimum, maximum, value, pageSize;
} TerrorUIScrollbarModel;

typedef struct TerrorUIScrollbarLayout {
 int32_t orientation; /* 0: vertical, 1: horizontal. */
 TerrorUIRect bar, track, decrease, increase, thumb;
} TerrorUIScrollbarLayout;

typedef struct TerrorUIScrollbarsLayout {
 TerrorUIRect content;
 bool hasVertical, hasHorizontal;
 uint16_t reserved;
 TerrorUIScrollbarLayout vertical, horizontal;
} TerrorUIScrollbarsLayout;

uint32_t terror_ui_colour(TerrorUIColourRole role);
void terror_ui_reload_colours(void);
void terror_ui_scrollbars_layout(TerrorUIRect rect,
 const TerrorUIScrollbarModel *vertical,const TerrorUIScrollbarModel *horizontal,
 TerrorUIScrollbarsLayout *outLayout);
int32_t terror_ui_scrollbar_value_from_point(const TerrorUIScrollbarLayout *layout,
 const TerrorUIScrollbarModel *model,int32_t coordinate,int32_t grabOffset);

typedef struct TerrorUIEdgeInsets {
	int32_t top;
	int32_t left;
	int32_t bottom;
	int32_t right;
} TerrorUIEdgeInsets;

typedef struct TerrorUIInput {
	uint32_t flags;
	int32_t pointerX;
	int32_t pointerY;
	uint32_t pointerButtons;
	uint32_t pointerPressedButtons;
	TerrorUIKeyboardState keyboard;
} TerrorUIInput;

typedef void (*TerrorUIActionFn)(void* context);

typedef struct TerrorUIView TerrorUIView;

enum {
	TERROR_UI_INPUT_POINTER_VALID = 1u << 0u,
	TERROR_UI_INPUT_KEYBOARD_VALID = 1u << 1u,

	TERROR_UI_VIEW_EMPTY = 0u,
	TERROR_UI_VIEW_TEXT = 1u,
	TERROR_UI_VIEW_RECTANGLE = 2u,
	TERROR_UI_VIEW_BUTTON = 3u,
	TERROR_UI_VIEW_SPACER = 4u,
	TERROR_UI_VIEW_HSTACK = 5u,
	TERROR_UI_VIEW_VSTACK = 6u,
	TERROR_UI_VIEW_ZSTACK = 7u,
	TERROR_UI_VIEW_TEXT_FIELD = 8u,

	TERROR_UI_VIEW_HAS_FOREGROUND = 1u << 0u,
	TERROR_UI_VIEW_HAS_BACKGROUND = 1u << 1u,
	TERROR_UI_VIEW_HAS_WIDTH = 1u << 2u,
	TERROR_UI_VIEW_HAS_HEIGHT = 1u << 3u,
	TERROR_UI_VIEW_SECRET_TEXT = 1u << 4u,

	TERROR_UI_ALIGNMENT_LEADING = 0u,
	TERROR_UI_ALIGNMENT_CENTER = 1u,
	TERROR_UI_ALIGNMENT_TRAILING = 2u,
	TERROR_UI_ALIGNMENT_FILL = 3u,

	TERROR_UI_DEFAULT_TEXT_RGB = 0x202020u,
	TERROR_UI_DEFAULT_CONTROL_RGB = 0xf4f4f4u,
	TERROR_UI_DEFAULT_CONTROL_BORDER_RGB = 0x9a9a9au,
	TERROR_UI_DEFAULT_ACCENT_RGB = 0x286dc4u
};

struct TerrorUIView {
	uint32_t kind;
	uint32_t flags;
	const char* text;
	uintptr_t textCapacity;
	const TerrorUIView* children;
	uint32_t childCount;
	uint32_t spacing;
	uint32_t alignment;
	uint32_t foregroundRgb;
	uint32_t backgroundRgb;
	uint32_t textScale;
	int32_t width;
	int32_t height;
	TerrorUIEdgeInsets padding;
	TerrorUIActionFn action;
	void* actionContext;
};

typedef uint32_t (*TerrorUIBodyFn)(TerrorUIWindow* window, void* state);
typedef uint32_t (*TerrorUIEventFn)(
	TerrorUIWindow* window,
	const WmBaremetalProgramAppWindowInfo* info,
	void* state);

typedef struct TerrorUIApp {
	TerrorUIWindow* window;
	TerrorUIWindowSpec spec;
	TerrorUIBodyFn body;
	TerrorUIEventFn event;
	void* state;
	uint32_t maxFrames;
	uint32_t idleYieldFrames;
} TerrorUIApp;

TerrorUIWindowSpec terror_ui_window_spec(const char* title, uint32_t width, uint32_t height);
TerrorUIWindowSpec terror_ui_window_spec_transparency(TerrorUIWindowSpec spec, uint32_t percent);
TerrorUIWindowSpec terror_ui_window_spec_shadow(TerrorUIWindowSpec spec, uint32_t percent);
TerrorUIWindowSpec terror_ui_window_spec_mode(TerrorUIWindowSpec spec, uint32_t mode, uint32_t effectPercent);
TerrorUIWindowSpec terror_ui_window_spec_solid(TerrorUIWindowSpec spec);
TerrorUIWindowSpec terror_ui_window_spec_clear(TerrorUIWindowSpec spec);
TerrorUIWindowSpec terror_ui_window_spec_blur(TerrorUIWindowSpec spec, uint32_t effectPercent);
TerrorUIWindowSpec terror_ui_window_spec_refract(TerrorUIWindowSpec spec, uint32_t effectPercent);
uint32_t terror_ui_window_open(TerrorUIWindow* window, const TerrorUIWindowSpec* spec);
uint32_t terror_ui_window_present(
	TerrorUIWindow* window,
	const char* title,
	const void* rgbaPixels,
	uint32_t width,
	uint32_t height,
	uint32_t stride,
	uint32_t clearRgb);
uint32_t terror_ui_window_present_image(TerrorUIWindow* window, const char* title, const TerrorUIImage* image);
uint32_t terror_ui_window_present_buffer(TerrorUIWindow* window);
uint32_t terror_ui_window_resize_buffer(TerrorUIWindow* window, uint32_t width, uint32_t height);
uint32_t terror_ui_window_sync_buffer(TerrorUIWindow* window, const WmBaremetalProgramAppWindowInfo* info);
uint32_t terror_ui_window_query(TerrorUIWindow* window, WmBaremetalProgramAppWindowInfo* outInfo);
bool terror_ui_window_should_close(TerrorUIWindow* window);
uint32_t terror_ui_window_close(TerrorUIWindow* window);
uint32_t terror_ui_window_set_menus(
	TerrorUIWindow* window,
	const char* fileMenu,
	const char* editMenu,
	const char* windowMenu);
uint32_t terror_ui_window_set_appearance(TerrorUIWindow* window, uint32_t transparencyPercent, uint32_t shadowPercent);
uint32_t terror_ui_window_set_transparency(TerrorUIWindow* window, uint32_t percent);
uint32_t terror_ui_window_set_shadow(TerrorUIWindow* window, uint32_t percent);
uint32_t terror_ui_window_set_mode(TerrorUIWindow* window, uint32_t mode, uint32_t effectPercent);
uint32_t terror_ui_window_set_solid(TerrorUIWindow* window);
uint32_t terror_ui_window_set_clear(TerrorUIWindow* window);
uint32_t terror_ui_window_set_blur(TerrorUIWindow* window, uint32_t effectPercent);
uint32_t terror_ui_window_set_refract(TerrorUIWindow* window, uint32_t effectPercent);
uint32_t terror_ui_window_pointer_state(TerrorUIWindow* window, WmBaremetalProgramAppWindowPointerInfo* outInfo);
uint32_t terror_ui_window_configure(
	uint32_t id,
	int32_t x,
	int32_t y,
	uint32_t flagMask,
	uint32_t flagValues);
uint32_t terror_ui_window_set_content_size(uint32_t id, uint32_t width, uint32_t height);
uint32_t terror_ui_window_list(
	WmBaremetalProgramAppWindowInfo* windows,
	uint32_t windowCapacity,
	uint32_t* outWindowCount);
uint32_t terror_ui_window_menu_command(uint32_t id, uint32_t menuKind, uint32_t menuIndex);
uint32_t terror_ui_window_pointer_event(uint32_t id, int32_t x, int32_t y, uint32_t buttons, uint32_t flags);
uint32_t terror_ui_window_focus(uint32_t id, int32_t x, int32_t y);
uint32_t terror_ui_window_request_close(uint32_t id, int32_t x, int32_t y);
bool terror_ui_window_info_requests_close(const WmBaremetalProgramAppWindowInfo* info);
void terror_ui_keyboard_clear(TerrorUIKeyboardState* state);
uint32_t terror_ui_keyboard_poll(TerrorUIKeyboardState* state);
bool terror_ui_quit_key_pressed(void);
void terror_ui_yield_frames(uint32_t frames);
uint32_t terror_ui_app_run(TerrorUIApp* app);
TerrorUIEdgeInsets terror_ui_insets(int32_t all);
TerrorUIEdgeInsets terror_ui_insets_xy(int32_t horizontal, int32_t vertical);
TerrorUIEdgeInsets terror_ui_insets_make(int32_t top, int32_t left, int32_t bottom, int32_t right);
TerrorUIView terror_ui_view_empty(void);
TerrorUIView terror_ui_text(const char* text);
TerrorUIView terror_ui_text_field(char* buffer, uintptr_t capacity, bool secret, TerrorUIActionFn action, void* context);
TerrorUIView terror_ui_rectangle(uint32_t rgb);
TerrorUIView terror_ui_spacer(void);
TerrorUIView terror_ui_button(const char* title, TerrorUIActionFn action, void* context);
TerrorUIView terror_ui_hstack(const TerrorUIView* children, uint32_t childCount, uint32_t spacing);
TerrorUIView terror_ui_vstack(const TerrorUIView* children, uint32_t childCount, uint32_t spacing);
TerrorUIView terror_ui_zstack(const TerrorUIView* children, uint32_t childCount);
TerrorUIView terror_ui_view_padding(TerrorUIView view, TerrorUIEdgeInsets insets);
TerrorUIView terror_ui_view_foreground(TerrorUIView view, uint32_t rgb);
TerrorUIView terror_ui_view_background(TerrorUIView view, uint32_t rgb);
TerrorUIView terror_ui_view_frame(TerrorUIView view, int32_t width, int32_t height);
TerrorUIView terror_ui_view_text_scale(TerrorUIView view, uint32_t scale);
TerrorUIView terror_ui_view_alignment(TerrorUIView view, uint32_t alignment);
TerrorUISize terror_ui_view_measure(const TerrorUIView* view, TerrorUISize available);
uint32_t terror_ui_input_poll(TerrorUIWindow* window, TerrorUIInput* input);
uint32_t terror_ui_window_render_view(TerrorUIWindow* window, const TerrorUIView* view, const TerrorUIInput* input);

#ifdef __cplusplus
}
#endif

#endif
