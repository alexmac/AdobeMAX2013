//Ex1:

while(gameRunning) {
	handleInput();
	renderFrame();
}

//Ex2:

while(flashPlayerRunning) {
	handleInput();
	//Execute AS3 enterFrame
	{
		while(gameRunning) { // This blocks outer loop!
			handleInput();
			renderFrame();
		}
	}
	renderFrame();
}

//Ex3:

while(flashPlayerRunning) {
	handleInput();
	//Execute AS3 enterFrame
	{
		if(gameRunning) {
			handleInput();
			renderFrame();
		}
	}
	renderFrame();
}

//Ex4:

while(flashPlayerRunning) {
	handleInput();
	//Execute AS3 enterFrame
	{
		CModule.serviceUIRequests()
	}
	renderFrame();
}

while(backgroundWorkerRunning) {
	//Execute AS3 enterFrame
	{
		while(gameRunning) { // This blocks outer loop, but that's OK.
			handleInput();
			renderFrame();
			avm2_ui_thunk(doStuffOnMainThread);
		}
	}
}