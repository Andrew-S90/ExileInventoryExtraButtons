class CfgExileCustomCode 
{
	ExileClient_object_player_event_onInventoryOpened = "custom\InventoryButton\ExileClient_object_player_event_onInventoryOpened.sqf";
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
};
