/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#include "native_api.h"
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

	TERROR_UI_VIEW_HAS_FOREGROUND = 1u << 0u,
	TERROR_UI_VIEW_HAS_BACKGROUND = 1u << 1u,
	TERROR_UI_VIEW_HAS_WIDTH = 1u << 2u,
	TERROR_UI_VIEW_HAS_HEIGHT = 1u << 3u,

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
