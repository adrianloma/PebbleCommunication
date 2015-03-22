#include <pebble.h>
#include <Messages.h>
    
Window *window;	
	




void init(void) {
	window = window_create();
	window_stack_push(window, true);
	
	// Register AppMessage handlers
    messagesInit();

	send_message();
}

void deinit(void) {
	app_message_deregister_callbacks();
	window_destroy(window);
}

int main( void ) {
	init();
	app_event_loop();
	deinit();
}