int PRESSED_BUTTON;
static int UP = 1;
static int DOWN = 2;
static int SELECT = 3;
static int NONE = 0;

static void select_click_handler(ClickRecognizerRef recognizer, void *context) {
  PRESSED_BUTTON = SELECT;
}

static void up_click_handler(ClickRecognizerRef recognizer, void *context) {
  PRESSED_BUTTON = UP;
}

static void down_click_handler(ClickRecognizerRef recognizer, void *context) {
  PRESSED_BUTTON = DOWN;
}

static void click_config_provider(void *context) {
  window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler);
  window_single_click_subscribe(BUTTON_ID_UP, up_click_handler);
  window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler);
}


void buttonHandlersInit(){
      window_set_click_config_provider(window, click_config_provider);
}