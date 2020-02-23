
	_chance=random [0, .5, 1];
	_textToShow= "No prone jump selected";

	if(_chance<.2) then 
	{
		_textToShow="No Grasshopper";
	};
	[_textToShow, ""] call ace_common_fnc_displayTextPicture;
